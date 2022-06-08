#include <interception_macros.h>

namespace app::methods::Moon::Timeline::RigidbodyParametersAnimator {
IL2CPP_REGISTER_METHOD(0x007808F0, GameObject *, get_ExternalTarget, (RigidbodyParametersAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (RigidbodyParametersAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007809A0, void, OnStartPlayback, (RigidbodyParametersAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (RigidbodyParametersAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, MoonReference_1_UnityEngine_Transform_ *, GetTransformTarget, (RigidbodyParametersAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmosSelected, (RigidbodyParametersAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00780D60, void, __ctor, (RigidbodyParametersAnimator * __this));
}
