#include <interception_macros.h>

namespace app::methods::UnityEngine::Jobs::TransformAccessArray {
IL2CPP_REGISTER_METHOD(0x001F2790, void, __ctor, (TransformAccessArray__Boxed * __this, Transform__Array * transforms, int32_t desiredJobCount));
IL2CPP_REGISTER_METHOD(0x0252E130, void, Allocate, (int32_t capacity, int32_t desiredJobCount, TransformAccessArray * array));
IL2CPP_REGISTER_METHOD(0x001F27A0, bool, get_isCreated, (TransformAccessArray__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F27B0, void, Dispose, (TransformAccessArray__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9820, void *, GetTransformAccessArrayForSchedule, (TransformAccessArray__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F27C0, Transform *, get_Item, (TransformAccessArray__Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0252E350, void *, Create, (int32_t capacity, int32_t desiredJobCount));
IL2CPP_REGISTER_METHOD(0x0252E3B0, void, DestroyTransformAccessArray, (void * transformArray));
IL2CPP_REGISTER_METHOD(0x0252E400, void, SetTransforms, (void * transformArrayIntPtr, Transform__Array * transforms));
IL2CPP_REGISTER_METHOD(0x0252E460, void *, GetSortedTransformAccess, (void * transformArrayIntPtr));
IL2CPP_REGISTER_METHOD(0x0252E4B0, void *, GetSortedToUserIndex, (void * transformArrayIntPtr));
IL2CPP_REGISTER_METHOD(0x0252E500, Transform *, GetTransform, (void * transformArrayIntPtr, int32_t index));
}
