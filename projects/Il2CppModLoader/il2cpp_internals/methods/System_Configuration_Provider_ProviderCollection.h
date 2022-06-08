#include <interception_macros.h>

namespace app::methods::System::Configuration::Provider::ProviderCollection {
IL2CPP_REGISTER_METHOD(0x031BC020, int32_t, get_Count, (ProviderCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F520, ProviderCollection_get_Count__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BC050, bool, get_IsSynchronized, (ProviderCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04746E40, ProviderCollection_get_IsSynchronized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BC080, Object *, get_SyncRoot, (ProviderCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04796B08, ProviderCollection_get_SyncRoot__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BC0B0, void, Add, (ProviderCollection * __this, ProviderBase * provider));
IL2CPP_REGISTER_METHODINFO(0x0470DFD0, ProviderCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BC0E0, IEnumerator *, GetEnumerator, (ProviderCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04791868, ProviderCollection_GetEnumerator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031BC110, void, ICollection_CopyTo, (ProviderCollection * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04775598, ProviderCollection_System_Collections_ICollection_CopyTo__MethodInfo);
}
