#include <interception_macros.h>

namespace app::methods::Moon::UberID {
IL2CPP_REGISTER_METHOD(0x01B66E50, void, __ctor, (UberID * __this, String * guid));
IL2CPP_REGISTER_METHOD(0x01B67010, void, __ctor, (UberID * __this, uint16_t b));
IL2CPP_REGISTER_METHOD(0x01B67020, void, __ctor, (UberID * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_IntID, (UberID * __this));
IL2CPP_REGISTER_METHOD(0x01B67060, uint16_t, get_ID, (UberID * __this));
IL2CPP_REGISTER_METHOD(0x01B67070, bool, get_IsInitialized, (UberID * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, int64_t, get_Size, ());
IL2CPP_REGISTER_METHOD(0x01B67080, String *, ToString, (UberID * __this));
IL2CPP_REGISTER_METHOD(0x01B67130, bool, Equals, (UberID * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (UberID * __this));
}
