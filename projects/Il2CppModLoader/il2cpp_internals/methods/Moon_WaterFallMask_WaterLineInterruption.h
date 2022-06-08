#include <interception_macros.h>

namespace app::methods::Moon::WaterFallMask_WaterLineInterruption {
IL2CPP_REGISTER_METHOD(0x00F28500, void, __ctor, (WaterFallMask_WaterLineInterruption * __this, Vector2 start, Vector2 end));
IL2CPP_REGISTER_METHOD(0x00F28550, Vector2, get_Start, (WaterFallMask_WaterLineInterruption * __this));
IL2CPP_REGISTER_METHOD(0x00F28570, Vector2, get_End, (WaterFallMask_WaterLineInterruption * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsActive, (WaterFallMask_WaterLineInterruption * __this));
IL2CPP_REGISTER_METHOD(0x00F28590, void, UpdateLine, (WaterFallMask_WaterLineInterruption * __this, float deltaTime, Vector2 gravity, bool startPointLocked, float maxHeight, float minHeight));
IL2CPP_REGISTER_METHOD(0x00F28950, void, Enable, (WaterFallMask_WaterLineInterruption * __this, Vector2 point, float initialVelocity, float initialSeparation));
IL2CPP_REGISTER_METHOD(0x00F28AE0, void, Disable, (WaterFallMask_WaterLineInterruption * __this));
}
