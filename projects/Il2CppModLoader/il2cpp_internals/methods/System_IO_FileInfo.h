using namespace app;

namespace app::methods::System::IO::FileInfo {
IL2CPP_REGISTER_METHOD(0x01E085A0, void, __ctor, (FileInfo * __this, String * fileName));
IL2CPP_REGISTER_METHODINFO(0x0475DC90, FileInfo__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E08710, void, Init, (FileInfo * __this, String * fileName, bool checkHost));
IL2CPP_REGISTER_METHOD(0x00502220, String *, GetDisplayPath, (FileInfo * __this, String * originalPath));
IL2CPP_REGISTER_METHOD(0x01E087E0, void, __ctor, (FileInfo * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FBB80, String *, get_Name, (FileInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E088C0, int64_t, get_Length, (FileInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E08940, String *, get_DirectoryName, (FileInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E089E0, DirectoryInfo *, get_Directory, (FileInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E08BD0, bool, get_Exists, (FileInfo * __this));
IL2CPP_REGISTER_METHOD(0x01E08C80, FileStream *, OpenRead, (FileInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, ToString, (FileInfo * __this));
}
