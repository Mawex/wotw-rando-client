#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::TailStream {
IL2CPP_REGISTER_METHOD(0x01E112F0, void, __ctor, (TailStream * __this, int32_t bufferSize));
IL2CPP_REGISTER_METHOD(0x01E113B0, void, Clear, (TailStream * __this));
IL2CPP_REGISTER_METHOD(0x01E113D0, void, Dispose, (TailStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01E11470, Byte__Array *, get_Buffer, (TailStream * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanRead, (TailStream * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (TailStream * __this));
IL2CPP_REGISTER_METHOD(0x01D60150, bool, get_CanWrite, (TailStream * __this));
IL2CPP_REGISTER_METHOD(0x01E115B0, int64_t, get_Length, (TailStream * __this));
IL2CPP_REGISTER_METHODINFO(0x047859F0, TailStream_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E11620, int64_t, get_Position, (TailStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04712168, TailStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E11690, void, set_Position, (TailStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04756148, TailStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (TailStream * __this));
IL2CPP_REGISTER_METHOD(0x01E11700, int64_t, Seek, (TailStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x04775F88, TailStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E11770, void, SetLength, (TailStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x047888F8, TailStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E117E0, int32_t, Read, (TailStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04738D20, TailStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E11850, void, Write, (TailStream * __this, Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047174E0, TailStream_Write__MethodInfo);
}
