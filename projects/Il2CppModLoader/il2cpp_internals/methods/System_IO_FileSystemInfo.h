#include <interception_macros.h>

namespace app::methods::System::IO::FileSystemInfo {
IL2CPP_REGISTER_METHOD(0x0236F7E0, void, __ctor, (FileSystemInfo * __this));
IL2CPP_REGISTER_METHOD(0x0236F880, void, __ctor, (FileSystemInfo * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04782A78, FileSystemInfo__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_FullName, (FileSystemInfo * __this));
IL2CPP_REGISTER_METHOD(0x0236F9B0, String *, get_Extension, (FileSystemInfo * __this));
IL2CPP_REGISTER_METHOD(0x0236FB60, DateTime, get_LastWriteTime, (FileSystemInfo * __this));
IL2CPP_REGISTER_METHOD(0x0236FC50, DateTime, get_LastWriteTimeUtc, (FileSystemInfo * __this));
IL2CPP_REGISTER_METHOD(0x0236FD30, void, Refresh, (FileSystemInfo * __this));
IL2CPP_REGISTER_METHOD(0x0236FE30, void, GetObjectData, (FileSystemInfo * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_DisplayPath, (FileSystemInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_DisplayPath, (FileSystemInfo * __this, String * value));
}
