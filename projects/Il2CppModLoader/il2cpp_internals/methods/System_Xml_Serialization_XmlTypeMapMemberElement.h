using namespace app;

namespace app::methods::System::Xml::Serialization::XmlTypeMapMemberElement {
IL2CPP_REGISTER_METHOD(0x0194ED90, void, __ctor, (XmlTypeMapMemberElement * __this));
IL2CPP_REGISTER_METHOD(0x0194F380, XmlTypeMapElementInfoList *, get_ElementInfo, (XmlTypeMapMemberElement * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_ElementInfo, (XmlTypeMapMemberElement * __this, XmlTypeMapElementInfoList * value));
IL2CPP_REGISTER_METHOD(0x002FBB80, String *, get_ChoiceMember, (XmlTypeMapMemberElement * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_ChoiceMember, (XmlTypeMapMemberElement * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, TypeData *, get_ChoiceTypeData, (XmlTypeMapMemberElement * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_ChoiceTypeData, (XmlTypeMapMemberElement * __this, TypeData * value));
IL2CPP_REGISTER_METHOD(0x0194F4E0, XmlTypeMapElementInfo *, FindElement, (XmlTypeMapMemberElement * __this, Object * ob, Object * memberValue));
IL2CPP_REGISTER_METHOD(0x0194FA00, void, SetChoice, (XmlTypeMapMemberElement * __this, Object * ob, Object * choice));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsXmlTextCollector, (XmlTypeMapMemberElement * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsXmlTextCollector, (XmlTypeMapMemberElement * __this, bool value));
}
