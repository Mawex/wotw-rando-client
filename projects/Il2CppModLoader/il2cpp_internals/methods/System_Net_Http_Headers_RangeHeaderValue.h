using namespace app;

namespace app::methods::System::Net::Http::Headers::RangeHeaderValue {
IL2CPP_REGISTER_METHOD(0x02D150F0, void, __ctor, (RangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D15180, void, __ctor, (RangeHeaderValue * __this, RangeHeaderValue * source));
IL2CPP_REGISTER_METHOD(0x02D15360, ICollection_1_System_Net_Http_Headers_RangeItemHeaderValue_ *, get_Ranges, (RangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Unit, (RangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D154C0, Object *, ICloneable_Clone, (RangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D15610, bool, Equals, (RangeHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D15850, int32_t, GetHashCode, (RangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D15920, bool, TryParse, (String * input, RangeHeaderValue * * parsedValue));
IL2CPP_REGISTER_METHODINFO(0x04757020, RangeHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D16190, String *, ToString, (RangeHeaderValue * __this));
}
