#include <interception_macros.h>

namespace app::methods::System_IO::FileSystemEnumerableIterator_1_System_Object_ {
IL2CPP_REGISTER_METHOD(0x0297E2F0, void, __ctor_1, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, app::String * path, app::String * original_user_path, app::String * search_pattern, app::SearchOption__Enum search_option, app::SearchResultHandler_1_System_Object_ * result_handler, bool check_host));
IL2CPP_REGISTER_METHOD(0x0297E780, void, CommonInit, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0297EBD0, void, __ctor_2, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, app::String * full_path, app::String * normalized_search_path, app::String * search_criteria, app::String * user_path, app::SearchOption__Enum search_option, app::SearchResultHandler_1_System_Object_ * result_handler, bool check_host));
IL2CPP_REGISTER_METHOD(0x0297EF80, Iterator_1_System_Object_ *, Clone, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0297F0F0, void, Dispose, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x0297F1D0, bool, MoveNext, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x0297F890, SearchResult *, CreateSearchResult, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, app::Directory_SearchData * local_search_data, app::Win32Native_WIN32_FIND_DATA * find_data));
IL2CPP_REGISTER_METHOD(0x0297FA50, void, HandleError, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, int32_t hr, app::String * path));
IL2CPP_REGISTER_METHOD(0x0297FAA0, void, AddSearchableDirsToStack, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, app::Directory_SearchData * local_search_data));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DoDemand, (app::FileSystemEnumerableIterator_1_System_Object_ * this_ptr, app::String * full_path_to_demand));
IL2CPP_REGISTER_METHOD(0x02980030, String *, NormalizeSearchPattern, (app::String * search_pattern));
IL2CPP_REGISTER_METHOD(0x029801D0, String *, GetNormalizedSearchCriteria, (app::String * full_search_string, app::String * full_path_mod));
IL2CPP_REGISTER_METHOD(0x029802D0, String *, GetFullSearchString, (app::String * full_path, app::String * search_pattern));
}
