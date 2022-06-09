#include <interception_macros.h>

namespace app::methods::System_ComponentModel::TypeDescriptionProvider {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::TypeDescriptionProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_2, (app::TypeDescriptionProvider * this_ptr, app::TypeDescriptionProvider * parent));
IL2CPP_REGISTER_METHOD(0x02946750, Object *, CreateInstance, (app::TypeDescriptionProvider * this_ptr, app::IServiceProvider * provider, app::Type * object_type, app::Type__Array * arg_types, app::Object__Array * args));
IL2CPP_REGISTER_METHODINFO(0x0471B570, TypeDescriptionProvider_CreateInstance__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029468A0, IDictionary *, GetCache, (app::TypeDescriptionProvider * this_ptr, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x029468C0, ICustomTypeDescriptor *, GetExtendedTypeDescriptor, (app::TypeDescriptionProvider * this_ptr, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x02946A50, IExtenderProvider__Array *, GetExtenderProviders, (app::TypeDescriptionProvider * this_ptr, app::Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04786368, TypeDescriptionProvider_GetExtenderProviders__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02946B40, String *, GetFullComponentName, (app::TypeDescriptionProvider * this_ptr, app::Object * component));
IL2CPP_REGISTER_METHOD(0x01F938C0, Type *, GetReflectionType_1, (app::TypeDescriptionProvider * this_ptr, app::Type * object_type));
IL2CPP_REGISTER_METHOD(0x02946C10, Type *, GetReflectionType_2, (app::TypeDescriptionProvider * this_ptr, app::Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04781528, TypeDescriptionProvider_GetReflectionType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02946CF0, Type *, GetReflectionType_3, (app::TypeDescriptionProvider * this_ptr, app::Type * object_type, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x02946D10, Type *, GetRuntimeType, (app::TypeDescriptionProvider * this_ptr, app::Type * reflection_type));
IL2CPP_REGISTER_METHODINFO(0x04781660, TypeDescriptionProvider_GetRuntimeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02946F00, ICustomTypeDescriptor *, GetTypeDescriptor_1, (app::TypeDescriptionProvider * this_ptr, app::Type * object_type));
IL2CPP_REGISTER_METHOD(0x02946F20, ICustomTypeDescriptor *, GetTypeDescriptor_2, (app::TypeDescriptionProvider * this_ptr, app::Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04791E08, TypeDescriptionProvider_GetTypeDescriptor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02947000, ICustomTypeDescriptor *, GetTypeDescriptor_3, (app::TypeDescriptionProvider * this_ptr, app::Type * object_type, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x02947190, bool, IsSupportedType, (app::TypeDescriptionProvider * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHODINFO(0x04791930, TypeDescriptionProvider_IsSupportedType__MethodInfo);
}
