#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::SimpleLocomotion {
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_isGrounded, (SimpleLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_isGrounded, (SimpleLocomotion * __this, bool value));
IL2CPP_REGISTER_METHOD(0x022310C0, void, Start, (SimpleLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x022311B0, void, Update, (SimpleLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x022312B0, void, LateUpdate, (SimpleLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x02231330, void, Rotate, (SimpleLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x022319E0, void, Move, (SimpleLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x02231F40, Vector3, GetInputVector, (SimpleLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x022320F0, Vector3, GetInputVectorRaw, (SimpleLocomotion * __this));
IL2CPP_REGISTER_METHOD(0x02232220, void, __ctor, (SimpleLocomotion * __this));
}
