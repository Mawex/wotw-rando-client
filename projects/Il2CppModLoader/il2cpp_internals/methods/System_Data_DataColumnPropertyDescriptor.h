using namespace app;

namespace app::methods::System::Data::DataColumnPropertyDescriptor {
IL2CPP_REGISTER_METHOD(0x0239E050, void, __ctor, (DataColumnPropertyDescriptor * __this, DataColumn * dataColumn));
IL2CPP_REGISTER_METHOD(0x0239E090, AttributeCollection *, get_Attributes, (DataColumnPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, DataColumn *, get_Column, (DataColumnPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0239E400, Type *, get_ComponentType, (DataColumnPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0239E4A0, bool, get_IsReadOnly, (DataColumnPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0239E4C0, Type *, get_PropertyType, (DataColumnPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0239E4E0, bool, Equals, (DataColumnPropertyDescriptor * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x01F3E660, int32_t, GetHashCode, (DataColumnPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0239E5C0, bool, CanResetValue, (DataColumnPropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x0239E760, Object *, GetValue, (DataColumnPropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x0239E890, void, ResetValue, (DataColumnPropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x0239EA00, void, SetValue, (DataColumnPropertyDescriptor * __this, Object * component, Object * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldSerializeValue, (DataColumnPropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x0239EB90, bool, get_IsBrowsable, (DataColumnPropertyDescriptor * __this));
}
