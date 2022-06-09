#include <interception_macros.h>

namespace app::methods::System_ComponentModel::DelegatingTypeDescriptionProvider {
IL2CPP_REGISTER_METHOD(0x002FB960, void, __ctor, (app::DelegatingTypeDescriptionProvider * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x01FE29C0, TypeDescriptionProvider *, get_Provider, (app::DelegatingTypeDescriptionProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FE2AF0, Object *, CreateInstance, (app::DelegatingTypeDescriptionProvider * this_ptr, app::IServiceProvider * provider, app::Type * object_type, app::Type__Array * arg_types, app::Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01FE2B50, IDictionary *, GetCache, (app::DelegatingTypeDescriptionProvider * this_ptr, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x01FE2B90, String *, GetFullComponentName, (app::DelegatingTypeDescriptionProvider * this_ptr, app::Object * component));
IL2CPP_REGISTER_METHOD(0x01FE2BD0, ICustomTypeDescriptor *, GetExtendedTypeDescriptor, (app::DelegatingTypeDescriptionProvider * this_ptr, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x01FE2C10, IExtenderProvider__Array *, GetExtenderProviders, (app::DelegatingTypeDescriptionProvider * this_ptr, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x01FE2C50, Type *, GetReflectionType, (app::DelegatingTypeDescriptionProvider * this_ptr, app::Type * object_type, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x01FE2CA0, Type *, GetRuntimeType, (app::DelegatingTypeDescriptionProvider * this_ptr, app::Type * object_type));
IL2CPP_REGISTER_METHOD(0x01FE2CE0, ICustomTypeDescriptor *, GetTypeDescriptor, (app::DelegatingTypeDescriptionProvider * this_ptr, app::Type * object_type, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x01FE2D30, bool, IsSupportedType, (app::DelegatingTypeDescriptionProvider * this_ptr, app::Type * type));
}
