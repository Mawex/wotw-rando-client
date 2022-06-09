#include <interception_macros.h>

namespace app::methods::System_IO::SearchResult {
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor, (app::SearchResult * this_ptr, app::String * full_path, app::String * user_path, app::Win32Native_WIN32_FIND_DATA * find_data));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_UserPath, (app::SearchResult * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, Win32Native_WIN32_FIND_DATA *, get_FindData, (app::SearchResult * this_ptr));
}
