#include <interception_macros.h>

namespace app::methods::Moon::Point {
IL2CPP_REGISTER_METHOD(0x00C3DB40, Vector3, GetPosition, (Point_1 * __this, PrimitiveSpace__Enum targetSpace, Transform * localToworld, Transform * root));
IL2CPP_REGISTER_METHOD(0x00C3DBB0, void, SetPosition, (Point_1 * __this, Vector3 position, PrimitiveSpace__Enum sourceSpace, Transform * localToworld, Transform * root));
IL2CPP_REGISTER_METHOD(0x00C3DC10, void, SetSpace, (Point_1 * __this, PrimitiveSpace__Enum targetSpace, Transform * localToworld, Transform * root));
IL2CPP_REGISTER_METHOD(0x00C3DC80, void, __ctor, (Point_1 * __this));
}
