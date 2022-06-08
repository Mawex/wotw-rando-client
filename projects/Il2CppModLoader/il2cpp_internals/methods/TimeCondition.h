using namespace app;

namespace app::methods::TimeCondition {
IL2CPP_REGISTER_METHOD(0x00CF6CC0, void, ResetCondition, (TimeCondition * __this));
IL2CPP_REGISTER_METHOD(0x010ED800, void, UpdateCondition, (TimeCondition * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x010ED810, bool, Validate, (TimeCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (TimeCondition * __this));
}
