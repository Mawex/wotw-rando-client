using namespace app;

namespace app::methods::System::ComponentModel::MemberDescriptor {
IL2CPP_REGISTER_METHOD(0x01F0E5C0, void, __ctor, (MemberDescriptor * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0298D530, void, __ctor, (MemberDescriptor * __this, String * name, Attribute__Array * attributes));
IL2CPP_REGISTER_METHODINFO(0x0478C840, MemberDescriptor__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0298D710, void, __ctor, (MemberDescriptor * __this, MemberDescriptor * descr));
IL2CPP_REGISTER_METHOD(0x0298D930, void, __ctor, (MemberDescriptor * __this, MemberDescriptor * oldMemberDescriptor, Attribute__Array * newAttributes));
IL2CPP_REGISTER_METHOD(0x0298DE90, Attribute__Array *, get_AttributeArray, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0298DEC0, void, set_AttributeArray, (MemberDescriptor * __this, Attribute__Array * value));
IL2CPP_REGISTER_METHOD(0x0298DFB0, AttributeCollection *, get_Attributes, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0298E0D0, String *, get_Category, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0298E290, String *, get_Description, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0298E440, bool, get_IsBrowsable, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0298E560, String *, get_Name, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_NameHashCode, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0298E5F0, bool, get_DesignTimeOnly, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0298E730, String *, get_DisplayName, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0298E8A0, void, CheckAttributesValid, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0298E960, AttributeCollection *, CreateAttributeCollection, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0298EAC0, bool, Equals, (MemberDescriptor * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0298EDD0, void, FillAttributes, (MemberDescriptor * __this, IList * attributeList));
IL2CPP_REGISTER_METHOD(0x0298EF40, void, FilterAttributesIfNeeded, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHODINFO(0x04767700, MemberDescriptor_FilterAttributesIfNeeded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0298F630, MethodInfo_1 *, FindMethod, (Type * componentClass, String * name, Type__Array * args, Type * returnType));
IL2CPP_REGISTER_METHOD(0x0298F6C0, MethodInfo_1 *, FindMethod, (Type * componentClass, String * name, Type__Array * args, Type * returnType, bool publicOnly));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, GetHashCode, (MemberDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0298F790, Object *, GetInvocationTarget, (MemberDescriptor * __this, Type * type, Object * instance));
IL2CPP_REGISTER_METHODINFO(0x047377B0, MemberDescriptor_GetInvocationTarget__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0298F8D0, ISite *, GetSite, (Object * component));
IL2CPP_REGISTER_METHOD(0x0298F9D0, Object *, GetInvokee, (Type * componentClass, Object * component));
IL2CPP_REGISTER_METHODINFO(0x0474E148, MemberDescriptor_GetInvokee__MethodInfo);
}
