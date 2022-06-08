using namespace app;

namespace app::methods::AudioDeviceOptions {
IL2CPP_REGISTER_METHOD(0x008584A0, void, OnEnable, (AudioDeviceOptions * __this));
IL2CPP_REGISTER_METHOD(0x008584D0, void, PopulateOutputDeviceOptions, (AudioDeviceOptions * __this));
IL2CPP_REGISTER_METHOD(0x00858970, void, SetAudioDevice, (AudioDeviceOptions * __this, String * deviceName, uint32_t deviceId));
IL2CPP_REGISTER_METHOD(0x00858B20, void, SetCurrentDeviceLabel, (AudioDeviceOptions * __this, String * name));
IL2CPP_REGISTER_METHOD(0x00858C40, void, __ctor, (AudioDeviceOptions * __this));
}
