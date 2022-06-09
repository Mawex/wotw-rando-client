#include <interception_macros.h>

namespace app::methods::System_IO::FileSystemInfo {
IL2CPP_REGISTER_METHOD(0x0236F7E0, void, __ctor_1, (app::FileSystemInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0236F880, void, __ctor_2, (app::FileSystemInfo * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04782A78, FileSystemInfo__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_FullName, (app::FileSystemInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0236F9B0, String *, get_Extension, (app::FileSystemInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0236FB60, DateTime, get_LastWriteTime, (app::FileSystemInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0236FC50, DateTime, get_LastWriteTimeUtc, (app::FileSystemInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0236FD30, void, Refresh, (app::FileSystemInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0236FE30, void, GetObjectData, (app::FileSystemInfo * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_DisplayPath, (app::FileSystemInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_DisplayPath, (app::FileSystemInfo * this_ptr, app::String * value));
}
