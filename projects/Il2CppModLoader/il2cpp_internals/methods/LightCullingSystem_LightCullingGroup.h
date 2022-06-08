#include <interception_macros.h>

namespace app::methods::LightCullingSystem_LightCullingGroup {
IL2CPP_REGISTER_METHOD(0x00E15170, void, set_Config, (LightCullingSystem_LightCullingGroup * __this, LightCullingSystem_LightCullingConfigPerType value));
IL2CPP_REGISTER_METHOD(0x0114B950, String *, get_Name, (LightCullingSystem_LightCullingGroup * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, LightCullingSystem_LightCullingGroupId__Enum, get_Id, (LightCullingSystem_LightCullingGroup * __this));
IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_Enabled, (LightCullingSystem_LightCullingGroup * __this));
IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_Enabled, (LightCullingSystem_LightCullingGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_MaxAmount, (LightCullingSystem_LightCullingGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_MaxAmount, (LightCullingSystem_LightCullingGroup * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0114BA10, void, __ctor, (LightCullingSystem_LightCullingGroup * __this, LightCullingSystem_LightCullingGroupId__Enum id, int32_t maxAmount, LightPriority_Layer__Enum__Array * layers));
IL2CPP_REGISTER_METHOD(0x0114BD70, void, Update, (LightCullingSystem_LightCullingGroup * __this, List_1_PointLightMaskModifier_ * lights, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0114C000, bool, FlaggedForCulling, (LightCullingSystem_LightCullingGroup * __this, PointLightMaskModifier * light));
IL2CPP_REGISTER_METHOD(0x0114C0D0, bool, CanBeCulled, (LightCullingSystem_LightCullingGroup * __this, PointLightMaskModifier * light));
IL2CPP_REGISTER_METHOD(0x0114C180, void, AddValidLight, (LightCullingSystem_LightCullingGroup * __this, PointLightMaskModifier * light));
IL2CPP_REGISTER_METHOD(0x0114C2B0, void, CalculateScore, (LightCullingSystem_LightCullingGroup * __this, PointLightMaskModifier * light));
IL2CPP_REGISTER_METHOD(0x0114C5F0, void, Clear, (LightCullingSystem_LightCullingGroup * __this));
}
