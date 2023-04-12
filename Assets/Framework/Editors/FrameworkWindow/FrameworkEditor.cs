
using Sirenix.OdinInspector.Editor;
using Sirenix.Utilities;
using Sirenix.Utilities.Editor;
using UnityEditor;

namespace AirFrameworkEditor
{

    public class FrameworkEditor : OdinMenuEditorWindow
    {

        [MenuItem("Framework/Open")]
        public static void Open()
        {

            var window = GetWindow<FrameworkEditor>();
            window.position = GUIHelper.GetEditorWindowRect().AlignCenter(800, 600);
        }

        protected override OdinMenuTree BuildMenuTree()
        {
            var tree = new OdinMenuTree(supportsMultiSelect: false);
            tree.Add("����", new About(), EditorIcons.Info);

            tree.Add("UI��������", new UIGenerateWindow(), EditorIcons.Flag);

            return tree;
        }
    }
}
