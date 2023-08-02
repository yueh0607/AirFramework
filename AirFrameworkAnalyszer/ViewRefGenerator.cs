using System;
using System.Collections.Immutable;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using Microsoft.CodeAnalysis.Diagnostics;

namespace CodeAnalyzer
{
    [DiagnosticAnalyzer(LanguageNames.CSharp)]
    public class MyAnalyzer : DiagnosticAnalyzer
    {
        private static DiagnosticDescriptor Rule1 = new DiagnosticDescriptor(
            "RID001", "InterfaceName", "The generic parameter type of LifeCycleHandler should be related to interface name", "Naming", DiagnosticSeverity.Warning, true);

        private static DiagnosticDescriptor Rule2 = new DiagnosticDescriptor(
            "RID002", "MethodName", "The method name should be related to interface name", "Naming", DiagnosticSeverity.Warning, true);

        private static DiagnosticDescriptor Rule3 = new DiagnosticDescriptor(
            "RID003", "GenericType", "The generic type parameter should be consistent with interface", "Generic", DiagnosticSeverity.Warning, true);

        public override ImmutableArray<DiagnosticDescriptor> SupportedDiagnostics => ImmutableArray.Create(Rule1, Rule2, Rule3);

        public override void Initialize(AnalysisContext context)
        {
            context.ConfigureGeneratedCodeAnalysis(GeneratedCodeAnalysisFlags.Analyze | GeneratedCodeAnalysisFlags.ReportDiagnostics);
            context.EnableConcurrentExecution();
            context.RegisterSyntaxNodeAction(AnalyzeClass, SyntaxKind.ClassDeclaration);
            context.RegisterSyntaxNodeAction(AnalyzeInterface, SyntaxKind.InterfaceDeclaration);
        }

        private void AnalyzeClass(SyntaxNodeAnalysisContext context)
        {
            var classDeclaration = (ClassDeclarationSyntax)context.Node;

            // Check Rule 1
            if (IsViolateRule1(classDeclaration))
            {
                Diagnostic diagnostic = Diagnostic.Create(Rule1, classDeclaration.Identifier.GetLocation());
                context.ReportDiagnostic(diagnostic);
            }

            // Check Rule 3
            if (IsViolateRule3(classDeclaration))
            {
                Diagnostic diagnostic = Diagnostic.Create(Rule3, classDeclaration.Identifier.GetLocation());
                context.ReportDiagnostic(diagnostic);
            }
        }

        private void AnalyzeInterface(SyntaxNodeAnalysisContext context)
        {
            var interfaceDeclaration = (InterfaceDeclarationSyntax)context.Node;

            // Check Rule 2
            foreach (var member in interfaceDeclaration.Members)
            {
                if (member is MethodDeclarationSyntax method)
                {
                    if (IsViolateRule2(interfaceDeclaration.Identifier.Text, method.Identifier.Text))
                    {
                        Diagnostic diagnostic = Diagnostic.Create(Rule2, method.Identifier.GetLocation());
                        context.ReportDiagnostic(diagnostic);
                    }
                }
            }
        }

        private bool IsViolateRule1(ClassDeclarationSyntax classDeclaration)
        {
            // 获取基类的符号信息
            var semanticModel = context.Compilation.GetSemanticModel(classDeclaration.SyntaxTree);
            var baseType = classDeclaration.BaseList?.Types.FirstOrDefault()?.Type;
            var interfaceType = semanticModel.GetTypeInfo(baseType).Type as INamedTypeSymbol;

            // 判断基类的泛型参数与接口名是否无关
            if (interfaceType != null && interfaceType.TypeArguments.Length > 0)
            {
                var interfaceName = interfaceType.TypeArguments[0].Name;
                var genericArgName = classDeclaration.TypeParameterList.Parameters.FirstOrDefault()?.Identifier.Text;
                return !interfaceName.StartsWith(genericArgName);
            }

            return false;
        }

        private bool IsViolateRule2(string interfaceName, string methodName)
        {
            // 判断方法名与接口名是否无关
            return !methodName.StartsWith(interfaceName);
        }

        private bool IsViolateRule3(ClassDeclarationSyntax classDeclaration)
        {
            // 获取基类的符号信息
            var semanticModel = context.Compilation.GetSemanticModel(classDeclaration.SyntaxTree);
            var baseType = classDeclaration.BaseList?.Types.FirstOrDefault()?.Type;
            var interfaceType = semanticModel.GetTypeInfo(baseType).Type as INamedTypeSymbol;

            // 判断泛型参数是否与接口一致
            if (interfaceType != null && interfaceType.TypeArguments.Length > 0)
            {
                var genericArgName = classDeclaration.TypeParameterList.Parameters.FirstOrDefault()?.Identifier.Text;
                var interfaceArgName = interfaceType.TypeArguments[0].Name;
                return genericArgName != interfaceArgName;
            }

            return false;
        }
    }
}
