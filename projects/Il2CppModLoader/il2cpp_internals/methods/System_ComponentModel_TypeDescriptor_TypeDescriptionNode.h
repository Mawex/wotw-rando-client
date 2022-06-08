#include <interception_macros.h>

namespace app::methods::System::ComponentModel::TypeDescriptor_TypeDescriptionNode {
IL2CPP_REGISTER_METHOD(0x002FBB10, void, __ctor, (TypeDescriptor_TypeDescriptionNode * __this, TypeDescriptionProvider * provider));
IL2CPP_REGISTER_METHOD(0x02957DD0, Object *, CreateInstance, (TypeDescriptor_TypeDescriptionNode * __this, IServiceProvider * provider, Type * objectType, Type__Array * argTypes, Object__Array * args));
IL2CPP_REGISTER_METHODINFO(0x04784828, TypeDescriptor_TypeDescriptionNode_CreateInstance__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02957F90, IDictionary *, GetCache, (TypeDescriptor_TypeDescriptionNode * __this, Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04719C38, TypeDescriptor_TypeDescriptionNode_GetCache__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02958070, ICustomTypeDescriptor *, GetExtendedTypeDescriptor, (TypeDescriptor_TypeDescriptionNode * __this, Object * instance));
IL2CPP_REGISTER_METHODINFO(0x0473A760, TypeDescriptor_TypeDescriptionNode_GetExtendedTypeDescriptor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02958150, IExtenderProvider__Array *, GetExtenderProviders, (TypeDescriptor_TypeDescriptionNode * __this, Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04721328, TypeDescriptor_TypeDescriptionNode_GetExtenderProviders__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02958230, String *, GetFullComponentName, (TypeDescriptor_TypeDescriptionNode * __this, Object * component));
IL2CPP_REGISTER_METHODINFO(0x04707FF8, TypeDescriptor_TypeDescriptionNode_GetFullComponentName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02958310, Type *, GetReflectionType, (TypeDescriptor_TypeDescriptionNode * __this, Type * objectType, Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04723BF0, TypeDescriptor_TypeDescriptionNode_GetReflectionType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02958410, Type *, GetRuntimeType, (TypeDescriptor_TypeDescriptionNode * __this, Type * objectType));
IL2CPP_REGISTER_METHODINFO(0x04717538, TypeDescriptor_TypeDescriptionNode_GetRuntimeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02958510, ICustomTypeDescriptor *, GetTypeDescriptor, (TypeDescriptor_TypeDescriptionNode * __this, Type * objectType, Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04788068, TypeDescriptor_TypeDescriptionNode_GetTypeDescriptor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02958680, bool, IsSupportedType, (TypeDescriptor_TypeDescriptionNode * __this, Type * type));
IL2CPP_REGISTER_METHODINFO(0x047407A0, TypeDescriptor_TypeDescriptionNode_IsSupportedType__MethodInfo);
}
