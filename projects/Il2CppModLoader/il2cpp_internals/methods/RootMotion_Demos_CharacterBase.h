using namespace app;

namespace app::methods::RootMotion::Demos::CharacterBase {
IL2CPP_REGISTER_METHOD(0x022100A0, Vector3, GetGravity, (CharacterBase * __this));
IL2CPP_REGISTER_METHOD(0x022103A0, void, Start, (CharacterBase * __this));
IL2CPP_REGISTER_METHOD(0x02210910, RaycastHit, GetSpherecastHit, (CharacterBase * __this));
IL2CPP_REGISTER_METHOD(0x02210ED0, float, GetAngleFromForward, (CharacterBase * __this, Vector3 worldDirection));
IL2CPP_REGISTER_METHOD(0x02211060, void, RigidbodyRotateAround, (CharacterBase * __this, Vector3 point, Vector3 axis, float angle));
IL2CPP_REGISTER_METHOD(0x02211580, void, ScaleCapsule, (CharacterBase * __this, float mlp));
IL2CPP_REGISTER_METHOD(0x02211950, void, HighFriction, (CharacterBase * __this));
IL2CPP_REGISTER_METHOD(0x022119C0, void, ZeroFriction, (CharacterBase * __this));
IL2CPP_REGISTER_METHOD(0x02211A30, float, GetSlopeDamper, (CharacterBase * __this, Vector3 velocity, Vector3 groundNormal));
IL2CPP_REGISTER_METHOD(0x02211B90, void, __ctor, (CharacterBase * __this));
}
