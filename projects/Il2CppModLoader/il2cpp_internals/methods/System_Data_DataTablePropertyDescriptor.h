#include <interception_macros.h>

namespace app::methods::System::Data::DataTablePropertyDescriptor {
IL2CPP_REGISTER_METHOD(0x002FBC20, DataTable *, get_Table, (DataTablePropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01F3E400, void, __ctor, (DataTablePropertyDescriptor * __this, DataTable * dataTable));
IL2CPP_REGISTER_METHOD(0x01F3E440, Type *, get_ComponentType, (DataTablePropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (DataTablePropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01F3E4E0, Type *, get_PropertyType, (DataTablePropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01F3E580, bool, Equals, (DataTablePropertyDescriptor * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x01F3E660, int32_t, GetHashCode, (DataTablePropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanResetValue, (DataTablePropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x01F3E690, Object *, GetValue, (DataTablePropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetValue, (DataTablePropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetValue, (DataTablePropertyDescriptor * __this, Object * component, Object * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldSerializeValue, (DataTablePropertyDescriptor * __this, Object * component));
}
