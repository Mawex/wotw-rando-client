#include <interception_macros.h>

namespace app::methods::System::IO::StringResultHandler {
IL2CPP_REGISTER_METHOD(0x02384010, void, __ctor, (StringResultHandler * __this, bool includeFiles, bool includeDirs));
IL2CPP_REGISTER_METHOD(0x023840B0, bool, IsResultIncluded, (StringResultHandler * __this, SearchResult * result));
IL2CPP_REGISTER_METHOD(0x00AD4920, String *, CreateObject, (StringResultHandler * __this, SearchResult * result));
}
