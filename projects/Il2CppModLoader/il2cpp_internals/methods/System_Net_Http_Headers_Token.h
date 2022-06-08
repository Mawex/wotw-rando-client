using namespace app;

namespace app::methods::System::Net::Http::Headers::Token {
IL2CPP_REGISTER_METHOD(0x00234C30, void, __ctor, (Token__Boxed * __this, Token_Type__Enum type, int32_t startPosition, int32_t endPosition));
IL2CPP_REGISTER_METHOD(0x00113CE0, int32_t, get_StartPosition, (Token__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113CF0, void, set_StartPosition, (Token__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_EndPosition, (Token__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00127510, void, set_EndPosition, (Token__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0010E170, Token_Type__Enum, get_Kind, (Token__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02D182F0, Token_Type__Enum, operator_, (Token token));
IL2CPP_REGISTER_METHOD(0x00234C50, String *, ToString, (Token__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02D183C0, void, __cctor, (MethodInfo * method));
}
