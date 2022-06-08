using namespace app;

namespace app::methods::Moon::OriPredictionHelper {
IL2CPP_REGISTER_METHOD(0x0064EB90, Vector3, get_SmoothedWorldSpeed, (OriPredictionHelper * __this));
IL2CPP_REGISTER_METHOD(0x00C31FF0, void, Update, (OriPredictionHelper * __this, Vector3 defaultOriPos));
IL2CPP_REGISTER_METHOD(0x00C320F0, void, UpdateOriWorldSpeed, (OriPredictionHelper * __this));
IL2CPP_REGISTER_METHOD(0x00C32360, void, UpdateOriPredictedPosition, (OriPredictionHelper * __this, Vector3 defaultOriPos));
IL2CPP_REGISTER_METHOD(0x00B8DCD0, Vector3, GetOriPredictedPosition, (OriPredictionHelper * __this));
IL2CPP_REGISTER_METHOD(0x00C32620, void, __ctor, (OriPredictionHelper * __this));
}
