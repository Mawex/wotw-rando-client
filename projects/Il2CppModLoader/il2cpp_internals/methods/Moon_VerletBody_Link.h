#include <interception_macros.h>

namespace app::methods::Moon::VerletBody_Link {
IL2CPP_REGISTER_METHOD(0x002FA280, VerletBody_Point *, get_Point0, (VerletBody_Link * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, VerletBody_Point *, get_Point1, (VerletBody_Link * __this));
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_RestDistance, (VerletBody_Link * __this));
IL2CPP_REGISTER_METHOD(0x00A64050, void, set_RestDistance, (VerletBody_Link * __this, float value));
IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_Stiffness, (VerletBody_Link * __this));
IL2CPP_REGISTER_METHOD(0x012219F0, void, set_Stiffness, (VerletBody_Link * __this, float value));
IL2CPP_REGISTER_METHOD(0x021267A0, Vector3, get_Direction, (VerletBody_Link * __this));
IL2CPP_REGISTER_METHOD(0x02126940, void, __ctor, (VerletBody_Link * __this, VerletBody_Point * p0, VerletBody_Point * p1, float restDistance, float stiffness));
IL2CPP_REGISTER_METHOD(0x02126960, void, Rotate, (VerletBody_Link * __this, float angle, Vector3 axis));
IL2CPP_REGISTER_METHOD(0x02126B70, void, Update, (VerletBody_Link * __this, float dt));
}
