#include <interception_macros.h>

namespace app::methods::System::ComponentModel::TypeConverter_SimplePropertyDescriptor {
IL2CPP_REGISTER_METHOD(0x02945A00, void, __ctor, (TypeConverter_SimplePropertyDescriptor * __this, Type * componentType, String * name, Type * propertyType));
IL2CPP_REGISTER_METHOD(0x02945AC0, void, __ctor, (TypeConverter_SimplePropertyDescriptor * __this, Type * componentType, String * name, Type * propertyType, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x002FBC20, Type *, get_ComponentType, (TypeConverter_SimplePropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02945B10, bool, get_IsReadOnly, (TypeConverter_SimplePropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, Type *, get_PropertyType, (TypeConverter_SimplePropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02945BE0, bool, CanResetValue, (TypeConverter_SimplePropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x02945D90, void, ResetValue, (TypeConverter_SimplePropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldSerializeValue, (TypeConverter_SimplePropertyDescriptor * __this, Object * component));
}
