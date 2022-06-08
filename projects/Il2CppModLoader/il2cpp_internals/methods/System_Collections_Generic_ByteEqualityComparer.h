#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ByteEqualityComparer {
IL2CPP_REGISTER_METHOD(0x02021DC0, bool, Equals, (ByteEqualityComparer * __this, uint8_t x, uint8_t y));
IL2CPP_REGISTER_METHOD(0x0052E040, int32_t, GetHashCode, (ByteEqualityComparer * __this, uint8_t b));
IL2CPP_REGISTER_METHOD(0x02021DD0, int32_t, IndexOf, (ByteEqualityComparer * __this, Byte__Array * array, uint8_t value, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047452D8, ByteEqualityComparer_IndexOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02022050, int32_t, LastIndexOf, (ByteEqualityComparer * __this, Byte__Array * array, uint8_t value, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x020220B0, bool, Equals, (ByteEqualityComparer * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02022170, int32_t, GetHashCode, (ByteEqualityComparer * __this));
IL2CPP_REGISTER_METHOD(0x020221D0, void, __ctor, (ByteEqualityComparer * __this));
}
