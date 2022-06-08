#include <interception_macros.h>

namespace app::methods::AttachSpriteToTransform {
IL2CPP_REGISTER_METHOD(0x0084D3C0, bool, get_IsSuspended, (AttachSpriteToTransform * __this));
IL2CPP_REGISTER_METHOD(0x0084D3D0, void, set_IsSuspended, (AttachSpriteToTransform * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008468B0, SuspendableMask__Enum, get_Mask, (AttachSpriteToTransform * __this));
IL2CPP_REGISTER_METHOD(0x008468C0, void, set_Mask, (AttachSpriteToTransform * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0084D3E0, bool, IsAttached, (AttachSpriteToTransform * __this));
IL2CPP_REGISTER_METHOD(0x0084D480, void, Awake, (AttachSpriteToTransform * __this));
IL2CPP_REGISTER_METHOD(0x0084D770, void, OnEnable, (AttachSpriteToTransform * __this));
IL2CPP_REGISTER_METHOD(0x0084D810, void, OnDisable, (AttachSpriteToTransform * __this));
IL2CPP_REGISTER_METHOD(0x0084D8B0, void, PerformAttachment, (AttachSpriteToTransform * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, UpdateType__Enum, get_UpdateType, (AttachSpriteToTransform * __this));
IL2CPP_REGISTER_METHOD(0x0084E2D0, void, OnUpdate, (AttachSpriteToTransform * __this, float delta));
IL2CPP_REGISTER_METHOD(0x0084F180, void, __ctor, (AttachSpriteToTransform * __this));
}
