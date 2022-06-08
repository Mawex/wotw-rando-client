#include <interception_macros.h>

namespace app::methods::RotationTrackingChain_ChainEntry {
IL2CPP_REGISTER_METHOD(0x01371930, void, Update, (RotationTrackingChain_ChainEntry * __this, float deltaTime, Vector3 target));
IL2CPP_REGISTER_METHOD(0x01371E80, float, HandleAngleLimit, (RotationTrackingChain_ChainEntry * __this, float angle, float limit));
IL2CPP_REGISTER_METHOD(0x01371F60, void, __ctor, (RotationTrackingChain_ChainEntry * __this));
}
