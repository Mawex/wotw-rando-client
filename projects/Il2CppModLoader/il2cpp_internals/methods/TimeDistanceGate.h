using namespace app;

namespace app::methods::TimeDistanceGate {
IL2CPP_REGISTER_METHOD(0x010EFE70, void, __ctor, (TimeDistanceGate * __this, float timeCooldown, float distanceCooldown));
IL2CPP_REGISTER_METHOD(0x010EFF60, bool, UpdateGate, (TimeDistanceGate * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x010F0130, void, AddGateRandomization, (TimeDistanceGate * __this, float timeAmplitude, float distanceAmplitude));
}
