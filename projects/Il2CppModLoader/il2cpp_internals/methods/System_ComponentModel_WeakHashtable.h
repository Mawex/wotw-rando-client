#include <interception_macros.h>

namespace app::methods::System::ComponentModel::WeakHashtable {
IL2CPP_REGISTER_METHOD(0x0295DF70, void, __ctor, (WeakHashtable * __this));
IL2CPP_REGISTER_METHOD(0x0295E040, void, Clear, (WeakHashtable * __this));
IL2CPP_REGISTER_METHOD(0x0295E050, void, Remove, (WeakHashtable * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x0295E060, void, SetWeak, (WeakHashtable * __this, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x0295E210, void, ScavengeKeys, (WeakHashtable * __this));
IL2CPP_REGISTER_METHOD(0x0295E6C0, void, __cctor, ());
}
