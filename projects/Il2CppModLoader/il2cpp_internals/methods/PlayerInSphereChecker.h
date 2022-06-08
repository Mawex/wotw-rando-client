using namespace app;

namespace app::methods::PlayerInSphereChecker {
IL2CPP_REGISTER_METHOD(0x014108A0, bool, get_IsInside, (PlayerInSphereChecker * __this));
IL2CPP_REGISTER_METHOD(0x014109A0, bool, IsPositionInside, (PlayerInSphereChecker * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x01410E80, bool, WillBeInside, (PlayerInSphereChecker * __this, float predictionTime));
IL2CPP_REGISTER_METHOD(0x014110B0, void, FixedUpdate, (PlayerInSphereChecker * __this));
IL2CPP_REGISTER_METHOD(0x01411120, void, Start, (PlayerInSphereChecker * __this));
IL2CPP_REGISTER_METHOD(0x014111B0, bool, Validate, (PlayerInSphereChecker * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PlayerInSphereChecker * __this));
}
