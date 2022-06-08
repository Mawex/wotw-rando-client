#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlAnyConverter {
IL2CPP_REGISTER_METHOD(0x02236CC0, void, __ctor, (XmlAnyConverter * __this, XmlTypeCode__Enum typeCode));
IL2CPP_REGISTER_METHOD(0x02236E70, bool, ToBoolean, (XmlAnyConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04768AE0, XmlAnyConverter_ToBoolean__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02237060, DateTime, ToDateTime, (XmlAnyConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04735920, XmlAnyConverter_ToDateTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02237250, DateTimeOffset, ToDateTimeOffset, (XmlAnyConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0470EEE8, XmlAnyConverter_ToDateTimeOffset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022374B0, Decimal, ToDecimal, (XmlAnyConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04746B20, XmlAnyConverter_ToDecimal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02237700, double, ToDouble, (XmlAnyConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0472E130, XmlAnyConverter_ToDouble__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022378F0, int32_t, ToInt32, (XmlAnyConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04786470, XmlAnyConverter_ToInt32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02237AE0, int64_t, ToInt64, (XmlAnyConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047305E8, XmlAnyConverter_ToInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02237CD0, float, ToSingle, (XmlAnyConverter * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0473DE48, XmlAnyConverter_ToSingle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02237F20, Object *, ChangeType, (XmlAnyConverter * __this, bool value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x047900C0, XmlAnyConverter_ChangeType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022381E0, Object *, ChangeType, (XmlAnyConverter * __this, DateTime value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0470F0E0, XmlAnyConverter_ChangeType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022384A0, Object *, ChangeType, (XmlAnyConverter * __this, Decimal value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x047096F0, XmlAnyConverter_ChangeType_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02238780, Object *, ChangeType, (XmlAnyConverter * __this, double value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0476BA48, XmlAnyConverter_ChangeType_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02238A50, Object *, ChangeType, (XmlAnyConverter * __this, int32_t value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x0475E308, XmlAnyConverter_ChangeType_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02238D10, Object *, ChangeType, (XmlAnyConverter * __this, int64_t value, Type * destinationType));
IL2CPP_REGISTER_METHODINFO(0x047784A0, XmlAnyConverter_ChangeType_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02238FD0, Object *, ChangeType, (XmlAnyConverter * __this, String * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x0471B298, XmlAnyConverter_ChangeType_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022392C0, Object *, ChangeType, (XmlAnyConverter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHODINFO(0x04741440, XmlAnyConverter_ChangeType_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223ADE0, Object *, ChangeTypeWildcardDestination, (XmlAnyConverter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHOD(0x0223AF50, Object *, ChangeTypeWildcardSource, (XmlAnyConverter * __this, Object * value, Type * destinationType, IXmlNamespaceResolver * nsResolver));
IL2CPP_REGISTER_METHOD(0x0223B110, XPathNavigator *, ToNavigator, (XmlAnyConverter * __this, XPathNavigator * nav));
IL2CPP_REGISTER_METHODINFO(0x04727880, XmlAnyConverter_ToNavigator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0223B210, void, __cctor, ());
}
