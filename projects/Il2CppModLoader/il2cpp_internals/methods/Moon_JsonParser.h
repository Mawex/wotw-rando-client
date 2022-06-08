using namespace app;

namespace app::methods::Moon::JsonParser {
IL2CPP_REGISTER_METHOD(0x030EB650, int32_t, get_Capacity, (JsonParser * __this));
IL2CPP_REGISTER_METHOD(0x030EDB40, void, __ctor, (JsonParser * __this, String * json));
IL2CPP_REGISTER_METHOD(0x030EDE50, void, Reset, (JsonParser * __this));
IL2CPP_REGISTER_METHOD(0x030EE0B0, void, Reuse, (JsonParser * __this, String * json));
IL2CPP_REGISTER_METHOD(0x030EE0E0, JsonParser_Slot, RootSlot, (JsonParser * __this));
IL2CPP_REGISTER_METHODINFO(0x04704CD0, JsonParser_RootSlot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030EE1B0, JsonToken__Enum, NextTokenWithoutAdvancing, (JsonParser * __this, double * number, Substr * remainder));
IL2CPP_REGISTER_METHODINFO(0x0471AFD8, JsonParser_NextTokenWithoutAdvancing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030EE290, JsonToken__Enum, NextToken, (JsonParser * __this, double * number));
IL2CPP_REGISTER_METHOD(0x030EE2C0, void, PushScope, (JsonParser * __this, int32_t ident));
IL2CPP_REGISTER_METHOD(0x030EE3C0, void, PopScope, (JsonParser * __this, int32_t ident));
IL2CPP_REGISTER_METHODINFO(0x04773EF8, JsonParser_PopScope__MethodInfo);
}
