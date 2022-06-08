#include <interception_macros.h>

namespace app::methods::System::Net::Base64Stream_WriteAsyncResult {
IL2CPP_REGISTER_METHOD(0x020139E0, void, __ctor, (Base64Stream_WriteAsyncResult * __this, Base64Stream * parent, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x02014150, void, Write, (Base64Stream_WriteAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x02014420, void, CompleteWrite, (Base64Stream_WriteAsyncResult * __this, IAsyncResult * result));
IL2CPP_REGISTER_METHOD(0x02014490, void, OnWrite, (IAsyncResult * result));
IL2CPP_REGISTER_METHODINFO(0x0474F0A8, Base64Stream_WriteAsyncResult_OnWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02014620, void, End, (IAsyncResult * result));
IL2CPP_REGISTER_METHOD(0x02014740, void, __cctor, ());
}
