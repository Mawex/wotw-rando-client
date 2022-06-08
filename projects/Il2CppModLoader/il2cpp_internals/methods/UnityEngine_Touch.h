#include <interception_macros.h>

namespace app::methods::UnityEngine::Touch {
IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_fingerId, (Touch__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002292E0, Vector2, get_position, (Touch__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00229300, TouchPhase__Enum, get_phase, (Touch__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9B00, TouchType__Enum, get_type, (Touch__Boxed * __this));
}
