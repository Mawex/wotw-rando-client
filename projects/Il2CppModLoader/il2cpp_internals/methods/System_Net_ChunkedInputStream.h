using namespace app;

namespace app::methods::System::Net::ChunkedInputStream {
IL2CPP_REGISTER_METHOD(0x02016D60, void, __ctor, (ChunkedInputStream * __this, HttpListenerContext * context, Stream * stream, Byte__Array * buffer, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x002FBB60, MonoChunkStream *, get_Decoder, (ChunkedInputStream * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Decoder, (ChunkedInputStream * __this, MonoChunkStream * value));
IL2CPP_REGISTER_METHOD(0x02016F70, int32_t, Read, (ChunkedInputStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x02016FC0, IAsyncResult *, BeginRead, (ChunkedInputStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * cback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04796B18, ChunkedInputStream_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020174E0, void, OnRead, (ChunkedInputStream * __this, IAsyncResult * base_ares));
IL2CPP_REGISTER_METHODINFO(0x04773750, ChunkedInputStream_OnRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020178F0, int32_t, EndRead, (ChunkedInputStream * __this, IAsyncResult * ares));
IL2CPP_REGISTER_METHODINFO(0x04750898, ChunkedInputStream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02017B20, void, Close, (ChunkedInputStream * __this));
}
