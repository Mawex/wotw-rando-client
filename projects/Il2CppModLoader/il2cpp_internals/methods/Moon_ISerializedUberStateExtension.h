using namespace app;

namespace app::methods::Moon::ISerializedUberStateExtension {
IL2CPP_REGISTER_METHOD(0x01B62880, void, GetCurrentState, (ISerializedUberState * uberStateDescriptor, Object * * state));
IL2CPP_REGISTER_METHOD(0x01B62940, void, GetCurrentState, (ISerializedUberState * uberStateDescriptor, bool * state));
IL2CPP_REGISTER_METHOD(0x01B62A20, void, GetCurrentState, (ISerializedUberState * uberStateDescriptor, float * state));
IL2CPP_REGISTER_METHOD(0x01B62AE0, void, GetCurrentState, (ISerializedUberState * uberStateDescriptor, int32_t * state));
IL2CPP_REGISTER_METHOD(0x01B62BC0, void, GetCurrentState, (ISerializedUberState * uberStateDescriptor, uint8_t * state));
IL2CPP_REGISTER_METHOD(0x01B62CA0, void, SetCurrentState, (ISerializedUberState * uberStateDescriptor, Object * state));
IL2CPP_REGISTER_METHOD(0x01B62D60, void, SetCurrentState, (ISerializedUberState * uberStateDescriptor, bool state));
IL2CPP_REGISTER_METHOD(0x01B62E20, void, SetCurrentState, (ISerializedUberState * uberStateDescriptor, float state));
IL2CPP_REGISTER_METHOD(0x01B62EE0, void, SetCurrentState, (ISerializedUberState * uberStateDescriptor, int32_t state));
IL2CPP_REGISTER_METHOD(0x01B62FA0, void, SetCurrentState, (ISerializedUberState * uberStateDescriptor, uint8_t state));
}
