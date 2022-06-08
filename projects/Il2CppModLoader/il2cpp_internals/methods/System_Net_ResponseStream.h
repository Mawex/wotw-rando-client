#include <interception_macros.h>

namespace app::methods::System::Net::ResponseStream {
IL2CPP_REGISTER_METHOD(0x01BCF150, void, __ctor, (ResponseStream * __this, Stream * stream, HttpListenerResponse * response, bool ignore_errors));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanRead, (ResponseStream * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (ResponseStream * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanWrite, (ResponseStream * __this));
IL2CPP_REGISTER_METHOD(0x01BCF210, int64_t, get_Length, (ResponseStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04794B30, ResponseStream_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCF260, int64_t, get_Position, (ResponseStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04791688, ResponseStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCF2B0, void, set_Position, (ResponseStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04769F68, ResponseStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCF300, void, Close, (ResponseStream * __this));
IL2CPP_REGISTER_METHOD(0x01BCF5A0, MemoryStream *, GetHeaders, (ResponseStream * __this, bool closing));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (ResponseStream * __this));
IL2CPP_REGISTER_METHOD(0x01BCF840, Byte__Array *, GetChunkSizeBytes, (int32_t size, bool final_1));
IL2CPP_REGISTER_METHOD(0x01BCF970, void, InternalWrite, (ResponseStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x01BCFA80, void, Write, (ResponseStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0477CA70, ResponseStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCFDF0, IAsyncResult *, BeginWrite, (ResponseStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * cback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0477D8D0, ResponseStream_BeginWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD00B0, void, EndWrite, (ResponseStream * __this, IAsyncResult * ares));
IL2CPP_REGISTER_METHODINFO(0x04778778, ResponseStream_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD0310, int32_t, Read, (ResponseStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04784DF8, ResponseStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD0360, IAsyncResult *, BeginRead, (ResponseStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * cback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0478CB80, ResponseStream_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD03B0, int32_t, EndRead, (ResponseStream * __this, IAsyncResult * ares));
IL2CPP_REGISTER_METHODINFO(0x047187C0, ResponseStream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD0400, int64_t, Seek, (ResponseStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x0471A730, ResponseStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD0450, void, SetLength, (ResponseStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04711C58, ResponseStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD04A0, void, __cctor, ());
}
