using namespace app;

namespace app::methods::CameraStraightLineMotion {
IL2CPP_REGISTER_METHOD(0x00B1E330, void, add_OnMotionFinishedEvent, (CameraStraightLineMotion * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00B1E420, void, remove_OnMotionFinishedEvent, (CameraStraightLineMotion * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00B1E510, void, Awake, (CameraStraightLineMotion * __this));
IL2CPP_REGISTER_METHOD(0x00B1E5F0, void, UpdateMotion, (CameraStraightLineMotion * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00B1E990, void, MoveToTarget, (CameraStraightLineMotion * __this, Vector3 target, float duration));
IL2CPP_REGISTER_METHOD(0x00B1EA50, void, set_EndPosition, (CameraStraightLineMotion * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00B1EA60, Vector3, get_EndPosition, (CameraStraightLineMotion * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CameraStraightLineMotion * __this));
}
