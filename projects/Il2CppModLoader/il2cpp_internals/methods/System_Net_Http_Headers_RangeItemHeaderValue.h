using namespace app;

namespace app::methods::System::Net::Http::Headers::RangeItemHeaderValue {
IL2CPP_REGISTER_METHOD(0x02D16450, void, __ctor, (RangeItemHeaderValue * __this, Nullable_1_Int64_ from, Nullable_1_Int64_ to));
IL2CPP_REGISTER_METHODINFO(0x04762668, RangeItemHeaderValue__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01349560, Nullable_1_Int64_, get_From, (RangeItemHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x011927A0, void, set_From, (RangeItemHeaderValue * __this, Nullable_1_Int64_ value));
IL2CPP_REGISTER_METHOD(0x01746A40, Nullable_1_Int64_, get_To, (RangeItemHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02071D00, void, set_To, (RangeItemHeaderValue * __this, Nullable_1_Int64_ value));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (RangeItemHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D16630, bool, Equals, (RangeItemHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D16770, int32_t, GetHashCode, (RangeItemHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D16850, String *, ToString, (RangeItemHeaderValue * __this));
}
