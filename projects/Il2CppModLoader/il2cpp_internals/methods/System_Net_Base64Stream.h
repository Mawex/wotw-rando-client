#include <interception_macros.h>

namespace app::methods::System::Net::Base64Stream {
IL2CPP_REGISTER_METHOD(0x02010F00, void, __ctor, (Base64Stream * __this, Stream * stream, Base64WriteStateInfo * writeStateInfo));
IL2CPP_REGISTER_METHOD(0x02011110, void, __ctor, (Base64Stream * __this, Stream * stream, int32_t lineLength));
IL2CPP_REGISTER_METHOD(0x02011300, void, __ctor, (Base64Stream * __this, Base64WriteStateInfo * writeStateInfo));
IL2CPP_REGISTER_METHOD(0x01706DA0, bool, get_CanWrite, (Base64Stream * __this));
IL2CPP_REGISTER_METHOD(0x020113C0, Base64Stream_ReadStateInfo *, get_ReadState, (Base64Stream * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Base64WriteStateInfo *, get_WriteState, (Base64Stream * __this));
IL2CPP_REGISTER_METHOD(0x02011510, IAsyncResult *, BeginRead, (Base64Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x047156D8, Base64Stream_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02011760, IAsyncResult *, BeginWrite, (Base64Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHODINFO(0x0472D028, Base64Stream_BeginWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020119B0, void, Close, (Base64Stream * __this));
IL2CPP_REGISTER_METHOD(0x02011D60, int32_t, DecodeBytes, (Base64Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04747080, Base64Stream_DecodeBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02012090, int32_t, EncodeBytes, (Base64Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x020120C0, int32_t, EncodeBytes, (Base64Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count, bool dontDeferFinalBytes, bool shouldAppendSpaceToCRLF));
IL2CPP_REGISTER_METHOD(0x004C50A0, Stream *, GetStream, (Base64Stream * __this));
IL2CPP_REGISTER_METHOD(0x02012F90, String *, GetEncodedString, (Base64Stream * __this));
IL2CPP_REGISTER_METHOD(0x02012FF0, int32_t, EndRead, (Base64Stream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x0470B9F8, Base64Stream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02013180, void, EndWrite, (Base64Stream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04742C28, Base64Stream_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02013340, void, Flush, (Base64Stream * __this));
IL2CPP_REGISTER_METHOD(0x02013390, void, FlushInternal, (Base64Stream * __this));
IL2CPP_REGISTER_METHOD(0x020134D0, int32_t, Read, (Base64Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047304A8, Base64Stream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02013740, void, Write, (Base64Stream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0477F918, Base64Stream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02013900, void, __cctor, ());
}
