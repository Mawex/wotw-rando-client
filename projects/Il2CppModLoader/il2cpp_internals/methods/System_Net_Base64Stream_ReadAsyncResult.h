using namespace app;

namespace app::methods::System::Net::Base64Stream_ReadAsyncResult {
IL2CPP_REGISTER_METHOD(0x020139E0, void, __ctor, (Base64Stream_ReadAsyncResult * __this, Base64Stream * parent, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x02013A50, bool, CompleteRead, (Base64Stream_ReadAsyncResult * __this, IAsyncResult * result));
IL2CPP_REGISTER_METHOD(0x02013AE0, void, Read, (Base64Stream_ReadAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x02013D80, void, OnRead, (IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x04750648, Base64Stream_ReadAsyncResult_OnRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02013F10, int32_t, End, (IAsyncResult * result));
IL2CPP_REGISTER_METHOD(0x02013FF0, void, __cctor, (MethodInfo * method));
}
