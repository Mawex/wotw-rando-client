using namespace app;

namespace app::methods::MeleePositionInterpolator {
IL2CPP_REGISTER_METHOD(0x002FB950, Vector3__Array *, get_InterpolatedPositions, (MeleePositionInterpolator * __this));
IL2CPP_REGISTER_METHOD(0x009C5120, void, __ctor, (MeleePositionInterpolator * __this, int32_t maxInterpolatedPointCount));
IL2CPP_REGISTER_METHOD(0x009C51C0, void, Initialize, (MeleePositionInterpolator * __this, Vector3 currentPosition));
IL2CPP_REGISTER_METHOD(0x009C51D0, void, Update, (MeleePositionInterpolator * __this, Vector3 rotationCenter, Vector3 currentPosition, float minimalDistance));
}
