#include <interception_macros.h>

namespace app::methods::LegacyBabySandWorm {
IL2CPP_REGISTER_METHOD(0x015CE620, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x015CE700, DigZone *, GetDigZoneIntersectingCircle, (LegacyBabySandWorm * __this, Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x015CE900, void, Awake, (LegacyBabySandWorm * __this));
IL2CPP_REGISTER_METHOD(0x015CEF30, void, EnablePhysics, (LegacyBabySandWorm * __this, float distanceToTarget));
IL2CPP_REGISTER_METHOD(0x015CF240, void, DisablePhysics, (LegacyBabySandWorm * __this));
IL2CPP_REGISTER_METHOD(0x015CF2B0, void, FixedUpdate, (LegacyBabySandWorm * __this));
IL2CPP_REGISTER_METHOD(0x015D0FD0, bool, HandleCCD, (LegacyBabySandWorm * __this));
IL2CPP_REGISTER_METHOD(0x015D14C0, Vector3, GetPositionFromHistory, (LegacyBabySandWorm * __this, float time));
IL2CPP_REGISTER_METHOD(0x015D17B0, void, UpdateLineRenderer, (LegacyBabySandWorm * __this));
IL2CPP_REGISTER_METHOD(0x015D1A00, void, OnCollided, (LegacyBabySandWorm * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x015D1DF0, void, OnCollisionEnter, (LegacyBabySandWorm * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x015D1EE0, void, __ctor, (LegacyBabySandWorm * __this));
IL2CPP_REGISTER_METHOD(0x015D2330, void, __cctor, ());
}
