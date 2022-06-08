using namespace app;

namespace app::methods::System::Runtime::Serialization::StreamingContext {
IL2CPP_REGISTER_METHOD(0x001D7E30, void, __ctor, (StreamingContext__Boxed * __this, StreamingContextStates__Enum state));
IL2CPP_REGISTER_METHOD(0x0018ED30, void, __ctor, (StreamingContext__Boxed * __this, StreamingContextStates__Enum state, Object * additional));
IL2CPP_REGISTER_METHOD(0x00107C00, Object *, get_Context, (StreamingContext__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D7E40, bool, Equals, (StreamingContext__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, GetHashCode, (StreamingContext__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010A860, StreamingContextStates__Enum, get_State, (StreamingContext__Boxed * __this));
}
