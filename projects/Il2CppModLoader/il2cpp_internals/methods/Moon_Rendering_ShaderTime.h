using namespace app;

namespace app::methods::Moon::Rendering::ShaderTime {
IL2CPP_REGISTER_METHOD(0x00EBB200, bool, get_freezeAll, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EBB340, void, set_freezeAll, (bool value));
IL2CPP_REGISTER_METHOD(0x00EBB400, bool, get_freezeAny, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EBB510, bool, get_freezeAnyShader, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EBB620, bool, get_freezeCameraSwaying, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EBB6D0, void, set_freezeCameraSwaying, (bool value));
IL2CPP_REGISTER_METHOD(0x00EBB7A0, bool, get_freezeShaderTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EBB850, void, set_freezeShaderTime, (bool value));
IL2CPP_REGISTER_METHOD(0x00EBB920, bool, get_freezeShaderTurbulenceTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EBB9D0, void, set_freezeShaderTurbulenceTime, (bool value));
IL2CPP_REGISTER_METHOD(0x00EBBAA0, bool, get_freezeShaderTurbulenceStrength, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EBBB50, void, set_freezeShaderTurbulenceStrength, (bool value));
IL2CPP_REGISTER_METHOD(0x00EBBC20, bool, get_freezeShaderGameTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EBBCD0, void, set_freezeShaderGameTime, (bool value));
IL2CPP_REGISTER_METHOD(0x00EBBDA0, void, setTimeConstants, (CommandBuffer * cmd));
IL2CPP_REGISTER_METHOD(0x00EBC060, void, __cctor, (MethodInfo * method));
}
