#include <interception_macros.h>

namespace app::methods::System_Diagnostics::StackFrame {
IL2CPP_REGISTER_METHOD(0x017412D0, bool, get_frame_info, (int32_t skip, bool need_file_info, app::MethodBase * * method_1, app::int32_t * iloffset, app::int32_t * native_offset, app::String * * file, app::int32_t * line, app::int32_t * column));
IL2CPP_REGISTER_METHOD(0x017412E0, void, __ctor_1, (app::StackFrame * this_ptr));
IL2CPP_REGISTER_METHOD(0x01741330, void, __ctor_2, (app::StackFrame * this_ptr, int32_t skip_frames));
IL2CPP_REGISTER_METHOD(0x01741380, void, __ctor_3, (app::StackFrame * this_ptr, int32_t skip_frames, bool f_need_file_info));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, GetFileLineNumber, (app::StackFrame * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, GetFileName, (app::StackFrame * this_ptr));
IL2CPP_REGISTER_METHOD(0x017413E0, String *, GetSecureFileName, (app::StackFrame * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetILOffset, (app::StackFrame * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, MethodBase *, GetMethod, (app::StackFrame * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, GetNativeOffset, (app::StackFrame * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, int64_t, GetMethodAddress, (app::StackFrame * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FD1D0, uint32_t, GetMethodIndex, (app::StackFrame * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, GetInternalMethodName, (app::StackFrame * this_ptr));
IL2CPP_REGISTER_METHOD(0x017414A0, String *, ToString, (app::StackFrame * this_ptr));
}
