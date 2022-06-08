#include <interception_macros.h>

namespace app::methods::Moon::ArtOptimization::SceneSampleTask {
IL2CPP_REGISTER_METHOD(0x00C1B200, void, __ctor, (SceneSampleTask * __this, Vector3 samplePosition));
IL2CPP_REGISTER_METHOD(0x00CB1970, void, Update, (SceneSampleTask * __this));
IL2CPP_REGISTER_METHOD(0x00CB1B60, void, OnEnterContext, (SceneSampleTask * __this, IOptimizationTask * antecedent, Object * contextData));
}
