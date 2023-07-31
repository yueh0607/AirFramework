using System;
using System.Linq;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.Diagnostics;
using System.Collections.Immutable;
using Microsoft.CodeAnalysis.CSharp.Syntax;

namespace AirFrameworkAnalyszer
{
    [Generator(LanguageNames.CSharp)]
    public class MessageAnalyser : ISourceGenerator
    {
        void ISourceGenerator.Execute(GeneratorExecutionContext context)
        {
            // 获取当前项目中所有的语法树
            var syntaxTrees = context.Compilation.SyntaxTrees;

            // 查找满足条件的partial类并为其添加HelloWorld方法
            foreach (var syntaxTree in syntaxTrees)
            {
                // 获取语法树的根节点
                var root = syntaxTree.GetRoot();

                // 遍历根节点找到类声明
                var classDeclarations = root.DescendantNodes().OfType<ClassDeclarationSyntax>();

                foreach (var classDeclaration in classDeclarations)
                {
                    // 获取类的符号信息
                    var semanticModel = context.Compilation.GetSemanticModel(syntaxTree);
                    var classSymbol = semanticModel.GetDeclaredSymbol(classDeclaration);

                    if (classSymbol != null &&
                        classSymbol.Interfaces.Any(i => i.Name == "IView") &&
                        classDeclaration.Identifier.ValueText.EndsWith("View"))
                    {
                        // 创建HelloWorld方法
                        var helloWorldMethod = SyntaxFactory.MethodDeclaration(
                            SyntaxFactory.ParseTypeName("void"), "HelloWorld")
                            .WithModifiers(SyntaxFactory.TokenList(SyntaxFactory.Token(SyntaxKind.PublicKeyword), SyntaxFactory.Token(SyntaxKind.StaticKeyword)))
                            .WithBody(SyntaxFactory.Block(SyntaxFactory.ParseStatement("Console.WriteLine(\"Hello, World!\");")));

                        // 将HelloWorld方法添加到类中
                        var newClassDeclaration = classDeclaration.AddMembers(helloWorldMethod);

                        // 替换语法树中的类声明
                        root = root.ReplaceNode(classDeclaration, newClassDeclaration);
                    }
                }

                // 将修改后的语法树添加到生成器上下文
                context.AddSource("modifiedSource.cs", root.SyntaxTree.GetText().ToString());
            }
        }

        void ISourceGenerator.Initialize(GeneratorInitializationContext context)
        {
        
        }
    }
}
