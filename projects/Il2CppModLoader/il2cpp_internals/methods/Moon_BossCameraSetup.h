#include <interception_macros.h>

namespace app::methods::Moon::BossCameraSetup {
IL2CPP_REGISTER_METHOD(0x00CBCC50, bool, get_IsSuspended, (BossCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x00CBCC60, void, set_IsSuspended, (BossCameraSetup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00CBCEC0, SuspendableMask__Enum, get_Mask, (BossCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x00CBCED0, void, set_Mask, (BossCameraSetup * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00CBCEE0, void, Awake, (BossCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x00CBD000, void, OnDestroy, (BossCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x00CBD0A0, void, OnEnable, (BossCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x00CBD220, void, OnDisable, (BossCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x00CBD390, bool, LinecastIgnoringSand, (BossCameraSetup * __this, Vector3 p1, Vector3 p2, RaycastHit * hitInfo, LayerMask raycastMask));
IL2CPP_REGISTER_METHOD(0x00CBD700, void, FixedUpdate, (BossCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x00CBE810, void, ResetCameraTargetTransformPosition, (BossCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x00CBE890, void, OnDrawGizmosSelected, (BossCameraSetup * __this));
IL2CPP_REGISTER_METHOD(0x00CBED60, void, __ctor, (BossCameraSetup * __this));
}
