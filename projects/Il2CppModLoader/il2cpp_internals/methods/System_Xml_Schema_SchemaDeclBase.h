#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::SchemaDeclBase {
IL2CPP_REGISTER_METHOD(0x01AAE380, void, __ctor, (SchemaDeclBase * __this, XmlQualifiedName * name, String * prefix));
IL2CPP_REGISTER_METHOD(0x01AAE440, void, __ctor, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlQualifiedName *, get_Name, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (SchemaDeclBase * __this, XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x01AAE4F0, String *, get_Prefix, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Prefix, (SchemaDeclBase * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsDeclaredInExternal, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsDeclaredInExternal, (SchemaDeclBase * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00529E80, SchemaDeclBase_Use__Enum, get_Presence, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Presence, (SchemaDeclBase * __this, SchemaDeclBase_Use__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, int64_t, get_MaxLength, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_MaxLength, (SchemaDeclBase * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FBB40, int64_t, get_MinLength, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_MinLength, (SchemaDeclBase * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FBB00, XmlSchemaType *, get_SchemaType, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_SchemaType, (SchemaDeclBase * __this, XmlSchemaType * value));
IL2CPP_REGISTER_METHOD(0x002FB990, XmlSchemaDatatype *, get_Datatype, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Datatype, (SchemaDeclBase * __this, XmlSchemaDatatype * value));
IL2CPP_REGISTER_METHOD(0x01AAE580, void, AddValue, (SchemaDeclBase * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB60, List_1_System_String_ *, get_Values, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Values, (SchemaDeclBase * __this, List_1_System_String_ * value));
IL2CPP_REGISTER_METHOD(0x01AAE700, String *, get_DefaultValueRaw, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DefaultValueRaw, (SchemaDeclBase * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Object *, get_DefaultValueTyped, (SchemaDeclBase * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_DefaultValueTyped, (SchemaDeclBase * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01AAE790, bool, CheckEnumeration, (SchemaDeclBase * __this, Object * pVal));
IL2CPP_REGISTER_METHOD(0x01AAE8B0, bool, CheckValue, (SchemaDeclBase * __this, Object * pVal));
}
