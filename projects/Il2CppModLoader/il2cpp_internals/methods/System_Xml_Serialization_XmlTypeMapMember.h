using namespace app;

namespace app::methods::System::Xml::Serialization::XmlTypeMapMember {
IL2CPP_REGISTER_METHOD(0x0194D4F0, void, __ctor, (XmlTypeMapMember * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (XmlTypeMapMember * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (XmlTypeMapMember * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Object *, get_DefaultValue, (XmlTypeMapMember * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_DefaultValue, (XmlTypeMapMember * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0194D5A0, bool, IsReadOnly, (XmlTypeMapMember * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x0194D780, Object *, GetValue, (Object * ob, String * name));
IL2CPP_REGISTER_METHOD(0x0194DA20, Object *, GetValue, (XmlTypeMapMember * __this, Object * ob));
IL2CPP_REGISTER_METHOD(0x0194DCE0, void, SetValue, (XmlTypeMapMember * __this, Object * ob, Object * value));
IL2CPP_REGISTER_METHOD(0x0194DFF0, void, SetValue, (Object * ob, String * name, Object * value));
IL2CPP_REGISTER_METHOD(0x0194E2B0, void, InitMember, (XmlTypeMapMember * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x002FBB00, TypeData *, get_TypeData, (XmlTypeMapMember * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_TypeData, (XmlTypeMapMember * __this, TypeData * value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Index, (XmlTypeMapMember * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Index, (XmlTypeMapMember * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_GlobalIndex, (XmlTypeMapMember * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_GlobalIndex, (XmlTypeMapMember * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01760C10, bool, get_IsOptionalValueType, (XmlTypeMapMember * __this));
IL2CPP_REGISTER_METHOD(0x0194E5F0, void, set_IsOptionalValueType, (XmlTypeMapMember * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0194E610, bool, get_IsReturnValue, (XmlTypeMapMember * __this));
IL2CPP_REGISTER_METHOD(0x0194E620, void, set_IsReturnValue, (XmlTypeMapMember * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0194E640, void, CheckOptionalValueType, (XmlTypeMapMember * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x0194E720, bool, GetValueSpecified, (XmlTypeMapMember * __this, Object * ob));
IL2CPP_REGISTER_METHOD(0x0194EA50, void, SetValueSpecified, (XmlTypeMapMember * __this, Object * ob, bool value));
}
