#include <interception_macros.h>

namespace app::methods::System::IO::FileSystemEnumerableIterator_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x0297E2F0, void, __ctor, (FileSystemEnumerableIterator_1_System_Object_ * __this, String * path, String * originalUserPath, String * searchPattern, SearchOption__Enum searchOption, SearchResultHandler_1_System_Object_ * resultHandler, bool checkHost));
IL2CPP_REGISTER_METHOD(0x0297E780, void, CommonInit, (FileSystemEnumerableIterator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0297EBD0, void, __ctor, (FileSystemEnumerableIterator_1_System_Object_ * __this, String * fullPath, String * normalizedSearchPath, String * searchCriteria, String * userPath, SearchOption__Enum searchOption, SearchResultHandler_1_System_Object_ * resultHandler, bool checkHost));
IL2CPP_REGISTER_METHOD(0x0297EF80, Iterator_1_System_Object_ *, Clone, (FileSystemEnumerableIterator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0297F0F0, void, Dispose, (FileSystemEnumerableIterator_1_System_Object_ * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x0297F1D0, bool, MoveNext, (FileSystemEnumerableIterator_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0297F890, SearchResult *, CreateSearchResult, (FileSystemEnumerableIterator_1_System_Object_ * __this, Directory_SearchData * localSearchData, Win32Native_WIN32_FIND_DATA * findData));
IL2CPP_REGISTER_METHOD(0x0297FA50, void, HandleError, (FileSystemEnumerableIterator_1_System_Object_ * __this, int32_t hr, String * path));
IL2CPP_REGISTER_METHOD(0x0297FAA0, void, AddSearchableDirsToStack, (FileSystemEnumerableIterator_1_System_Object_ * __this, Directory_SearchData * localSearchData));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DoDemand, (FileSystemEnumerableIterator_1_System_Object_ * __this, String * fullPathToDemand));
IL2CPP_REGISTER_METHOD(0x02980030, String *, NormalizeSearchPattern, (String * searchPattern));
IL2CPP_REGISTER_METHOD(0x029801D0, String *, GetNormalizedSearchCriteria, (String * fullSearchString, String * fullPathMod));
IL2CPP_REGISTER_METHOD(0x029802D0, String *, GetFullSearchString, (String * fullPath, String * searchPattern));
}
