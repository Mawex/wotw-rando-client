using namespace app;

namespace app::methods::InputPlugin {
IL2CPP_REGISTER_METHOD(0x00628ED0, void, Awake, (InputPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00629230, void, OnDestroy, (InputPlugin * __this));
IL2CPP_REGISTER_METHOD(0x006292F0, void, Apply, (InputPlugin * __this, InputData * inputData));
IL2CPP_REGISTER_METHOD(0x006294C0, void, Apply, (InputPlugin * __this, AnalogueInputData * inputData));
IL2CPP_REGISTER_METHOD(0x00629580, void, PlayCycle, (InputPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00629730, void, RecordCycle, (InputPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x006298E0, void, Exit, (InputPlugin * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (InputPlugin * __this));
}
