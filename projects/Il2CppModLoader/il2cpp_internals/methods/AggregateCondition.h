using namespace app;

namespace app::methods::AggregateCondition {
IL2CPP_REGISTER_METHOD(0x004F0B60, bool, Validate, (AggregateCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x004F0D90, void, ResetCondition, (AggregateCondition * __this));
IL2CPP_REGISTER_METHOD(0x004F0E20, void, UpdateCondition, (AggregateCondition * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (AggregateCondition * __this));
}
