#include <interception_macros.h>

namespace app::methods::SmoothLinesPlugin {
IL2CPP_REGISTER_METHOD(0x006D2B30, void, OnEnable, (SmoothLinesPlugin * __this));
IL2CPP_REGISTER_METHOD(0x006D2BC0, void, SmoothLines, (SmoothLinesPlugin * __this));
IL2CPP_REGISTER_METHOD(0x006D31E0, Vector2, CalculateTangentOut, (Vector3 position, Vector3 previousPosition, Vector3 nextPosition, float tangentMultiplier));
IL2CPP_REGISTER_METHOD(0x006D34B0, Vector2, CalculateTangentIn, (Vector3 position, Vector3 previousPosition, Vector3 nextPosition, float tangentMultiplier));
IL2CPP_REGISTER_METHOD(0x006D3790, void, __ctor, (SmoothLinesPlugin * __this));
}
