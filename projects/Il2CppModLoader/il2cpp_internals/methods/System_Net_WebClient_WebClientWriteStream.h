using namespace app;

namespace app::methods::System::Net::WebClient_WebClientWriteStream {
IL2CPP_REGISTER_METHOD(0x01D611E0, void, __ctor, (WebClient_WebClientWriteStream * __this, Stream * stream, WebRequest * request, WebClient * webClient));
IL2CPP_REGISTER_METHOD(0x01D612A0, bool, get_CanRead, (WebClient_WebClientWriteStream * __this));
IL2CPP_REGISTER_METHOD(0x01D612D0, bool, get_CanSeek, (WebClient_WebClientWriteStream * __this));
IL2CPP_REGISTER_METHOD(0x01D61300, bool, get_CanWrite, (WebClient_WebClientWriteStream * __this));
IL2CPP_REGISTER_METHOD(0x01D61330, bool, get_CanTimeout, (WebClient_WebClientWriteStream * __this));
IL2CPP_REGISTER_METHOD(0x01D61360, int32_t, get_ReadTimeout, (WebClient_WebClientWriteStream * __this));
IL2CPP_REGISTER_METHOD(0x01D61390, void, set_ReadTimeout, (WebClient_WebClientWriteStream * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01D613C0, int32_t, get_WriteTimeout, (WebClient_WebClientWriteStream * __this));
IL2CPP_REGISTER_METHOD(0x01D613F0, void, set_WriteTimeout, (WebClient_WebClientWriteStream * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01D61420, int64_t, get_Length, (WebClient_WebClientWriteStream * __this));
IL2CPP_REGISTER_METHOD(0x01D61450, int64_t, get_Position, (WebClient_WebClientWriteStream * __this));
IL2CPP_REGISTER_METHOD(0x01D61480, void, set_Position, (WebClient_WebClientWriteStream * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01D614B0, IAsyncResult *, BeginRead, (WebClient_WebClientWriteStream * __this, Byte__Array * buffer, int32_t offset, int32_t size, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x01D614E0, IAsyncResult *, BeginWrite, (WebClient_WebClientWriteStream * __this, Byte__Array * buffer, int32_t offset, int32_t size, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x01D61510, void, Dispose, (WebClient_WebClientWriteStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01D61600, int32_t, EndRead, (WebClient_WebClientWriteStream * __this, IAsyncResult * result));
IL2CPP_REGISTER_METHOD(0x01D61630, void, EndWrite, (WebClient_WebClientWriteStream * __this, IAsyncResult * result));
IL2CPP_REGISTER_METHOD(0x01D61660, void, Flush, (WebClient_WebClientWriteStream * __this));
IL2CPP_REGISTER_METHOD(0x01D61690, int32_t, Read, (WebClient_WebClientWriteStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x01D616C0, int64_t, Seek, (WebClient_WebClientWriteStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHOD(0x01D616F0, void, SetLength, (WebClient_WebClientWriteStream * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01D61720, void, Write, (WebClient_WebClientWriteStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
}
