#include <interception_macros.h>

namespace app::methods::System::LocalDataStoreHolder {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (LocalDataStoreHolder * __this, LocalDataStore * store));
IL2CPP_REGISTER_METHOD(0x02266BE0, void, Finalize, (LocalDataStoreHolder * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, LocalDataStore *, get_Store, (LocalDataStoreHolder * __this));
}
