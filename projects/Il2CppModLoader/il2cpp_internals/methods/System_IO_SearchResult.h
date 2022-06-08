#include <interception_macros.h>

namespace app::methods::System::IO::SearchResult {
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor, (SearchResult * __this, String * fullPath, String * userPath, Win32Native_WIN32_FIND_DATA * findData));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_UserPath, (SearchResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Win32Native_WIN32_FIND_DATA *, get_FindData, (SearchResult * __this));
}
