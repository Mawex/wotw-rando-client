#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::ConfigHandler {
IL2CPP_REGISTER_METHOD(0x01AA0550, void, __ctor, (ConfigHandler * __this, bool onlyDelayedChannels));
IL2CPP_REGISTER_METHOD(0x01AA0780, void, ValidatePath, (ConfigHandler * __this, String * element, String__Array * paths));
IL2CPP_REGISTER_METHODINFO(0x047487F8, ConfigHandler_ValidatePath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA08A0, bool, CheckPath, (ConfigHandler * __this, String * path));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartParsing, (ConfigHandler * __this, SmallXmlParser * parser));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnProcessingInstruction, (ConfigHandler * __this, String * name, String * text));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnIgnorableWhitespace, (ConfigHandler * __this, String * s));
IL2CPP_REGISTER_METHOD(0x01AA0A30, void, OnStartElement, (ConfigHandler * __this, String * name, SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x04729218, ConfigHandler_OnStartElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA0B80, void, ParseElement, (ConfigHandler * __this, String * name, SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x04787B88, ConfigHandler_ParseElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA1F20, void, OnEndElement, (ConfigHandler * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01AA1FC0, void, ReadCustomProviderData, (ConfigHandler * __this, String * name, SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHOD(0x01AA2480, void, ReadLifetine, (ConfigHandler * __this, SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x04775918, ConfigHandler_ReadLifetine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA2850, TimeSpan, ParseTime, (ConfigHandler * __this, String * s));
IL2CPP_REGISTER_METHODINFO(0x04709AB0, ConfigHandler_ParseTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA2CF0, void, ReadChannel, (ConfigHandler * __this, SmallXmlParser_IAttrList * attrs, bool isTemplate));
IL2CPP_REGISTER_METHODINFO(0x04785990, ConfigHandler_ReadChannel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA33E0, ProviderData *, ReadProvider, (ConfigHandler * __this, String * name, SmallXmlParser_IAttrList * attrs, bool isTemplate));
IL2CPP_REGISTER_METHODINFO(0x0478FF08, ConfigHandler_ReadProvider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA3B60, void, ReadClientActivated, (ConfigHandler * __this, SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x047923C8, ConfigHandler_ReadClientActivated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA3E80, void, ReadServiceActivated, (ConfigHandler * __this, SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHOD(0x01AA4130, void, ReadClientWellKnown, (ConfigHandler * __this, SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHOD(0x01AA4400, void, ReadServiceWellKnown, (ConfigHandler * __this, SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x0476AEA8, ConfigHandler_ReadServiceWellKnown__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA47C0, void, ReadInteropXml, (ConfigHandler * __this, SmallXmlParser_IAttrList * attrs, bool isElement));
IL2CPP_REGISTER_METHOD(0x01AA4A40, void, ReadPreload, (ConfigHandler * __this, SmallXmlParser_IAttrList * attrs));
IL2CPP_REGISTER_METHODINFO(0x0473DE88, ConfigHandler_ReadPreload__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA4D10, String *, GetNotNull, (ConfigHandler * __this, SmallXmlParser_IAttrList * attrs, String * name));
IL2CPP_REGISTER_METHODINFO(0x04716628, ConfigHandler_GetNotNull__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AA4E30, String *, ExtractAssembly, (ConfigHandler * __this, String * * type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnChars, (ConfigHandler * __this, String * ch));
IL2CPP_REGISTER_METHOD(0x01AA4F80, void, OnEndParsing, (ConfigHandler * __this, SmallXmlParser * parser));
}
