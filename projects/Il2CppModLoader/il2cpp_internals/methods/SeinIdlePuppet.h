#include <interception_macros.h>

namespace app::methods::SeinIdlePuppet {
IL2CPP_REGISTER_METHOD(0x0100D080, void, InstantiateLeaveTrails, (SeinIdlePuppet * __this));
IL2CPP_REGISTER_METHOD(0x0100D310, void, OnFinishedPlayback, (SeinIdlePuppet * __this));
IL2CPP_REGISTER_METHOD(0x0100D530, void, OnInitializeLivePuppetMaster, (SeinIdlePuppet * __this, IPuppet * puppetMaster));
IL2CPP_REGISTER_METHOD(0x0100D570, void, OnInitializeGhostPuppetMaster, (SeinIdlePuppet * __this, GhostPlayer * player));
IL2CPP_REGISTER_METHOD(0x0100D730, void, OnInitializeGhostRecorder, (SeinIdlePuppet * __this, GhostRecorder * recorder));
IL2CPP_REGISTER_METHOD(0x0043D9A0, int32_t, get_Id, (SeinIdlePuppet * __this));
IL2CPP_REGISTER_METHOD(0x0100D800, void, FixedUpdate, (SeinIdlePuppet * __this));
IL2CPP_REGISTER_METHOD(0x0100D810, void, RecordAnimationParameters, (SeinIdlePuppet * __this, bool forceChanges));
IL2CPP_REGISTER_METHOD(0x0100DCC0, void, RecordParameterValue, (SeinIdlePuppet * __this, FloatAnimationParameter * parameter, float value, bool forceChanges));
IL2CPP_REGISTER_METHOD(0x0100E2C0, void, RecordParameterValue, (SeinIdlePuppet * __this, VectorAnimationParameter * parameter, Vector3 value, bool forceChanges));
IL2CPP_REGISTER_METHOD(0x0100E640, GameObject *, GetInstantiatedFieldValue, (SeinIdlePuppet * __this, int32_t attributeId));
IL2CPP_REGISTER_METHOD(0x0100E670, void, __ctor, (SeinIdlePuppet * __this));
}
