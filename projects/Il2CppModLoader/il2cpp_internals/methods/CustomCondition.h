using namespace app;

namespace app::methods::CustomCondition {
IL2CPP_REGISTER_METHOD(0x00DBB040, void, OnValidate, (CustomCondition * __this));
IL2CPP_REGISTER_METHOD(0x00DBB150, ICustomConditionDefinition *, get_ResolvedConditionDefinition, (CustomCondition * __this));
IL2CPP_REGISTER_METHOD(0x00DBB210, bool, Validate, (CustomCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DBB2D0, String *, GetNiceName, (CustomCondition * __this));
IL2CPP_REGISTER_METHOD(0x0072FBB0, void, __ctor, (CustomCondition * __this));
}
