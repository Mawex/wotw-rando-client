using namespace app;

namespace app::methods::Moon::MoonGizmos {
IL2CPP_REGISTER_METHOD(0x01119BB0, void, InitializeTypeToGizmoDictionary, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0111A180, void, OnSceneGUI, (MoonGizmos * __this));
IL2CPP_REGISTER_METHOD(0x0111A490, void, ClearDrawingReferences, (MoonGizmos * __this));
IL2CPP_REGISTER_METHOD(0x0111A580, List_1_Moon_IGizmo_ *, GetGizmosForComponent, (MoonGizmos * __this, Component_1 * component));
IL2CPP_REGISTER_METHOD(0x0111ADD0, void, __ctor, (MoonGizmos * __this));
IL2CPP_REGISTER_METHOD(0x0111AF50, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01EB9030, List_1_System_Object_ *, GetGizmosOfType, (MoonGizmos * __this));
}
