#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TransformAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x00C03C70, UpdateCategory__Enum, get_UpdateCategory, (TransformAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E8F540, void, Awake, (TransformAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E8F6C0, void, PrepareBodyForMovement, (TransformAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E8F930, void, StopBodyMovement, (TransformAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E8FA90, void, OnStartPlayback, (TransformAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01E8FB50, void, OnStopPlayback, (TransformAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E8FD40, void, OnUpdateEntity, (TransformAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01E8FE00, void, RefreshUpdateCategory, (TransformAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (TransformAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (TransformAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E8FF70, void, __ctor, (TransformAnimatorEntity * __this));
}
