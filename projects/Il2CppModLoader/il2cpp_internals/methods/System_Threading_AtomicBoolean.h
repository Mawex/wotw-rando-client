#include <interception_macros.h>

namespace app::methods::System::Threading::AtomicBoolean {
IL2CPP_REGISTER_METHOD(0x027D82B0, bool, TryRelaxedSet, (AtomicBoolean * __this));
IL2CPP_REGISTER_METHOD(0x027D82D0, bool, Exchange, (AtomicBoolean * __this, bool newVal));
IL2CPP_REGISTER_METHOD(0x027D82E0, bool, Equals, (AtomicBoolean * __this, AtomicBoolean * rhs));
IL2CPP_REGISTER_METHOD(0x027D8300, bool, Equals, (AtomicBoolean * __this, Object * rhs));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (AtomicBoolean * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AtomicBoolean * __this));
}
