using namespace app;

namespace app::methods::System::Xml::Serialization::ListMap {
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ChoiceMember, (ListMap * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlTypeMapElementInfoList *, get_ItemInfo, (ListMap * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ItemInfo, (ListMap * __this, XmlTypeMapElementInfoList * value));
IL2CPP_REGISTER_METHOD(0x01C8E780, XmlTypeMapElementInfo *, FindElement, (ListMap * __this, Object * ob, int32_t index, Object * memberValue));
IL2CPP_REGISTER_METHODINFO(0x047579B8, ListMap_FindElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C8ED40, XmlTypeMapElementInfo *, FindElement, (ListMap * __this, String * elementName, String * ns));
IL2CPP_REGISTER_METHOD(0x01C8EFF0, XmlTypeMapElementInfo *, FindTextElement, (ListMap * __this));
IL2CPP_REGISTER_METHOD(0x01C8F210, void, GetArrayType, (ListMap * __this, int32_t itemCount, String * * localName, String * * ns));
IL2CPP_REGISTER_METHOD(0x01C8F4D0, bool, Equals, (ListMap * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (ListMap * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ListMap * __this));
}
