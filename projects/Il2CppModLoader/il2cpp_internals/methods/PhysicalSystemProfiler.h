#include <interception_macros.h>

namespace app::methods::PhysicalSystemProfiler {
IL2CPP_REGISTER_METHOD(0x014F9D90, GUIStyle *, get_LabelStyle, (PhysicalSystemProfiler * __this));
IL2CPP_REGISTER_METHOD(0x014FA100, PhysicalSystemProfiler *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x014FA180, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x014FA230, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x014FA460, void, EnsureImgui, (PhysicalSystemProfiler * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x014FA550, void, Awake, (PhysicalSystemProfiler * __this));
IL2CPP_REGISTER_METHOD(0x014FA600, void, OnDestroy, (PhysicalSystemProfiler * __this));
IL2CPP_REGISTER_METHOD(0x014FA6B0, void, SubmitSample, (PhysicalSystemProfiler * __this, PhysicalSystemManager * manager, float ms));
IL2CPP_REGISTER_METHOD(0x014FA9A0, void, Update, (PhysicalSystemProfiler * __this));
IL2CPP_REGISTER_METHOD(0x014FB080, void, OnGUI, (PhysicalSystemProfiler * __this));
IL2CPP_REGISTER_METHOD(0x014FB360, void, __ctor, (PhysicalSystemProfiler * __this));
}
