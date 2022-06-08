using namespace app;

namespace app::methods::System::Net::RequestStream {
IL2CPP_REGISTER_METHOD(0x01BCE410, void, __ctor, (RequestStream * __this, Stream * stream, Byte__Array * buffer, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x01BCE440, void, __ctor, (RequestStream * __this, Stream * stream, Byte__Array * buffer, int32_t offset, int32_t length, int64_t contentlength));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanRead, (RequestStream * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (RequestStream * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanWrite, (RequestStream * __this));
IL2CPP_REGISTER_METHOD(0x01BCE510, int64_t, get_Length, (RequestStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04719E50, RequestStream_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCE560, int64_t, get_Position, (RequestStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0478D6C0, RequestStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCE5B0, void, set_Position, (RequestStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04723788, RequestStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01132D30, void, Close, (RequestStream * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (RequestStream * __this));
IL2CPP_REGISTER_METHOD(0x01BCE600, int32_t, FillFromBuffer, (RequestStream * __this, Byte__Array * buffer, int32_t off, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04718220, RequestStream_FillFromBuffer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCE8F0, int32_t, Read, (RequestStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0478AAC8, RequestStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCEA80, IAsyncResult *, BeginRead, (RequestStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * cback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x047733D8, RequestStream_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCED70, int32_t, EndRead, (RequestStream * __this, IAsyncResult * ares));
IL2CPP_REGISTER_METHODINFO(0x0471DA18, RequestStream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCEFC0, int64_t, Seek, (RequestStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x04759E50, RequestStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCF010, void, SetLength, (RequestStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04731190, RequestStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCF060, void, Write, (RequestStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04782368, RequestStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCF0B0, IAsyncResult *, BeginWrite, (RequestStream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * cback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0476F430, RequestStream_BeginWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCF100, void, EndWrite, (RequestStream * __this, IAsyncResult * async_result));
IL2CPP_REGISTER_METHODINFO(0x047142E8, RequestStream_EndWrite__MethodInfo);
}
