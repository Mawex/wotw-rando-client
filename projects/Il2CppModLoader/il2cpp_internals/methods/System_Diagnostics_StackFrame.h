#include <interception_macros.h>

namespace app::methods::System::Diagnostics::StackFrame {
IL2CPP_REGISTER_METHOD(0x017412D0, bool, get_frame_info, (int32_t skip, bool needFileInfo, MethodBase * * method_1, int32_t * iloffset, int32_t * native_offset, String * * file, int32_t * line, int32_t * column));
IL2CPP_REGISTER_METHOD(0x017412E0, void, __ctor, (StackFrame * __this));
IL2CPP_REGISTER_METHOD(0x01741330, void, __ctor, (StackFrame * __this, int32_t skipFrames));
IL2CPP_REGISTER_METHOD(0x01741380, void, __ctor, (StackFrame * __this, int32_t skipFrames, bool fNeedFileInfo));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, GetFileLineNumber, (StackFrame * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, GetFileName, (StackFrame * __this));
IL2CPP_REGISTER_METHOD(0x017413E0, String *, GetSecureFileName, (StackFrame * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetILOffset, (StackFrame * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, MethodBase *, GetMethod, (StackFrame * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, GetNativeOffset, (StackFrame * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, int64_t, GetMethodAddress, (StackFrame * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, uint32_t, GetMethodIndex, (StackFrame * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, GetInternalMethodName, (StackFrame * __this));
IL2CPP_REGISTER_METHOD(0x017414A0, String *, ToString, (StackFrame * __this));
}
