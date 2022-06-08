#include <interception_macros.h>

namespace app::methods::System::ComponentModel::DelegatingTypeDescriptionProvider {
IL2CPP_REGISTER_METHOD(0x002FB960, void, __ctor, (DelegatingTypeDescriptionProvider * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01FE29C0, TypeDescriptionProvider *, get_Provider, (DelegatingTypeDescriptionProvider * __this));
IL2CPP_REGISTER_METHOD(0x01FE2AF0, Object *, CreateInstance, (DelegatingTypeDescriptionProvider * __this, IServiceProvider * provider, Type * objectType, Type__Array * argTypes, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01FE2B50, IDictionary *, GetCache, (DelegatingTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x01FE2B90, String *, GetFullComponentName, (DelegatingTypeDescriptionProvider * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x01FE2BD0, ICustomTypeDescriptor *, GetExtendedTypeDescriptor, (DelegatingTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x01FE2C10, IExtenderProvider__Array *, GetExtenderProviders, (DelegatingTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x01FE2C50, Type *, GetReflectionType, (DelegatingTypeDescriptionProvider * __this, Type * objectType, Object * instance));
IL2CPP_REGISTER_METHOD(0x01FE2CA0, Type *, GetRuntimeType, (DelegatingTypeDescriptionProvider * __this, Type * objectType));
IL2CPP_REGISTER_METHOD(0x01FE2CE0, ICustomTypeDescriptor *, GetTypeDescriptor, (DelegatingTypeDescriptionProvider * __this, Type * objectType, Object * instance));
IL2CPP_REGISTER_METHOD(0x01FE2D30, bool, IsSupportedType, (DelegatingTypeDescriptionProvider * __this, Type * type));
}
