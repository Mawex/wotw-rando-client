using namespace app;

namespace app::methods::UnityEngine::RenderSettings {
IL2CPP_REGISTER_METHOD(0x02970990, float, get_fogStartDistance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x029709E0, float, get_fogEndDistance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02970A30, FogMode__Enum, get_fogMode, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02970A80, float, get_fogDensity, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02970AD0, Color, get_ambientLight, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02970B40, void, set_ambientLight, (Color value));
IL2CPP_REGISTER_METHOD(0x02970B90, void, get_ambientLight_Injected, (Color * ret));
IL2CPP_REGISTER_METHOD(0x02970BE0, void, set_ambientLight_Injected, (Color * value));
}
