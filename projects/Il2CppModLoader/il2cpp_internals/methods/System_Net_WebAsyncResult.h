using namespace app;

namespace app::methods::System::Net::WebAsyncResult {
IL2CPP_REGISTER_METHOD(0x020AD7F0, void, __ctor, (WebAsyncResult * __this, AsyncCallback * cb, Object * state));
IL2CPP_REGISTER_METHOD(0x020AD800, void, __ctor, (WebAsyncResult * __this, HttpWebRequest * request, AsyncCallback * cb, Object * state));
IL2CPP_REGISTER_METHOD(0x020AD840, void, __ctor, (WebAsyncResult * __this, AsyncCallback * cb, Object * state, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x020AD880, void, Reset, (WebAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x020AD8A0, void, SetCompleted, (WebAsyncResult * __this, bool synch, int32_t nbytes));
IL2CPP_REGISTER_METHOD(0x020AD8B0, void, SetCompleted, (WebAsyncResult * __this, bool synch, Stream * writeStream));
IL2CPP_REGISTER_METHOD(0x020AD8C0, void, SetCompleted, (WebAsyncResult * __this, bool synch, HttpWebResponse * response));
IL2CPP_REGISTER_METHOD(0x01BDAFF0, void, DoCallback, (WebAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_NBytes, (WebAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_NBytes, (WebAsyncResult * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FBB60, IAsyncResult *, get_InnerAsyncResult, (WebAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_InnerAsyncResult, (WebAsyncResult * __this, IAsyncResult * value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, Stream *, get_WriteStream, (WebAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, HttpWebResponse *, get_Response, (WebAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Byte__Array *, get_Buffer, (WebAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_Offset, (WebAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x006DC050, int32_t, get_Size, (WebAsyncResult * __this));
}
