using namespace app;

namespace app::methods::GhostServerRecorder {
IL2CPP_REGISTER_METHOD(0x007E7A20, bool, get_Available, (GhostServerRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E7A30, void, StartRecording, (GhostServerRecorder * __this, Action_1_Byte_ * callback, Rigidbody__Array * rigidBodies, ServerConfigurationProperties config, MoonGuid__Array * targets));
IL2CPP_REGISTER_METHOD(0x007E7BF0, void, SetUpPluguis, (GhostServerRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E7EF0, void, FixedUpdate, (GhostServerRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E8240, void, ProcessFrame, (GhostServerRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E83B0, bool, SomeRigidbodyIsAwake, (GhostServerRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E8520, void, __ctor, (GhostServerRecorder * __this));
}
