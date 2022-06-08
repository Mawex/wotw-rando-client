using namespace app;

namespace app::methods::System::Xml::Schema::DtdValidator {
IL2CPP_REGISTER_METHOD(0x023657A0, void, __ctor, (DtdValidator * __this, XmlValidatingReaderImpl * reader, IValidationEventHandling * eventHandling, bool processIdentityConstraints));
IL2CPP_REGISTER_METHOD(0x023658A0, void, Init, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x02365CB0, void, Validate, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x023661C0, bool, MeetsStandAloneConstraint, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x023662C0, void, ValidatePIComment, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x023663C0, void, ValidateElement, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x02366580, void, ValidateChildElement, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x02366780, void, ValidateStartElement, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x02366DD0, void, ValidateEndStartElement, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x02367000, void, ProcessElement, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x02367190, void, CompleteValidation, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x023671F0, void, ValidateEndElement, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x01C870B0, bool, get_PreserveWhitespace, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x02367450, void, ProcessTokenizedType, (DtdValidator * __this, XmlTokenizedType__Enum ttype, String * name));
IL2CPP_REGISTER_METHOD(0x02367780, void, CheckValue, (DtdValidator * __this, String * value, SchemaAttDef * attdef));
IL2CPP_REGISTER_METHOD(0x02367CE0, void, AddID, (DtdValidator * __this, String * name, Object * node));
IL2CPP_REGISTER_METHOD(0x02367E80, Object *, FindId, (DtdValidator * __this, String * name));
IL2CPP_REGISTER_METHOD(0x02367EA0, bool, GenEntity, (DtdValidator * __this, XmlQualifiedName * qname));
IL2CPP_REGISTER_METHODINFO(0x04795560, DtdValidator_GenEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02368090, SchemaEntity *, GetEntity, (DtdValidator * __this, XmlQualifiedName * qname, bool fParameterEntity));
IL2CPP_REGISTER_METHOD(0x02368240, void, CheckForwardRefs, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x02368450, void, Push, (DtdValidator * __this, XmlQualifiedName * elementName));
IL2CPP_REGISTER_METHOD(0x02368680, bool, Pop, (DtdValidator * __this));
IL2CPP_REGISTER_METHOD(0x023687E0, void, SetDefaultTypedValue, (SchemaAttDef * attdef, IDtdParserAdapter * readerAdapter));
IL2CPP_REGISTER_METHOD(0x02368AB0, void, CheckDefaultValue, (SchemaAttDef * attdef, SchemaInfo * sinfo, IValidationEventHandling * eventHandling, String * baseUriStr));
IL2CPP_REGISTER_METHOD(0x02368F40, void, __cctor, (MethodInfo * method));
}
