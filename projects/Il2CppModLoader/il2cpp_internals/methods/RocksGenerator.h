#include <interception_macros.h>

namespace app::methods::RocksGenerator {
IL2CPP_REGISTER_METHOD(0x0135A190, void, Awake, (RocksGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0135A240, void, OnDestroy, (RocksGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0135A2E0, void, FixedUpdate, (RocksGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0135AEA0, void, UpdateMaterial, (RocksGenerator * __this, GameObject * generateObject));
IL2CPP_REGISTER_METHOD(0x0135B230, void, OnDrawGizmos, (RocksGenerator * __this));
IL2CPP_REGISTER_METHOD(0x005065D0, bool, get_IsSuspended, (RocksGenerator * __this));
IL2CPP_REGISTER_METHOD(0x005065E0, void, set_IsSuspended, (RocksGenerator * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC380, SuspendableMask__Enum, get_Mask, (RocksGenerator * __this));
IL2CPP_REGISTER_METHOD(0x0135B330, void, set_Mask, (RocksGenerator * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0135B3F0, void, __ctor, (RocksGenerator * __this));
}
