using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.Diagnostics;
using System.Collections.Immutable;

namespace AirFrameworkAnalyszer
{
    [DiagnosticAnalyzer(LanguageNames.CSharp)]
    public class MessageAnalyser : DiagnosticAnalyzer
    {
        public override ImmutableArray<DiagnosticDescriptor> SupportedDiagnostics => throw new System.NotImplementedException();

        public override void Initialize(AnalysisContext context)
        {
            context.EnableConcurrentExecution();
            context.ConfigureGeneratedCodeAnalysis(GeneratedCodeAnalysisFlags.Analyze | GeneratedCodeAnalysisFlags.ReportDiagnostics);
            context.RegisterSyntaxNodeAction(SyntaxAnalyer, SyntaxKind.ClassDeclaration);
        }

        public void SyntaxAnalyer(SyntaxNodeAnalysisContext context)
        {

        }
    }
}
