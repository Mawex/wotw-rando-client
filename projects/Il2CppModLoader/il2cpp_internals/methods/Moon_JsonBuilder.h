#include <interception_macros.h>

namespace app::methods::Moon::JsonBuilder {
IL2CPP_REGISTER_METHOD(0x030EB650, int32_t, get_Capacity, (JsonBuilder * __this));
IL2CPP_REGISTER_METHOD(0x030EB680, JsonBuilder_Slot, RootSlot, (JsonBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x0475DD90, JsonBuilder_RootSlot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030EB760, JsonBuilder_Slot, NewSlot, (JsonBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x04772900, JsonBuilder_NewSlot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030EB840, void, Clear, (JsonBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x0477EE40, JsonBuilder_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030EB910, void, ResetUnsafe, (JsonBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01B65290, String *, ToString, (JsonBuilder * __this));
IL2CPP_REGISTER_METHOD(0x030EB9C0, void, WriteString, (JsonBuilder * __this, String * str));
IL2CPP_REGISTER_METHOD(0x030EBA90, void, WriteString, (JsonBuilder * __this, String * str, int32_t start, int32_t length));
IL2CPP_REGISTER_METHODINFO(0x0471A5B8, JsonBuilder_WriteString_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030EBBD0, void, WriteStringImpl, (JsonBuilder * __this, String * str, int32_t start, int32_t length));
IL2CPP_REGISTER_METHOD(0x030EBFC0, void, WriteF32, (JsonBuilder * __this, float value));
IL2CPP_REGISTER_METHOD(0x030EC0E0, void, WriteF64, (JsonBuilder * __this, double value));
IL2CPP_REGISTER_METHOD(0x030EC290, void, WriteDateTime, (JsonBuilder * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x030EC6A0, void, __ctor, (JsonBuilder * __this));
}
