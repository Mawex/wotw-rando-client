#include <interception_macros.h>

namespace app::methods::System::LocalDataStoreElement {
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (LocalDataStoreElement * __this, int64_t cookie));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_Value, (LocalDataStoreElement * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Value, (LocalDataStoreElement * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x002FB930, int64_t, get_Cookie, (LocalDataStoreElement * __this));
}
