#pragma once

#include "Il2CppModLoader/interception.h"
#include "Il2CppModLoader/windows_api/memory.h"

using namespace app;

#define IL2CPP_TYPEDEF(a, n) n##__Class** n##__TypeInfo = (n##__Class**)(modloader::win::memory::resolve_rva(a));
namespace app {
#include "il2cpp_typeinfo_registration.h"
}
#undef IL2CPP_TYPEDEF


#define IL2CPP_API_BINDING(r, n, p) r (*n) p = (r (*) p)(modloader::win::memory::resolve_rva(n##_ptr))
#include "il2cpp_api_registration.h"
#undef IL2CPP_API_BINDING
