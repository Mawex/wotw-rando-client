#include <interception_macros.h>

namespace app::methods::System::IO::Directory {
IL2CPP_REGISTER_METHOD(0x01E01E10, String__Array *, GetFiles, (String * path));
IL2CPP_REGISTER_METHODINFO(0x0477F5B8, Directory_GetFiles__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E01EF0, String__Array *, GetFiles, (String * path, String * searchPattern));
IL2CPP_REGISTER_METHODINFO(0x04718D80, Directory_GetFiles_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E02010, String__Array *, GetFiles, (String * path, String * searchPattern, SearchOption__Enum searchOption));
IL2CPP_REGISTER_METHODINFO(0x0474E580, Directory_GetFiles_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E02190, String__Array *, InternalGetFiles, (String * path, String * searchPattern, SearchOption__Enum searchOption));
IL2CPP_REGISTER_METHOD(0x01E021C0, String__Array *, GetDirectories, (String * path));
IL2CPP_REGISTER_METHODINFO(0x04730508, Directory_GetDirectories__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E022A0, String__Array *, GetDirectories, (String * path, String * searchPattern));
IL2CPP_REGISTER_METHODINFO(0x04771FB0, Directory_GetDirectories_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E023C0, String__Array *, InternalGetDirectories, (String * path, String * searchPattern, SearchOption__Enum searchOption));
IL2CPP_REGISTER_METHOD(0x01E023F0, String__Array *, InternalGetFileDirectoryNames, (String * path, String * userPathOriginal, String * searchPattern, bool includeFiles, bool includeDirs, SearchOption__Enum searchOption, bool checkHost));
IL2CPP_REGISTER_METHOD(0x01E025B0, DirectoryInfo *, CreateDirectory, (String * path));
IL2CPP_REGISTER_METHODINFO(0x047104F8, Directory_CreateDirectory__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E02840, DirectoryInfo *, CreateDirectoriesInternal, (String * path));
IL2CPP_REGISTER_METHODINFO(0x0470B820, Directory_CreateDirectoriesInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E02B80, void, Delete, (String * path));
IL2CPP_REGISTER_METHODINFO(0x047960E8, Directory_Delete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E02EC0, void, RecursiveDelete, (String * path));
IL2CPP_REGISTER_METHOD(0x01E03070, void, Delete, (String * path, bool recursive));
IL2CPP_REGISTER_METHOD(0x01E03140, bool, Exists, (String * path));
IL2CPP_REGISTER_METHOD(0x01A18980, String *, GetCurrentDirectory, ());
IL2CPP_REGISTER_METHOD(0x01E032C0, String *, InsecureGetCurrentDirectory, ());
IL2CPP_REGISTER_METHODINFO(0x0470FC30, Directory_InsecureGetCurrentDirectory__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E03420, bool, IsRootDirectory, (String * path));
IL2CPP_REGISTER_METHOD(0x01E03560, DirectoryInfo *, GetParent, (String * path));
IL2CPP_REGISTER_METHOD(0x01E03850, String *, GetDemandDir, (String * fullPath, bool thisDirOnly));
}
