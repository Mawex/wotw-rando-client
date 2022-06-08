#include <interception_macros.h>

namespace app::methods::PlayerStayInsideZoneTrigger {
IL2CPP_REGISTER_METHOD(0x00886330, Rect, get_Bounds, (PlayerStayInsideZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0142DFA0, bool, get_IsInside, (PlayerStayInsideZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0142E110, bool, WillBeInside, (PlayerStayInsideZoneTrigger * __this, float predictionTime));
IL2CPP_REGISTER_METHOD(0x0142E340, bool, IsPositionInside, (PlayerStayInsideZoneTrigger * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0142E390, void, FixedUpdate, (PlayerStayInsideZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0142E610, void, Awake, (PlayerStayInsideZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0142E7E0, Vector3, GetSize, (PlayerStayInsideZoneTrigger * __this));
IL2CPP_REGISTER_METHOD(0x0142EA60, void, __ctor, (PlayerStayInsideZoneTrigger * __this));
}
