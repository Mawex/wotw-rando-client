#pragma once

#define IL2CPP_TYPEDEF(a, n) extern n##__Class** n##__TypeInfo;

namespace app {
#include "il2cpp_typeinfo_registration.h"
}

#undef IL2CPP_TYPEDEF