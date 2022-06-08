#include <interception_macros.h>

namespace app::methods::Moon::VerletBody_Point {
IL2CPP_REGISTER_METHOD(0x00C1B1E0, Vector3, get_Acceleration, (VerletBody_Point * __this));
IL2CPP_REGISTER_METHOD(0x00C1B200, void, set_Acceleration, (VerletBody_Point * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00447340, float, get_Damping, (VerletBody_Point * __this));
IL2CPP_REGISTER_METHOD(0x00447350, void, set_Damping, (VerletBody_Point * __this, float value));
IL2CPP_REGISTER_METHOD(0x02126E60, float, get_Mass, (VerletBody_Point * __this));
IL2CPP_REGISTER_METHOD(0x02126E70, void, set_Mass, (VerletBody_Point * __this, float value));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_InverseMass, (VerletBody_Point * __this));
IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_InverseMass, (VerletBody_Point * __this, float value));
IL2CPP_REGISTER_METHOD(0x0167FE90, Vector3, get_Position, (VerletBody_Point * __this));
IL2CPP_REGISTER_METHOD(0x0167FEB0, void, set_Position, (VerletBody_Point * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x007EC230, Vector3, get_PreviousPosition, (VerletBody_Point * __this));
IL2CPP_REGISTER_METHOD(0x009C51C0, void, set_PreviousPosition, (VerletBody_Point * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x02126F60, void, __ctor, (VerletBody_Point * __this, Vector3 position, float mass, float damping));
IL2CPP_REGISTER_METHOD(0x02127060, void, AddForce, (VerletBody_Point * __this, Vector3 force));
IL2CPP_REGISTER_METHOD(0x02127170, void, AddAcceleration, (VerletBody_Point * __this, Vector3 acceleration));
IL2CPP_REGISTER_METHOD(0x02127280, void, Update, (VerletBody_Point * __this, float dt));
IL2CPP_REGISTER_METHOD(0x02127450, void, __cctor, ());
}
