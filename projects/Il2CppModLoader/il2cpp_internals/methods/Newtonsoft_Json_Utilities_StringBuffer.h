using namespace app;

namespace app::methods::Newtonsoft::Json::Utilities::StringBuffer {
IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_Position, (StringBuffer__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00127510, void, set_Position, (StringBuffer__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x001D5C40, bool, get_IsEmpty, (StringBuffer__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002409C0, void, __ctor, (StringBuffer__Boxed * __this, IArrayPool_1_System_Char_ * bufferPool, int32_t initalSize));
IL2CPP_REGISTER_METHOD(0x002409F0, void, __ctor, (StringBuffer__Boxed * __this, Char__Array * buffer));
IL2CPP_REGISTER_METHOD(0x00240A00, void, Append, (StringBuffer__Boxed * __this, IArrayPool_1_System_Char_ * bufferPool, uint16_t value));
IL2CPP_REGISTER_METHOD(0x00240A10, void, Append, (StringBuffer__Boxed * __this, IArrayPool_1_System_Char_ * bufferPool, Char__Array * buffer, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x00240A20, void, Clear, (StringBuffer__Boxed * __this, IArrayPool_1_System_Char_ * bufferPool));
IL2CPP_REGISTER_METHOD(0x00240A60, void, EnsureSize, (StringBuffer__Boxed * __this, IArrayPool_1_System_Char_ * bufferPool, int32_t appendLength));
IL2CPP_REGISTER_METHOD(0x00240AD0, String *, ToString, (StringBuffer__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00240B00, String *, ToString, (StringBuffer__Boxed * __this, int32_t start, int32_t length));
IL2CPP_REGISTER_METHOD(0x00107C00, Char__Array *, get_InternalBuffer, (StringBuffer__Boxed * __this));
}
