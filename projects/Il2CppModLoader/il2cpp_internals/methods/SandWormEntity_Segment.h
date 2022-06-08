#include <interception_macros.h>

namespace app::methods::SandWormEntity_Segment {
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_DistanceOffset, (SandWormEntity_Segment * __this));
IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_DistanceOffset, (SandWormEntity_Segment * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FB930, VerletBody_Point *, get_VerletPoint, (SandWormEntity_Segment * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_VerletPoint, (SandWormEntity_Segment * __this, VerletBody_Point * value));
IL2CPP_REGISTER_METHOD(0x002FB950, VerletBody_Link *, get_VerletLink, (SandWormEntity_Segment * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_VerletLink, (SandWormEntity_Segment * __this, VerletBody_Link * value));
IL2CPP_REGISTER_METHOD(0x00C1B1E0, Vector3, get_Velocity, (SandWormEntity_Segment * __this));
IL2CPP_REGISTER_METHOD(0x00C1B200, void, set_Velocity, (SandWormEntity_Segment * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Rigidbody *, get_Rigidbody, (SandWormEntity_Segment * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Rigidbody, (SandWormEntity_Segment * __this, Rigidbody * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, CharacterJoint *, get_CharacterJoint, (SandWormEntity_Segment * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_CharacterJoint, (SandWormEntity_Segment * __this, CharacterJoint * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Collider *, get_Collider, (SandWormEntity_Segment * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Collider, (SandWormEntity_Segment * __this, Collider * value));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Pinned, (SandWormEntity_Segment * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_Pinned, (SandWormEntity_Segment * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A28F40, float, get_RotationYVelocity, (SandWormEntity_Segment * __this));
IL2CPP_REGISTER_METHOD(0x00C1ABF0, void, set_RotationYVelocity, (SandWormEntity_Segment * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBC00, EntityTargetting *, get_Targetting, (SandWormEntity_Segment * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_Targetting, (SandWormEntity_Segment * __this, EntityTargetting * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SandWormEntity_Segment * __this));
}
