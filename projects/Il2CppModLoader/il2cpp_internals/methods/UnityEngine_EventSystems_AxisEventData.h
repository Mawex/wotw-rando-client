using namespace app;

namespace app::methods::UnityEngine::EventSystems::AxisEventData {
IL2CPP_REGISTER_METHOD(0x01F19AE0, void, __ctor, (AxisEventData * __this, EventSystem * eventSystem));
IL2CPP_REGISTER_METHOD(0x01F19BB0, Vector2, get_moveVector, (AxisEventData * __this));
IL2CPP_REGISTER_METHOD(0x00E71250, void, set_moveVector, (AxisEventData * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01F19BD0, MoveDirection__Enum, get_moveDir, (AxisEventData * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_moveDir, (AxisEventData * __this, MoveDirection__Enum value));
}
