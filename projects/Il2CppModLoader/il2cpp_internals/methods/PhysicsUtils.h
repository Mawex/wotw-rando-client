using namespace app;

namespace app::methods::PhysicsUtils {
IL2CPP_REGISTER_METHOD(0x01155FF0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011560A0, void, InitializeStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01156720, LayerMask, get_GroundMask, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01156810, LayerMask, get_ObstaclesMask, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01156900, LayerMask, get_KillCharacterMask, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011569F0, LayerMask, get_CharacterMask, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01156AE0, LayerMask, get_PlayerMask, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01156BD0, Comparer_1_UnityEngine_RaycastHit_ *, get_NearesHitComparer, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01156C70, LayerMask, GetMask, (PhysicsUtils_Mask__Enum mask));
IL2CPP_REGISTER_METHOD(0x01156D60, bool, IsInMask, (LayerMask mask, int32_t layer));
IL2CPP_REGISTER_METHOD(0x01156D80, float, GetVelocityFromMaxHeight, (float height, float gravity));
IL2CPP_REGISTER_METHOD(0x01156E90, float, GetMaxJumpVerticalHeight, (float verticalSpeed, float gravity));
IL2CPP_REGISTER_METHOD(0x01156ED0, float, GetDistance, (Vector3 velocity, float gravity));
IL2CPP_REGISTER_METHOD(0x01157040, float, CalculateHorizontalSpeed, (Vector3 jumpVector, float verticalSpeed, float gravity, bool firstContact));
IL2CPP_REGISTER_METHOD(0x011571C0, float, CalculateVerticalSpeed, (Vector3 jumpVector, float horizontalSpeed, float gravity));
IL2CPP_REGISTER_METHOD(0x011571F0, void, __cctor, (MethodInfo * method));
}
