using namespace app;

namespace app::methods::System::IO::DirectoryInfo {
IL2CPP_REGISTER_METHOD(0x01E03AC0, void, __ctor, (DirectoryInfo * __this, String * path));
IL2CPP_REGISTER_METHOD(0x01E03AD0, void, __ctor, (DirectoryInfo * __this, String * path, bool simpleOriginalPath));
IL2CPP_REGISTER_METHOD(0x01E03C70, void, __ctor, (DirectoryInfo * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01E03CA0, void, Initialize, (DirectoryInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E03F50, bool, get_Exists, (DirectoryInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, String *, get_Name, (DirectoryInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E03F90, DirectoryInfo *, get_Parent, (DirectoryInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E04110, void, Create, (DirectoryInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E04120, FileInfo__Array *, GetFiles, (DirectoryInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E041B0, FileInfo__Array *, GetFiles, (DirectoryInfo * __this, String * searchPattern));
IL2CPP_REGISTER_METHODINFO(0x04798E58, DirectoryInfo_GetFiles_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E044C0, DirectoryInfo__Array *, GetDirectories, (DirectoryInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E04550, DirectoryInfo__Array *, GetDirectories, (DirectoryInfo * __this, String * searchPattern));
IL2CPP_REGISTER_METHODINFO(0x04786D28, DirectoryInfo_GetDirectories_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, ToString, (DirectoryInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E04920, int32_t, GetFilesSubdirs, (DirectoryInfo * __this, ArrayList * l, String * pattern));
IL2CPP_REGISTER_METHOD(0x01E04A70, FileInfo__Array *, GetFiles, (DirectoryInfo * __this, String * searchPattern, SearchOption__Enum searchOption));
IL2CPP_REGISTER_METHODINFO(0x04742F68, DirectoryInfo_GetFiles_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E04EB0, void, CheckPath, (DirectoryInfo * __this, String * path));
IL2CPP_REGISTER_METHODINFO(0x04704FA8, DirectoryInfo_CheckPath__MethodInfo);
}
