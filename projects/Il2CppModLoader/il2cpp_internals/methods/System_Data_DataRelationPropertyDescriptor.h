#include <interception_macros.h>

namespace app::methods::System::Data::DataRelationPropertyDescriptor {
IL2CPP_REGISTER_METHOD(0x023A9200, void, __ctor, (DataRelationPropertyDescriptor * __this, DataRelation * dataRelation));
IL2CPP_REGISTER_METHOD(0x002FBC20, DataRelation *, get_Relation, (DataRelationPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x023A9260, Type *, get_ComponentType, (DataRelationPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (DataRelationPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x023A9300, Type *, get_PropertyType, (DataRelationPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x023A93A0, bool, Equals, (DataRelationPropertyDescriptor * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x01F3E660, int32_t, GetHashCode, (DataRelationPropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanResetValue, (DataRelationPropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x023A9480, Object *, GetValue, (DataRelationPropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetValue, (DataRelationPropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetValue, (DataRelationPropertyDescriptor * __this, Object * component, Object * value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldSerializeValue, (DataRelationPropertyDescriptor * __this, Object * component));
}
