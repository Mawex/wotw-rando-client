#include <interception_macros.h>

namespace app::methods::UberShaderPrewarmer {
IL2CPP_REGISTER_METHOD(0x019149B0, bool, get_IsLoaded, ());
IL2CPP_REGISTER_METHOD(0x01914AD0, float, get_LoadProgress, ());
IL2CPP_REGISTER_METHOD(0x01914BF0, float, get_WarmProgress, ());
IL2CPP_REGISTER_METHOD(0x01914D80, float, get_TotalProgress, ());
IL2CPP_REGISTER_METHOD(0x01914E40, void, Load, ());
IL2CPP_REGISTER_METHOD(0x01914F90, void, Unload, (UberShaderPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x01915520, void, Awake, (UberShaderPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x019158A0, void, WarmShader, (UberShaderPrewarmer * __this, String * shaderName, List_1_System_String_ * Keywords));
IL2CPP_REGISTER_METHOD(0x01915A00, void, OnStreamStart, (UberShaderPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x01915B50, void, CreateResources, (UberShaderPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x01915FA0, void, OnStreamDone, (UberShaderPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x01916160, void, StartWarmingStream, (UberShaderPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x019162B0, void, Update, (UberShaderPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x019162C0, void, UpdateStream, (UberShaderPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x01916600, bool, _isMemoryExceeded, (UberShaderPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x019166A0, bool, WarmNextShader, (UberShaderPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x01916790, void, WarmShader, (UberShaderPrewarmer * __this, Shader * shader, List_1_System_String_ * keywords));
IL2CPP_REGISTER_METHOD(0x01916DB0, void, __ctor, (UberShaderPrewarmer * __this));
IL2CPP_REGISTER_METHOD(0x01916FD0, void, __cctor, ());
}
