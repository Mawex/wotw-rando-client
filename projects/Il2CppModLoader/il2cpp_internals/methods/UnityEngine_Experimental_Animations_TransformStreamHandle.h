#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Animations::TransformStreamHandle {
IL2CPP_REGISTER_METHOD(0x002431E0, bool, IsValidInternal, (TransformStreamHandle__Boxed * __this, AnimationStream * stream));
IL2CPP_REGISTER_METHOD(0x00243220, bool, get_createdByNative, (TransformStreamHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00243230, bool, IsSameVersionAsStream, (TransformStreamHandle__Boxed * __this, AnimationStream * stream));
IL2CPP_REGISTER_METHOD(0x00243240, bool, get_hasHandleIndex, (TransformStreamHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00243250, bool, get_hasSkeletonIndex, (TransformStreamHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EBC90, uint32_t, get_animatorBindingsVersion, (TransformStreamHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00243260, bool, IsResolvedInternal, (TransformStreamHandle__Boxed * __this, AnimationStream * stream));
IL2CPP_REGISTER_METHOD(0x002432B0, void, CheckIsValidAndResolve, (TransformStreamHandle__Boxed * __this, AnimationStream * stream));
IL2CPP_REGISTER_METHODINFO(0x0477AB90, TransformStreamHandle_CheckIsValidAndResolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002432C0, Vector3, GetPosition, (TransformStreamHandle__Boxed * __this, AnimationStream stream));
IL2CPP_REGISTER_METHOD(0x00243380, void, SetPosition, (TransformStreamHandle__Boxed * __this, AnimationStream stream, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00243430, Quaternion, GetRotation, (TransformStreamHandle__Boxed * __this, AnimationStream stream));
IL2CPP_REGISTER_METHOD(0x002434F0, void, SetRotation, (TransformStreamHandle__Boxed * __this, AnimationStream stream, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x002435A0, void, ResolveInternal, (TransformStreamHandle__Boxed * __this, AnimationStream * stream));
IL2CPP_REGISTER_METHOD(0x002435B0, Vector3, GetPositionInternal, (TransformStreamHandle__Boxed * __this, AnimationStream * stream));
IL2CPP_REGISTER_METHOD(0x00243650, void, SetPositionInternal, (TransformStreamHandle__Boxed * __this, AnimationStream * stream, Vector3 position));
IL2CPP_REGISTER_METHOD(0x002436D0, Quaternion, GetRotationInternal, (TransformStreamHandle__Boxed * __this, AnimationStream * stream));
IL2CPP_REGISTER_METHOD(0x00243760, void, SetRotationInternal, (TransformStreamHandle__Boxed * __this, AnimationStream * stream, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x03087080, void, ResolveInternal_Injected, (TransformStreamHandle * _unity_self, AnimationStream * stream));
IL2CPP_REGISTER_METHOD(0x030870E0, void, GetPositionInternal_Injected, (TransformStreamHandle * _unity_self, AnimationStream * stream, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x03087150, void, SetPositionInternal_Injected, (TransformStreamHandle * _unity_self, AnimationStream * stream, Vector3 * position));
IL2CPP_REGISTER_METHOD(0x030871C0, void, GetRotationInternal_Injected, (TransformStreamHandle * _unity_self, AnimationStream * stream, Quaternion * ret));
IL2CPP_REGISTER_METHOD(0x03087230, void, SetRotationInternal_Injected, (TransformStreamHandle * _unity_self, AnimationStream * stream, Quaternion * rotation));
}
