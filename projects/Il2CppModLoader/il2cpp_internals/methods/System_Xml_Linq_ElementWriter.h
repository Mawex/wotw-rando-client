#include <interception_macros.h>

namespace app::methods::System::Xml::Linq::ElementWriter {
IL2CPP_REGISTER_METHOD(0x002411A0, void, __ctor, (ElementWriter__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x002411C0, void, WriteElement, (ElementWriter__Boxed * __this, XElement * e));
IL2CPP_REGISTER_METHOD(0x002411D0, String *, GetPrefixOfNamespace, (ElementWriter__Boxed * __this, XNamespace * ns, bool allowDefaultNamespace));
IL2CPP_REGISTER_METHOD(0x002411E0, void, PushAncestors, (ElementWriter__Boxed * __this, XElement * e));
IL2CPP_REGISTER_METHOD(0x002411F0, void, PushElement, (ElementWriter__Boxed * __this, XElement * e));
IL2CPP_REGISTER_METHOD(0x00241200, void, WriteEndElement, (ElementWriter__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00241240, void, WriteFullEndElement, (ElementWriter__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00241280, void, WriteStartElement, (ElementWriter__Boxed * __this, XElement * e));
}
