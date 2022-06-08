#include <interception_macros.h>

namespace app::methods::System::Net::Http::Headers::RangeConditionHeaderValue {
IL2CPP_REGISTER_METHOD(0x02D14520, void, __ctor, (RangeConditionHeaderValue * __this, DateTimeOffset date));
IL2CPP_REGISTER_METHOD(0x02D145C0, void, __ctor, (RangeConditionHeaderValue * __this, EntityTagHeaderValue * entityTag));
IL2CPP_REGISTER_METHODINFO(0x04734210, RangeConditionHeaderValue__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D14680, Nullable_1_DateTimeOffset_, get_Date, (RangeConditionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x007F2CB0, void, set_Date, (RangeConditionHeaderValue * __this, Nullable_1_DateTimeOffset_ value));
IL2CPP_REGISTER_METHOD(0x002FBB00, EntityTagHeaderValue *, get_EntityTag, (RangeConditionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_EntityTag, (RangeConditionHeaderValue * __this, EntityTagHeaderValue * value));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (RangeConditionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D146A0, bool, Equals, (RangeConditionHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D14820, int32_t, GetHashCode, (RangeConditionHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D14900, bool, TryParse, (String * input, RangeConditionHeaderValue * * parsedValue));
IL2CPP_REGISTER_METHODINFO(0x0476BA90, RangeConditionHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D14F60, String *, ToString, (RangeConditionHeaderValue * __this));
}
