using namespace app;

namespace app::methods::OriPositionPrediction {
IL2CPP_REGISTER_METHOD(0x0043EAE0, void, __ctor, (OriPositionPrediction * __this, Transform * ownerTransform));
IL2CPP_REGISTER_METHOD(0x0043EC50, bool, PredictOriPosition, (OriPositionPrediction * __this, Vector3 * prediction));
IL2CPP_REGISTER_METHOD(0x0043F600, bool, PredictOriDoubleJumpGroundPosition, (OriPositionPrediction * __this, Vector3 * groundPosition));
IL2CPP_REGISTER_METHOD(0x0043FC60, bool, PredictOriGroundPosition, (OriPositionPrediction * __this, Vector3 * prediction));
}
