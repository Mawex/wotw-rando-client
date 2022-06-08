#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509ChainElementCollection {
IL2CPP_REGISTER_METHOD(0x021CDC90, void, __ctor, (X509ChainElementCollection * __this));
IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Count, (X509ChainElementCollection * __this));
IL2CPP_REGISTER_METHOD(0x021CDDE0, bool, get_IsSynchronized, (X509ChainElementCollection * __this));
IL2CPP_REGISTER_METHOD(0x021CDE10, X509ChainElement *, get_Item, (X509ChainElementCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01BCB830, Object *, get_SyncRoot, (X509ChainElementCollection * __this));
IL2CPP_REGISTER_METHOD(0x01FF5420, void, ICollection_CopyTo, (X509ChainElementCollection * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x021CDF10, X509ChainElementEnumerator *, GetEnumerator, (X509ChainElementCollection * __this));
IL2CPP_REGISTER_METHOD(0x021CE060, IEnumerator *, IEnumerable_GetEnumerator, (X509ChainElementCollection * __this));
IL2CPP_REGISTER_METHOD(0x021CE1B0, void, Add, (X509ChainElementCollection * __this, X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x01717420, void, Clear, (X509ChainElementCollection * __this));
IL2CPP_REGISTER_METHOD(0x021CE390, bool, Contains, (X509ChainElementCollection * __this, X509Certificate2 * certificate));
}
