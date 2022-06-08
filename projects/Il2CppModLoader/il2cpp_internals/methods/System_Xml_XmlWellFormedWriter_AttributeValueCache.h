#include <interception_macros.h>

namespace app::methods::System::Xml::XmlWellFormedWriter_AttributeValueCache {
IL2CPP_REGISTER_METHOD(0x01FD3600, String *, get_StringValue, (XmlWellFormedWriter_AttributeValueCache * __this));
IL2CPP_REGISTER_METHOD(0x01FD3640, void, WriteEntityRef, (XmlWellFormedWriter_AttributeValueCache * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01FD38F0, void, WriteCharEntity, (XmlWellFormedWriter_AttributeValueCache * __this, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x01FD39F0, void, WriteSurrogateCharEntity, (XmlWellFormedWriter_AttributeValueCache * __this, uint16_t lowChar, uint16_t highChar));
IL2CPP_REGISTER_METHOD(0x01FD3B60, void, WriteWhitespace, (XmlWellFormedWriter_AttributeValueCache * __this, String * ws));
IL2CPP_REGISTER_METHOD(0x01FD3BF0, void, WriteString, (XmlWellFormedWriter_AttributeValueCache * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01FD3C90, void, WriteChars, (XmlWellFormedWriter_AttributeValueCache * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01FD3E70, void, WriteRaw, (XmlWellFormedWriter_AttributeValueCache * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x01FD4050, void, WriteRaw, (XmlWellFormedWriter_AttributeValueCache * __this, String * data));
IL2CPP_REGISTER_METHOD(0x01FD40E0, void, WriteValue, (XmlWellFormedWriter_AttributeValueCache * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01FD4170, void, Replay, (XmlWellFormedWriter_AttributeValueCache * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x01FD45E0, void, Trim, (XmlWellFormedWriter_AttributeValueCache * __this));
IL2CPP_REGISTER_METHOD(0x01FD4C00, void, Clear, (XmlWellFormedWriter_AttributeValueCache * __this));
IL2CPP_REGISTER_METHOD(0x01FD4C40, void, StartComplexValue, (XmlWellFormedWriter_AttributeValueCache * __this));
IL2CPP_REGISTER_METHOD(0x01FD4C90, void, AddItem, (XmlWellFormedWriter_AttributeValueCache * __this, XmlWellFormedWriter_AttributeValueCache_ItemType__Enum type, Object * data));
IL2CPP_REGISTER_METHOD(0x01FD4F10, void, __ctor, (XmlWellFormedWriter_AttributeValueCache * __this));
}
