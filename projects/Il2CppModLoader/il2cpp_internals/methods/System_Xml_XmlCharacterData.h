#include <interception_macros.h>

namespace app::methods::System::Xml::XmlCharacterData {
IL2CPP_REGISTER_METHOD(0x01714A90, void, __ctor, (XmlCharacterData * __this, String * data, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x01707640, String *, get_Value, (XmlCharacterData * __this));
IL2CPP_REGISTER_METHOD(0x0195FD10, void, set_Value, (XmlCharacterData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0173D7B0, String *, get_InnerText, (XmlCharacterData * __this));
IL2CPP_REGISTER_METHOD(0x00C53A30, void, set_InnerText, (XmlCharacterData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0195FD30, String *, get_Data, (XmlCharacterData * __this));
IL2CPP_REGISTER_METHOD(0x0195FDC0, void, set_Data, (XmlCharacterData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0195FE70, bool, CheckOnData, (XmlCharacterData * __this, String * data));
}
