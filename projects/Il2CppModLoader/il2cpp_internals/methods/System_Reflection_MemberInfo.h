using namespace app;

namespace app::methods::System::Reflection::MemberInfo {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MemberInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268AF40, IList_1_System_Reflection_CustomAttributeData_ *, GetCustomAttributesData, (MemberInfo_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x0475C6D0, MemberInfo_1_GetCustomAttributesData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268AF90, int32_t, get_MetadataToken, (MemberInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x0268B130, Module *, get_Module, (MemberInfo_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04753010, MemberInfo_1_get_Module__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268B2B0, bool, operator___, (MemberInfo_1 * left, MemberInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x0268B5F0, bool, operator___, (MemberInfo_1 * left, MemberInfo_1 * right));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (MemberInfo_1 * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (MemberInfo_1 * __this));
}
