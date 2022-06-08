using namespace app;

namespace app::methods::System::ComponentModel::AttributeCollection {
IL2CPP_REGISTER_METHOD(0x024A0EB0, void, __ctor, (AttributeCollection * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHODINFO(0x04718B50, AttributeCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x024A0FC0, AttributeCollection *, FromExisting, (AttributeCollection * existing, Attribute__Array * newAttributes));
IL2CPP_REGISTER_METHODINFO(0x0474A588, AttributeCollection_FromExisting__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Attribute__Array *, get_Attributes, (AttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x024A1490, int32_t, get_Count, (AttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x024A14C0, Attribute *, get_Item, (AttributeCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x024A1510, Attribute *, get_Item, (AttributeCollection * __this, Type * attributeType));
IL2CPP_REGISTER_METHOD(0x024A1B10, bool, Contains, (AttributeCollection * __this, Attribute * attribute));
IL2CPP_REGISTER_METHOD(0x024A1B90, bool, Contains, (AttributeCollection * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x024A1C10, Attribute *, GetDefaultAttribute, (AttributeCollection * __this, Type * attributeType));
IL2CPP_REGISTER_METHOD(0x024A21E0, IEnumerator *, GetEnumerator, (AttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x024A2210, bool, Matches, (AttributeCollection * __this, Attribute * attribute));
IL2CPP_REGISTER_METHOD(0x024A22F0, bool, Matches, (AttributeCollection * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x024A1490, int32_t, ICollection_get_Count, (AttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (AttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, ICollection_get_SyncRoot, (AttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x024A2410, void, CopyTo, (AttributeCollection * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x024A21E0, IEnumerator *, IEnumerable_GetEnumerator, (AttributeCollection * __this));
IL2CPP_REGISTER_METHOD(0x024A24A0, void, __cctor, (MethodInfo * method));
}
