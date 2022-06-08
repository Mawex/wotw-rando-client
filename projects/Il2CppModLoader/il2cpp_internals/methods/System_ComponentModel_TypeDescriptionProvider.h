#include <interception_macros.h>

namespace app::methods::System::ComponentModel::TypeDescriptionProvider {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TypeDescriptionProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (TypeDescriptionProvider * __this, TypeDescriptionProvider * parent));
IL2CPP_REGISTER_METHOD(0x02946750, Object *, CreateInstance, (TypeDescriptionProvider * __this, IServiceProvider * provider, Type * objectType, Type__Array * argTypes, Object__Array * args));
IL2CPP_REGISTER_METHODINFO(0x0471B570, TypeDescriptionProvider_CreateInstance__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029468A0, IDictionary *, GetCache, (TypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029468C0, ICustomTypeDescriptor *, GetExtendedTypeDescriptor, (TypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x02946A50, IExtenderProvider__Array *, GetExtenderProviders, (TypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04786368, TypeDescriptionProvider_GetExtenderProviders__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02946B40, String *, GetFullComponentName, (TypeDescriptionProvider * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x01F938C0, Type *, GetReflectionType, (TypeDescriptionProvider * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x02946C10, Type *, GetReflectionType, (TypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04781528, TypeDescriptionProvider_GetReflectionType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02946CF0, Type *, GetReflectionType, (TypeDescriptionProvider * __this, Type * objectType, Object * instance));
IL2CPP_REGISTER_METHOD(0x02946D10, Type *, GetRuntimeType, (TypeDescriptionProvider * __this, Type * reflectionType));
IL2CPP_REGISTER_METHODINFO(0x04781660, TypeDescriptionProvider_GetRuntimeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02946F00, ICustomTypeDescriptor *, GetTypeDescriptor, (TypeDescriptionProvider * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x02946F20, ICustomTypeDescriptor *, GetTypeDescriptor, (TypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04791E08, TypeDescriptionProvider_GetTypeDescriptor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02947000, ICustomTypeDescriptor *, GetTypeDescriptor, (TypeDescriptionProvider * __this, Type * objectType, Object * instance));
IL2CPP_REGISTER_METHOD(0x02947190, bool, IsSupportedType, (TypeDescriptionProvider * __this, Type * type));
IL2CPP_REGISTER_METHODINFO(0x04791930, TypeDescriptionProvider_IsSupportedType__MethodInfo);
}
