namespace {
#define IL2CPP_API_BINDING(r, n, p) extern r (*n) p
#define IL2CPP_API_BINDING_NO_RETURN(r, n, p) IL2CPP_API_BINDING(r,n,p)

#include "il2cpp_api_registration.h"

#undef IL2CPP_API_BINDING
#undef IL2CPP_API_BINDING_NO_RETURN
}