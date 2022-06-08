#include <interception_macros.h>

namespace app::methods::System::IO::FileSystemWatcher {
IL2CPP_REGISTER_METHOD(0x0200A8A0, ISite *, get_Site, (FileSystemWatcher * __this));
IL2CPP_REGISTER_METHODINFO(0x04751100, FileSystemWatcher_get_Site__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Site, (FileSystemWatcher * __this, ISite * value));
IL2CPP_REGISTER_METHOD(0x0200A8F0, void, BeginInit, (FileSystemWatcher * __this));
IL2CPP_REGISTER_METHODINFO(0x04723D98, FileSystemWatcher_BeginInit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200A940, void, EndInit, (FileSystemWatcher * __this));
IL2CPP_REGISTER_METHODINFO(0x0471F4C8, FileSystemWatcher_EndInit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0200A990, void, Dispose, (FileSystemWatcher * __this, bool disposing));
IL2CPP_REGISTER_METHODINFO(0x04732830, FileSystemWatcher_Dispose__MethodInfo);
}
