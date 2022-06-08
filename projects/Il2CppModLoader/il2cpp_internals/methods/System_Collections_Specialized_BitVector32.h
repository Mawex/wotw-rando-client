#include <interception_macros.h>

namespace app::methods::System::Collections::Specialized::BitVector32 {
IL2CPP_REGISTER_METHOD(0x001EF440, bool, get_Item, (BitVector32__Boxed * __this, int32_t bit));
IL2CPP_REGISTER_METHOD(0x001EF460, void, set_Item, (BitVector32__Boxed * __this, int32_t bit, bool value));
IL2CPP_REGISTER_METHOD(0x024925D0, int32_t, CreateMask, ());
IL2CPP_REGISTER_METHOD(0x02492640, int32_t, CreateMask, (int32_t previous));
IL2CPP_REGISTER_METHODINFO(0x0473F300, BitVector32_CreateMask_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001EF480, bool, Equals, (BitVector32__Boxed * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x001EF550, int32_t, GetHashCode, (BitVector32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02492720, String *, ToString, (BitVector32 value));
IL2CPP_REGISTER_METHOD(0x001EF5F0, String *, ToString, (BitVector32__Boxed * __this));
}
