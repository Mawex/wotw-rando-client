#include <interception_macros.h>

namespace app::methods::AttachToTransform {
IL2CPP_REGISTER_METHOD(0x00850FA0, void, Awake, (AttachToTransform * __this));
IL2CPP_REGISTER_METHOD(0x00851010, void, OnDisable, (AttachToTransform * __this));
IL2CPP_REGISTER_METHOD(0x00851020, void, Attach, (AttachToTransform * __this, Transform * attachTransform));
IL2CPP_REGISTER_METHOD(0x00851270, void, FixedUpdate, (AttachToTransform * __this));
IL2CPP_REGISTER_METHOD(0x008516A0, void, OnDrawGizmosSelected, (AttachToTransform * __this));
IL2CPP_REGISTER_METHOD(0x008518D0, void, __ctor, (AttachToTransform * __this));
}
