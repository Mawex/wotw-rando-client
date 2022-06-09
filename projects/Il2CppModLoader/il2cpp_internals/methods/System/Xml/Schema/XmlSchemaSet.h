#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaSet {
    IL2CPP_REGISTER_METHOD(0x01CBA8C0, app::Object *, get_InternalSyncObject, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CBAA20, void, __ctor_1, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CBAB70, void, __ctor_2, (app::XmlSchemaSet * this_ptr, app::XmlNameTable * name_table));
    IL2CPP_REGISTER_METHODINFO(0x0471AC08, XmlSchemaSet__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CBB430, void, add_ValidationEventHandler, (app::XmlSchemaSet * this_ptr, app::ValidationEventHandler * value));
    IL2CPP_REGISTER_METHOD(0x01CBB530, void, remove_ValidationEventHandler, (app::XmlSchemaSet * this_ptr, app::ValidationEventHandler * value));
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsCompiled, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CBB600, void, set_XmlResolver, (app::XmlSchemaSet * this_ptr, app::XmlResolver * value));
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::XmlSchemaCompilationSettings *, get_CompilationSettings, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_CompilationSettings, (app::XmlSchemaSet * this_ptr, app::XmlSchemaCompilationSettings * value));
    IL2CPP_REGISTER_METHOD(0x01CBB620, int32_t, get_Count, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CBB650, app::XmlSchemaObjectTable *, get_GlobalElements, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CBB7B0, app::XmlSchemaObjectTable *, get_GlobalAttributes, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CBB910, app::XmlSchemaObjectTable *, get_GlobalTypes, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CBBA70, app::XmlSchemaObjectTable *, get_SubstitutionGroups, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Hashtable *, get_SchemaLocations, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CBBBD0, app::XmlSchemaObjectTable *, get_TypeExtensions, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CBBD30, void, Add_1, (app::XmlSchemaSet * this_ptr, app::XmlSchemaSet * schemas));
    IL2CPP_REGISTER_METHODINFO(0x0473FE58, XmlSchemaSet_Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CBC3F0, app::XmlSchema *, Add_2, (app::XmlSchemaSet * this_ptr, app::XmlSchema * schema));
    IL2CPP_REGISTER_METHODINFO(0x04727920, XmlSchemaSet_Add_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CBC630, bool, RemoveRecursive, (app::XmlSchemaSet * this_ptr, app::XmlSchema * schema_to_remove));
    IL2CPP_REGISTER_METHODINFO(0x04730F18, XmlSchemaSet_RemoveRecursive__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CBD120, bool, Contains, (app::XmlSchemaSet * this_ptr, app::String * target_namespace));
    IL2CPP_REGISTER_METHOD(0x01CBD1E0, void, Compile, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CBDB30, app::XmlSchema *, Reprocess, (app::XmlSchemaSet * this_ptr, app::XmlSchema * schema));
    IL2CPP_REGISTER_METHODINFO(0x04789D28, XmlSchemaSet_Reprocess__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CBE200, void, CopyTo, (app::XmlSchemaSet * this_ptr, app::XmlSchema__Array * schemas, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x0477CBC8, XmlSchemaSet_CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CBE340, app::ICollection *, Schemas_1, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CBE370, app::ICollection *, Schemas_2, (app::XmlSchemaSet * this_ptr, app::String * target_namespace));
    IL2CPP_REGISTER_METHOD(0x01CBE660, app::XmlSchema *, Add_3, (app::XmlSchemaSet * this_ptr, app::String * target_namespace, app::XmlSchema * schema));
    IL2CPP_REGISTER_METHOD(0x01CBE6C0, void, Add_4, (app::XmlSchemaSet * this_ptr, app::String * target_namespace, app::XmlReader * reader, app::Hashtable * validated_namespaces));
    IL2CPP_REGISTER_METHODINFO(0x0470B620, XmlSchemaSet_Add_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CBEC10, app::XmlSchema *, FindSchemaByNSAndUrl, (app::XmlSchemaSet * this_ptr, app::Uri * schema_uri, app::String * ns, app::DictionaryEntry__Array * locations_table));
    IL2CPP_REGISTER_METHOD(0x01CBEF50, void, AddSchemaToSet, (app::XmlSchemaSet * this_ptr, app::XmlSchema * schema));
    IL2CPP_REGISTER_METHOD(0x01CBF3B0, void, ProcessNewSubstitutionGroups, (app::XmlSchemaSet * this_ptr, app::XmlSchemaObjectTable * substitution_groups_table, bool resolve));
    IL2CPP_REGISTER_METHOD(0x01CBF730, void, ResolveSubstitutionGroup, (app::XmlSchemaSet * this_ptr, app::XmlSchemaSubstitutionGroup * substitution_group, app::XmlSchemaObjectTable * subst_table));
    IL2CPP_REGISTER_METHOD(0x01CBFB70, app::XmlSchema *, Remove, (app::XmlSchemaSet * this_ptr, app::XmlSchema * schema, bool force_compile));
    IL2CPP_REGISTER_METHODINFO(0x0470A7E0, XmlSchemaSet_Remove__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CBFEC0, void, ClearTables, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CC00C0, bool, PreprocessSchema, (app::XmlSchemaSet * this_ptr, app::XmlSchema * * schema, app::String * target_namespace));
    IL2CPP_REGISTER_METHOD(0x01CC02D0, app::XmlSchema *, ParseSchema, (app::XmlSchemaSet * this_ptr, app::String * target_namespace, app::XmlReader * reader));
    IL2CPP_REGISTER_METHOD(0x01CC0550, void, CopyFromCompiledSet, (app::XmlSchemaSet * this_ptr, app::XmlSchemaSet * other_set));
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::SchemaInfo *, get_CompiledInfo, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::XmlReaderSettings *, get_ReaderSettings, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CC1A40, app::XmlResolver *, GetResolver, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::ValidationEventHandler *, GetEventHandler, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CC1A60, app::SchemaNames *, GetSchemaNames, (app::XmlSchemaSet * this_ptr, app::XmlNameTable * nt));
    IL2CPP_REGISTER_METHOD(0x01CC1CA0, bool, IsSchemaLoaded, (app::XmlSchemaSet * this_ptr, app::Uri * schema_uri, app::String * target_namespace, app::XmlSchema * * schema));
    IL2CPP_REGISTER_METHOD(0x01CC21A0, bool, GetSchemaByUri, (app::XmlSchemaSet * this_ptr, app::Uri * schema_uri, app::XmlSchema * * schema));
    IL2CPP_REGISTER_METHOD(0x01CC22D0, app::String *, GetTargetNamespace, (app::XmlSchemaSet * this_ptr, app::XmlSchema * schema));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::SortedList *, get_SortedSchemas, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CC2370, void, RemoveSchemaFromCaches, (app::XmlSchemaSet * this_ptr, app::XmlSchema * schema));
    IL2CPP_REGISTER_METHOD(0x01CC29B0, void, RemoveSchemaFromGlobalTables, (app::XmlSchemaSet * this_ptr, app::XmlSchema * schema));
    IL2CPP_REGISTER_METHOD(0x01CC3360, bool, AddToTable, (app::XmlSchemaSet * this_ptr, app::XmlSchemaObjectTable * table, app::XmlQualifiedName * qname, app::XmlSchemaObject * item));
    IL2CPP_REGISTER_METHOD(0x01CC36C0, void, VerifyTables, (app::XmlSchemaSet * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CC3AA0, void, InternalValidationCallback, (app::XmlSchemaSet * this_ptr, app::Object * sender, app::ValidationEventArgs * e));
    IL2CPP_REGISTER_METHODINFO(0x0471EBE0, XmlSchemaSet_InternalValidationCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01CC3B50, void, SendValidationEvent, (app::XmlSchemaSet * this_ptr, app::XmlSchemaException * e, app::XmlSeverityType__Enum severity));
    IL2CPP_REGISTER_METHODINFO(0x04715C50, XmlSchemaSet_SendValidationEvent__MethodInfo);
}
