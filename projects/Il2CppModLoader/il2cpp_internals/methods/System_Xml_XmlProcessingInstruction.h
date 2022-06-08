#include <interception_macros.h>

namespace app::methods::System::Xml::XmlProcessingInstruction {
IL2CPP_REGISTER_METHOD(0x016FF630, void, __ctor, (XmlProcessingInstruction * __this, String * target, String * data, XmlDocument * doc));
IL2CPP_REGISTER_METHOD(0x016FF680, String *, get_Name, (XmlProcessingInstruction * __this));
IL2CPP_REGISTER_METHOD(0x015A1590, String *, get_LocalName, (XmlProcessingInstruction * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Value, (XmlProcessingInstruction * __this));
IL2CPP_REGISTER_METHOD(0x016FF710, void, set_Value, (XmlProcessingInstruction * __this, String * value));
IL2CPP_REGISTER_METHOD(0x016FF720, void, set_Data, (XmlProcessingInstruction * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_InnerText, (XmlProcessingInstruction * __this));
IL2CPP_REGISTER_METHOD(0x016FF710, void, set_InnerText, (XmlProcessingInstruction * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00AD8BA0, XmlNodeType__Enum, get_NodeType, (XmlProcessingInstruction * __this));
IL2CPP_REGISTER_METHOD(0x016FF7D0, XmlNode *, CloneNode, (XmlProcessingInstruction * __this, bool deep));
IL2CPP_REGISTER_METHOD(0x016FF820, void, WriteTo, (XmlProcessingInstruction * __this, XmlWriter * w));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContentTo, (XmlProcessingInstruction * __this, XmlWriter * w));
}
