#include <interception_macros.h>

namespace app::methods::UberShaderRuntimeUpdate {
IL2CPP_REGISTER_METHOD(0x01285650, UberShaderRuntimeUpdate *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (UberShaderRuntimeUpdate * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSuspended, (UberShaderRuntimeUpdate * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSuspended, (UberShaderRuntimeUpdate * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00998570, SuspendableMask__Enum, get_Mask, (UberShaderRuntimeUpdate * __this));
IL2CPP_REGISTER_METHOD(0x01285850, void, set_Mask, (UberShaderRuntimeUpdate * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01285900, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x01285980, void, OnEnable, (UberShaderRuntimeUpdate * __this));
IL2CPP_REGISTER_METHOD(0x01285A40, void, OnDisable, (UberShaderRuntimeUpdate * __this));
IL2CPP_REGISTER_METHOD(0x01285B00, void, OnUpdate, (UberShaderRuntimeUpdate * __this, float delta));
IL2CPP_REGISTER_METHOD(0x01285DC0, void, RegisterRuntimeWorldProjectionAnchoredTexture, (UberShaderRuntimeUpdate * __this, UberShaderRuntimeAnchoredTexture * uberShaderRuntimeAchoredTexture));
IL2CPP_REGISTER_METHOD(0x01285E60, void, UnregisterRuntimeWorldProjectionAnchoredTexture, (UberShaderRuntimeUpdate * __this, UberShaderRuntimeAnchoredTexture * uberShaderRuntimeAchoredTexture));
IL2CPP_REGISTER_METHOD(0x01285F00, void, UpdateWorldProjectionToAnchorEditor, (UberShaderTexture * shaderTexture, UberShaderBlock * block));
IL2CPP_REGISTER_METHOD(0x01286070, void, ZProjectionSnapEditor, (UberShaderTexture * shaderTexture, UberShaderBlock * block));
IL2CPP_REGISTER_METHOD(0x012864E0, void, YProjectionSnapEditor, (UberShaderTexture * shaderTexture, UberShaderBlock * block));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (UberShaderRuntimeUpdate * __this));
IL2CPP_REGISTER_METHOD(0x012869C0, void, UpdateWorldProjectionToAnchor, (UberShaderRuntimeAnchoredTexture * anchoredTexture));
IL2CPP_REGISTER_METHOD(0x01286A90, void, ZProjectionSnap, (UberShaderRuntimeAnchoredTexture * anchoredTexture));
IL2CPP_REGISTER_METHOD(0x01286EB0, void, YProjectionSnap, (UberShaderRuntimeAnchoredTexture * anchoredTexture));
IL2CPP_REGISTER_METHOD(0x01287370, Vector2, RotateVector, (Vector2 vec, float rotation));
IL2CPP_REGISTER_METHOD(0x01287470, Vector2, RotateVectorAroundPoint, (Vector2 pointToRotate, Vector2 centerPoint, float angleInDegrees));
IL2CPP_REGISTER_METHOD(0x01287580, float, LookRotationZ, (Transform * from, Transform * to));
IL2CPP_REGISTER_METHOD(0x01287750, float, LookRotationY, (Transform * from, Transform * to));
IL2CPP_REGISTER_METHOD(0x01287920, void, __ctor, (UberShaderRuntimeUpdate * __this));
}
