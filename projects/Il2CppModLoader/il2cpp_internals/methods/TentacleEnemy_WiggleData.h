#include <interception_macros.h>

namespace app::methods::TentacleEnemy_WiggleData {
IL2CPP_REGISTER_METHOD(0x00CFCF00, void, __ctor, (TentacleEnemy_WiggleData * __this, float strength, float speed, float frequency));
IL2CPP_REGISTER_METHOD(0x00CFCF10, void, CopyFrom, (TentacleEnemy_WiggleData * __this, TentacleEnemy_WiggleData * other));
IL2CPP_REGISTER_METHOD(0x00CFCF40, void, IntrpolateTowards, (TentacleEnemy_WiggleData * __this, TentacleEnemy_WiggleData * targetWiggle, float dt));
IL2CPP_REGISTER_METHOD(0x00CFD0B0, void, Interpolate, (TentacleEnemy_WiggleData * __this, float * current, float target, float changeRate, float dt));
IL2CPP_REGISTER_METHOD(0x00CFD1B0, void, __cctor, ());
}
