#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::CharacterThirdPerson {
IL2CPP_REGISTER_METHOD(0x02212520, bool, get_onGround, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x01293D20, void, set_onGround, (CharacterThirdPerson * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02212530, void, Start, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x02212740, void, OnAnimatorMove, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x02212870, void, Move, (CharacterThirdPerson * __this, Vector3 deltaPosition, Quaternion deltaRotation));
IL2CPP_REGISTER_METHOD(0x02212B00, void, FixedUpdate, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x022134D0, void, Update, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x02213660, void, LateUpdate, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x02213830, void, MoveFixed, (CharacterThirdPerson * __this, Vector3 deltaPosition));
IL2CPP_REGISTER_METHOD(0x022146A0, void, WallRun, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x022157B0, bool, CanWallRun, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x022158C0, Vector3, GetMoveDirection, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x02215D70, void, Rotate, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x02216940, Vector3, GetForwardDirection, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x02216DC0, bool, Jump, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x022170E0, void, GroundCheck, (CharacterThirdPerson * __this));
IL2CPP_REGISTER_METHOD(0x02217940, void, __ctor, (CharacterThirdPerson * __this));
}
