#include <interception_macros.h>

namespace app::methods::System::IO::StreamWriter {
IL2CPP_REGISTER_METHOD(0x02382180, void, CheckAsyncTaskInProgress, (StreamWriter * __this));
IL2CPP_REGISTER_METHODINFO(0x0470CDD0, StreamWriter_CheckAsyncTaskInProgress__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02382260, Encoding *, get_UTF8NoBOM, ());
IL2CPP_REGISTER_METHOD(0x02382460, void, __ctor, (StreamWriter * __this));
IL2CPP_REGISTER_METHOD(0x02382500, void, __ctor, (StreamWriter * __this, Stream * stream));
IL2CPP_REGISTER_METHOD(0x023825D0, void, __ctor, (StreamWriter * __this, Stream * stream, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x02382600, void, __ctor, (StreamWriter * __this, Stream * stream, Encoding * encoding, int32_t bufferSize));
IL2CPP_REGISTER_METHOD(0x02382620, void, __ctor, (StreamWriter * __this, Stream * stream, Encoding * encoding, int32_t bufferSize, bool leaveOpen));
IL2CPP_REGISTER_METHODINFO(0x0477C930, StreamWriter__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02382810, void, __ctor, (StreamWriter * __this, String * path));
IL2CPP_REGISTER_METHOD(0x023828E0, void, __ctor, (StreamWriter * __this, String * path, bool append));
IL2CPP_REGISTER_METHOD(0x023829C0, void, __ctor, (StreamWriter * __this, String * path, bool append, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x023829F0, void, __ctor, (StreamWriter * __this, String * path, bool append, Encoding * encoding, int32_t bufferSize));
IL2CPP_REGISTER_METHOD(0x02382A20, void, __ctor, (StreamWriter * __this, String * path, bool append, Encoding * encoding, int32_t bufferSize, bool checkHost));
IL2CPP_REGISTER_METHODINFO(0x0471A460, StreamWriter__ctor_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02382C60, void, Init, (StreamWriter * __this, Stream * streamArg, Encoding * encodingArg, int32_t bufferSize, bool shouldLeaveOpen));
IL2CPP_REGISTER_METHOD(0x02382DD0, Stream *, CreateFile, (String * path, bool append, bool checkHost));
IL2CPP_REGISTER_METHOD(0x02382F90, void, Close, (StreamWriter * __this));
IL2CPP_REGISTER_METHOD(0x02383040, void, Dispose, (StreamWriter * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x023831B0, void, Flush, (StreamWriter * __this));
IL2CPP_REGISTER_METHOD(0x023831E0, void, Flush, (StreamWriter * __this, bool flushStream, bool flushEncoder));
IL2CPP_REGISTER_METHOD(0x023833F0, void, set_AutoFlush, (StreamWriter * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBB00, Stream *, get_BaseStream, (StreamWriter * __this));
IL2CPP_REGISTER_METHOD(0x02383430, bool, get_LeaveOpen, (StreamWriter * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Encoding *, get_Encoding, (StreamWriter * __this));
IL2CPP_REGISTER_METHOD(0x02383440, void, Write, (StreamWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x023834D0, void, Write, (StreamWriter * __this, Char__Array * buffer));
IL2CPP_REGISTER_METHOD(0x023835A0, void, Write, (StreamWriter * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04742720, StreamWriter_Write_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023837F0, void, Write, (StreamWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x023838C0, void, __cctor, ());
}
