using namespace app;

namespace app::methods::Moon::ExposedPropertiesInspector::ExposedPropertyGroup {
IL2CPP_REGISTER_METHOD(0x031C2460, bool, HasProperty, (ExposedPropertyGroup * __this, ExposedProperty * property));
IL2CPP_REGISTER_METHOD(0x031C25A0, void, AddProperty, (ExposedPropertyGroup * __this, ExposedProperty * property));
IL2CPP_REGISTER_METHOD(0x031C26E0, void, InsertProperty, (ExposedPropertyGroup * __this, ExposedProperty * property, int32_t insertIndex));
IL2CPP_REGISTER_METHOD(0x031C2860, void, AddDeserializedProperty, (ExposedPropertyGroup * __this, ExposedProperty * property));
IL2CPP_REGISTER_METHOD(0x031C2900, void, RemoveProperty, (ExposedPropertyGroup * __this, ExposedProperty * property));
IL2CPP_REGISTER_METHOD(0x031C2A30, void, __ctor, (ExposedPropertyGroup * __this));
}
