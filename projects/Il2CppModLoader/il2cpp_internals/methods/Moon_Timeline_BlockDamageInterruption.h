using namespace app;

namespace app::methods::Moon::Timeline::BlockDamageInterruption {
IL2CPP_REGISTER_METHOD(0x002FBBE0, Action_1_DamageWeightMask_ *, get_EventStart, (BlockDamageInterruption * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_EventStart, (BlockDamageInterruption * __this, Action_1_DamageWeightMask_ * value));
IL2CPP_REGISTER_METHOD(0x002FBC00, Action_1_DamageWeightMask_ *, get_EventStay, (BlockDamageInterruption * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_EventStay, (BlockDamageInterruption * __this, Action_1_DamageWeightMask_ * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, Action_1_DamageWeightMask_ *, get_EventEnd, (BlockDamageInterruption * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_EventEnd, (BlockDamageInterruption * __this, Action_1_DamageWeightMask_ * value));
IL2CPP_REGISTER_METHOD(0x010C7CC0, void, OnStartPlayback, (BlockDamageInterruption * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010C7D60, void, OnStopPlayback, (BlockDamageInterruption * __this));
IL2CPP_REGISTER_METHOD(0x010C7E00, void, OnUpdateEntity, (BlockDamageInterruption * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x010C7EC0, void, __ctor, (BlockDamageInterruption * __this));
}
