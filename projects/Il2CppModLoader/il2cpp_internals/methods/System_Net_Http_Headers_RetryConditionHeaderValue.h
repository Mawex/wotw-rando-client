using namespace app;

namespace app::methods::System::Net::Http::Headers::RetryConditionHeaderValue {
IL2CPP_REGISTER_METHOD(0x02D16BF0, void, __ctor, (RetryConditionHeaderValue * __this, DateTimeOffset date));
IL2CPP_REGISTER_METHOD(0x02D16C90, void, __ctor, (RetryConditionHeaderValue * __this, TimeSpan delta));
IL2CPP_REGISTER_METHODINFO(0x04702918, RetryConditionHeaderValue__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D14680, Nullable_1_DateTimeOffset_, get_Date, (RetryConditionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x007F2CB0, void, set_Date, (RetryConditionHeaderValue * __this, Nullable_1_DateTimeOffset_ value));
IL2CPP_REGISTER_METHOD(0x00CB5CB0, Nullable_1_TimeSpan_, get_Delta, (RetryConditionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CC0, void, set_Delta, (RetryConditionHeaderValue * __this, Nullable_1_TimeSpan_ value));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (RetryConditionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D16D80, bool, Equals, (RetryConditionHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D16F40, int32_t, GetHashCode, (RetryConditionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D17030, bool, TryParse, (String * input, RetryConditionHeaderValue * * parsedValue));
IL2CPP_REGISTER_METHODINFO(0x0478CF30, RetryConditionHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D17590, String *, ToString, (RetryConditionHeaderValue * __this));
}
