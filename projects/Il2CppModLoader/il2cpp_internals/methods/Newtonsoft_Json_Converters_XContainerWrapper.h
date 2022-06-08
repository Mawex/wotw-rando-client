#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Converters::XContainerWrapper {
IL2CPP_REGISTER_METHOD(0x01A56230, XContainer *, get_Container, (XContainerWrapper * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XContainerWrapper * __this, XContainer * container));
IL2CPP_REGISTER_METHOD(0x01A56300, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_ChildNodes, (XContainerWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A56660, bool, get_HasChildNodes, (XContainerWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A56690, IXmlNode *, get_ParentNode, (XContainerWrapper * __this));
IL2CPP_REGISTER_METHOD(0x01A566F0, IXmlNode *, WrapNode, (XObject * node));
IL2CPP_REGISTER_METHOD(0x01A56DB0, IXmlNode *, AppendChild, (XContainerWrapper * __this, IXmlNode * newChild));
}
