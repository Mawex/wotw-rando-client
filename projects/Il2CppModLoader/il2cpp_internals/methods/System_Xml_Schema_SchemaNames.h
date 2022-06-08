using namespace app;

namespace app::methods::System::Xml::Schema::SchemaNames {
IL2CPP_REGISTER_METHOD(0x01AB25D0, void, __ctor, (SchemaNames * __this, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHOD(0x01AB5560, void, CreateTokenToQNameTable, (SchemaNames * __this));
IL2CPP_REGISTER_METHOD(0x01AB8A50, SchemaType__Enum, SchemaTypeFromRoot, (SchemaNames * __this, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01AB8B10, bool, IsXSDRoot, (SchemaNames * __this, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x01AB8BA0, bool, IsXDRRoot, (SchemaNames * __this, String * localName, String * ns));
}
