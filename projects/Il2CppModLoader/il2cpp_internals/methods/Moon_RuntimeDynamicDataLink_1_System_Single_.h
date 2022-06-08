#include <interception_macros.h>

namespace app::methods::Moon::RuntimeDynamicDataLink_1_System::Single_ {
IL2CPP_REGISTER_METHOD(0x02910410, bool, Init, (RuntimeDynamicDataLink_1_System_Single_ * __this, DynamicDataLinkSerializedData data, MemberInfo_1 * memberInfo));
IL2CPP_REGISTER_METHOD(0x029106F0, bool, get_IsValid, (RuntimeDynamicDataLink_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Object_1 *, get_TargetObject, (RuntimeDynamicDataLink_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, MemberInfo_1 *, get_TargetMemberInfo, (RuntimeDynamicDataLink_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, Type *, get_ReturnedValueType, (RuntimeDynamicDataLink_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02910870, float, GetValue, (RuntimeDynamicDataLink_1_System_Single_ * __this, IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04735478, RuntimeDynamicDataLink_1_System_Single__GetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02910B50, bool, IsLinkForObjectAndMemberInfoCombo, (RuntimeDynamicDataLink_1_System_Single_ * __this, Object_1 * targetObject, MemberInfo_1 * targetMemberInfo));
IL2CPP_REGISTER_METHOD(0x01CE2FF0, DynamicDataLinkSerializedData, GetSerializedData, (RuntimeDynamicDataLink_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02910CE0, void, CreateReflectionData, (RuntimeDynamicDataLink_1_System_Single_ * __this, MemberInfo_1 * memberInfo));
IL2CPP_REGISTER_METHODINFO(0x04719C40, RuntimeDynamicDataLink_1_System_Single__CreateReflectionData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02911160, String *, ToString, (RuntimeDynamicDataLink_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (RuntimeDynamicDataLink_1_System_Single_ * __this));
}
