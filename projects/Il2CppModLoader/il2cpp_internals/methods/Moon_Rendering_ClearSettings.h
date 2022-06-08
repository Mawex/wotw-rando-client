using namespace app;

namespace app::methods::Moon::Rendering::ClearSettings {
IL2CPP_REGISTER_METHOD(0x00C537F0, ClearSettings, get_nothing, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0011D620, bool, get_isNothing, (ClearSettings__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011D630, bool, get_doColor, (ClearSettings__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011D640, bool, get_doDepth, (ClearSettings__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011D650, void, __ctor, (ClearSettings__Boxed * __this, ClearFlags__Enum flags, Color color, float depth));
IL2CPP_REGISTER_METHOD(0x00C53830, ClearSettings, operator_, (ClearFlags__Enum flags));
}
