#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlAnyConverter {
    IL2CPP_REGISTER_METHOD(0x02236CC0, void, __ctor, (app::XmlAnyConverter * this_ptr, app::XmlTypeCode__Enum type_code));
    IL2CPP_REGISTER_METHOD(0x02236E70, bool, ToBoolean, (app::XmlAnyConverter * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04768AE0, XmlAnyConverter_ToBoolean__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02237060, app::DateTime, ToDateTime, (app::XmlAnyConverter * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04735920, XmlAnyConverter_ToDateTime__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02237250, app::DateTimeOffset, ToDateTimeOffset, (app::XmlAnyConverter * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x0470EEE8, XmlAnyConverter_ToDateTimeOffset__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022374B0, app::Decimal, ToDecimal, (app::XmlAnyConverter * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04746B20, XmlAnyConverter_ToDecimal__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02237700, double, ToDouble, (app::XmlAnyConverter * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x0472E130, XmlAnyConverter_ToDouble__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022378F0, int32_t, ToInt32, (app::XmlAnyConverter * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04786470, XmlAnyConverter_ToInt32__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02237AE0, int64_t, ToInt64, (app::XmlAnyConverter * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x047305E8, XmlAnyConverter_ToInt64__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02237CD0, float, ToSingle, (app::XmlAnyConverter * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x0473DE48, XmlAnyConverter_ToSingle__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02237F20, app::Object *, ChangeType_1, (app::XmlAnyConverter * this_ptr, bool value, app::Type * destination_type));
    IL2CPP_REGISTER_METHODINFO(0x047900C0, XmlAnyConverter_ChangeType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022381E0, app::Object *, ChangeType_2, (app::XmlAnyConverter * this_ptr, app::DateTime value, app::Type * destination_type));
    IL2CPP_REGISTER_METHODINFO(0x0470F0E0, XmlAnyConverter_ChangeType_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022384A0, app::Object *, ChangeType_3, (app::XmlAnyConverter * this_ptr, app::Decimal value, app::Type * destination_type));
    IL2CPP_REGISTER_METHODINFO(0x047096F0, XmlAnyConverter_ChangeType_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02238780, app::Object *, ChangeType_4, (app::XmlAnyConverter * this_ptr, double value, app::Type * destination_type));
    IL2CPP_REGISTER_METHODINFO(0x0476BA48, XmlAnyConverter_ChangeType_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02238A50, app::Object *, ChangeType_5, (app::XmlAnyConverter * this_ptr, int32_t value, app::Type * destination_type));
    IL2CPP_REGISTER_METHODINFO(0x0475E308, XmlAnyConverter_ChangeType_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02238D10, app::Object *, ChangeType_6, (app::XmlAnyConverter * this_ptr, int64_t value, app::Type * destination_type));
    IL2CPP_REGISTER_METHODINFO(0x047784A0, XmlAnyConverter_ChangeType_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02238FD0, app::Object *, ChangeType_7, (app::XmlAnyConverter * this_ptr, app::String * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver));
    IL2CPP_REGISTER_METHODINFO(0x0471B298, XmlAnyConverter_ChangeType_6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022392C0, app::Object *, ChangeType_8, (app::XmlAnyConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver));
    IL2CPP_REGISTER_METHODINFO(0x04741440, XmlAnyConverter_ChangeType_7__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0223ADE0, app::Object *, ChangeTypeWildcardDestination, (app::XmlAnyConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver));
    IL2CPP_REGISTER_METHOD(0x0223AF50, app::Object *, ChangeTypeWildcardSource, (app::XmlAnyConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver));
    IL2CPP_REGISTER_METHOD(0x0223B110, app::XPathNavigator *, ToNavigator, (app::XmlAnyConverter * this_ptr, app::XPathNavigator * nav));
    IL2CPP_REGISTER_METHODINFO(0x04727880, XmlAnyConverter_ToNavigator__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0223B210, void, __cctor, ());
}
