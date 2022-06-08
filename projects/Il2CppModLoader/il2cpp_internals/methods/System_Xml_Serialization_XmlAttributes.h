#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlAttributes {
IL2CPP_REGISTER_METHOD(0x01C9BDB0, void, __ctor, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x01C9C0C0, void, __ctor, (XmlAttributes * __this, ICustomAttributeProvider * provider));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlAnyAttributeAttribute *, get_XmlAnyAttribute, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, XmlAnyElementAttributes *, get_XmlAnyElements, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, XmlArrayAttribute *, get_XmlArray, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, XmlArrayItemAttributes *, get_XmlArrayItems, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, XmlAttributeAttribute *, get_XmlAttribute, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, XmlChoiceIdentifierAttribute *, get_XmlChoiceIdentifier, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Object *, get_XmlDefaultValue, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, XmlElementAttributes *, get_XmlElements, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_XmlIgnore, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_Xmlns, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, XmlRootAttribute *, get_XmlRoot, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, XmlTextAttribute *, get_XmlText, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, XmlTypeAttribute *, get_XmlType, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x01C9C940, void, AddKeyHash, (XmlAttributes * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x01C9CEB0, Nullable_1_Int32_, get_Order, (XmlAttributes * __this));
IL2CPP_REGISTER_METHOD(0x01C9D010, int32_t, get_SortableOrder, (XmlAttributes * __this));
}
