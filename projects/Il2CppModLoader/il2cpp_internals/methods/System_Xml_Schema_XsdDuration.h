using namespace app;

namespace app::methods::System::Xml::Schema::XsdDuration {
IL2CPP_REGISTER_METHOD(0x001C6280, void, __ctor, (XsdDuration__Boxed * __this, bool isNegative, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t nanoseconds));
IL2CPP_REGISTER_METHODINFO(0x04775ED0, XsdDuration__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001C6290, void, __ctor, (XsdDuration__Boxed * __this, TimeSpan timeSpan));
IL2CPP_REGISTER_METHOD(0x001C62A0, void, __ctor, (XsdDuration__Boxed * __this, TimeSpan timeSpan, XsdDuration_DurationType__Enum durationType));
IL2CPP_REGISTER_METHOD(0x001C62B0, void, __ctor, (XsdDuration__Boxed * __this, String * s));
IL2CPP_REGISTER_METHOD(0x001C62C0, void, __ctor, (XsdDuration__Boxed * __this, String * s, XsdDuration_DurationType__Enum durationType));
IL2CPP_REGISTER_METHODINFO(0x0473D9E0, XsdDuration__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001C62D0, bool, get_IsNegative, (XsdDuration__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Years, (XsdDuration__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113CE0, int32_t, get_Months, (XsdDuration__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_Days, (XsdDuration__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001155B0, int32_t, get_Hours, (XsdDuration__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_Minutes, (XsdDuration__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115920, int32_t, get_Seconds, (XsdDuration__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C62E0, int32_t, get_Nanoseconds, (XsdDuration__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C62F0, TimeSpan, ToTimeSpan, (XsdDuration__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C6300, TimeSpan, ToTimeSpan, (XsdDuration__Boxed * __this, XsdDuration_DurationType__Enum durationType));
IL2CPP_REGISTER_METHODINFO(0x0474D950, XsdDuration_ToTimeSpan_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001C6310, Exception *, TryToTimeSpan, (XsdDuration__Boxed * __this, TimeSpan * result));
IL2CPP_REGISTER_METHOD(0x001C6320, Exception *, TryToTimeSpan, (XsdDuration__Boxed * __this, XsdDuration_DurationType__Enum durationType, TimeSpan * result));
IL2CPP_REGISTER_METHODINFO(0x04743778, XsdDuration_TryToTimeSpan_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001C6330, String *, ToString, (XsdDuration__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C6340, String *, ToString, (XsdDuration__Boxed * __this, XsdDuration_DurationType__Enum durationType));
IL2CPP_REGISTER_METHOD(0x01C820C0, Exception *, TryParse, (String * s, XsdDuration * result));
IL2CPP_REGISTER_METHOD(0x01C820D0, Exception *, TryParse, (String * s, XsdDuration_DurationType__Enum durationType, XsdDuration * result));
IL2CPP_REGISTER_METHOD(0x01C82F90, String *, TryParseDigits, (String * s, int32_t * offset, bool eatDigits, int32_t * result, int32_t * numDigits));
}
