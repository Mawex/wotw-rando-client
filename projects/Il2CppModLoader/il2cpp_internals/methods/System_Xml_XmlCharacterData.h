#include <interception_macros.h>

namespace app::methods::System_Xml::XmlCharacterData {
IL2CPP_REGISTER_METHOD(0x01714A90, void, __ctor, (app::XmlCharacterData * this_ptr, app::String * data, app::XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x01707640, String *, get_Value, (app::XmlCharacterData * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195FD10, void, set_Value, (app::XmlCharacterData * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0173D7B0, String *, get_InnerText, (app::XmlCharacterData * this_ptr));
IL2CPP_REGISTER_METHOD(0x00C53A30, void, set_InnerText, (app::XmlCharacterData * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0195FD30, String *, get_Data, (app::XmlCharacterData * this_ptr));
IL2CPP_REGISTER_METHOD(0x0195FDC0, void, set_Data, (app::XmlCharacterData * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0195FE70, bool, CheckOnData, (app::XmlCharacterData * this_ptr, app::String * data));
}
