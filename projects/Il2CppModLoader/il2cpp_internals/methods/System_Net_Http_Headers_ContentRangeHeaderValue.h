#include <interception_macros.h>

namespace app::methods::System::Net::Http::Headers::ContentRangeHeaderValue {
IL2CPP_REGISTER_METHOD(0x02D067B0, void, __ctor, (ContentRangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD30, Nullable_1_Int64_, get_From, (ContentRangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD40, void, set_From, (ContentRangeHeaderValue * __this, Nullable_1_Int64_ value));
IL2CPP_REGISTER_METHOD(0x00CB5CB0, Nullable_1_Int64_, get_Length, (ContentRangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CC0, void, set_Length, (ContentRangeHeaderValue * __this, Nullable_1_Int64_ value));
IL2CPP_REGISTER_METHOD(0x00CB5CD0, Nullable_1_Int64_, get_To, (ContentRangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CE0, void, set_To, (ContentRangeHeaderValue * __this, Nullable_1_Int64_ value));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Unit, (ContentRangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, ICloneable_Clone, (ContentRangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D06840, bool, Equals, (ContentRangeHeaderValue * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02D06AD0, int32_t, GetHashCode, (ContentRangeHeaderValue * __this));
IL2CPP_REGISTER_METHOD(0x02D06C40, bool, TryParse, (String * input, ContentRangeHeaderValue * * parsedValue));
IL2CPP_REGISTER_METHODINFO(0x047533D8, ContentRangeHeaderValue_TryParse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02D07380, String *, ToString, (ContentRangeHeaderValue * __this));
}
