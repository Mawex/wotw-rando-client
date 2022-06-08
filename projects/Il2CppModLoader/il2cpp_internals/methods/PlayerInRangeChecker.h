using namespace app;

namespace app::methods::PlayerInRangeChecker {
IL2CPP_REGISTER_METHOD(0x0140FEC0, bool, get_IsInside, (PlayerInRangeChecker * __this));
IL2CPP_REGISTER_METHOD(0x0140FFC0, bool, IsPositionInside, (PlayerInRangeChecker * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x01410560, bool, WillBeInside, (PlayerInRangeChecker * __this, float predictionTime));
IL2CPP_REGISTER_METHOD(0x01410790, void, FixedUpdate, (PlayerInRangeChecker * __this));
IL2CPP_REGISTER_METHOD(0x01410800, void, Start, (PlayerInRangeChecker * __this));
IL2CPP_REGISTER_METHOD(0x01410890, bool, Validate, (PlayerInRangeChecker * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PlayerInRangeChecker * __this));
}
