#pragma once

#include <string>
#include <unordered_map>

namespace modloader::win::detours {
    void start_transaction();
    void do_intercept(std::unordered_map<long long, void*>& intercept_cache, long long cache_index, const std::string& debug, void** original_pointer, void* intercept_pointer);
    void detach(void** original_pointer, void* intercept_pointer);
    void commit(std::string_view what);
}