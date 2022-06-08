using namespace app;

namespace app::methods::UnityEngineInternal::Input::NativeInputSystem {
IL2CPP_REGISTER_METHOD(0x031C3320, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x031C3370, void, NotifyBeforeUpdate, (NativeInputUpdateType__Enum updateType));
IL2CPP_REGISTER_METHOD(0x031C3430, void, NotifyUpdate, (NativeInputUpdateType__Enum updateType, void * eventBuffer));
IL2CPP_REGISTER_METHOD(0x031C3520, void, NotifyDeviceDiscovered, (int32_t deviceId, String * deviceDescriptor));
IL2CPP_REGISTER_METHOD(0x031C35F0, void, set_hasDeviceDiscoveredCallback, (bool value));
}
