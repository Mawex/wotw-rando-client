#include <interception_macros.h>

namespace app::methods::RootMotion_Demos::SimpleLocomotion {
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_isGrounded, (app::SimpleLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_isGrounded, (app::SimpleLocomotion * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x022310C0, void, Start, (app::SimpleLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x022311B0, void, Update, (app::SimpleLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x022312B0, void, LateUpdate, (app::SimpleLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x02231330, void, Rotate, (app::SimpleLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x022319E0, void, Move, (app::SimpleLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x02231F40, Vector3, GetInputVector, (app::SimpleLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x022320F0, Vector3, GetInputVectorRaw, (app::SimpleLocomotion * this_ptr));
IL2CPP_REGISTER_METHOD(0x02232220, void, __ctor, (app::SimpleLocomotion * this_ptr));
}
