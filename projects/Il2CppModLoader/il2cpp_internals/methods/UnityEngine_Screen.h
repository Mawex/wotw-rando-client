using namespace app;

namespace app::methods::UnityEngine::Screen {
IL2CPP_REGISTER_METHOD(0x0297AB50, int32_t, get_width, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0297ABA0, int32_t, get_height, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0297ABF0, float, get_dpi, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0297AC40, Resolution, get_currentResolution, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x003FC3D0, bool, get_fullScreen, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0297ACC0, void, set_fullScreen, (bool value));
IL2CPP_REGISTER_METHOD(0x003FC470, FullScreenMode__Enum, get_fullScreenMode, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0297AD10, void, set_fullScreenMode, (FullScreenMode__Enum value));
IL2CPP_REGISTER_METHOD(0x014983B0, bool, get_hdrAllowed, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01498400, void, set_hdrAllowed, (bool value));
IL2CPP_REGISTER_METHOD(0x0297AD60, bool, get_hdrCompatible, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0297ADB0, void, SetResolution, (int32_t width, int32_t height, FullScreenMode__Enum fullscreenMode, int32_t preferredRefreshRate));
IL2CPP_REGISTER_METHOD(0x0297AE30, void, SetResolution, (int32_t width, int32_t height, FullScreenMode__Enum fullscreenMode));
IL2CPP_REGISTER_METHOD(0x0297AE50, void, SetResolution, (int32_t width, int32_t height, bool fullscreen, int32_t preferredRefreshRate));
IL2CPP_REGISTER_METHOD(0x0297AE70, void, SetResolution, (int32_t width, int32_t height, bool fullscreen));
IL2CPP_REGISTER_METHOD(0x0297AEA0, Resolution__Array *, get_resolutions, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0297AEF0, void, get_currentResolution_Injected, (Resolution * ret));
}
