using namespace app;

namespace app::methods::PetrifiedOwlBossCameraTargetsProvider {
IL2CPP_REGISTER_METHOD(0x0049CF20, float, get_PowlCutOffDistance, (PetrifiedOwlBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0049CF80, Vector3, get_PowlReferenceOffset, (PetrifiedOwlBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0049D0D0, void, Awake, (PetrifiedOwlBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0049D100, void, UpdateTargets, (PetrifiedOwlBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0049D210, List_1_Moon_CameraTargetSettings_ *, GetTargets, (PetrifiedOwlBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0049D3E0, void, GetFight1Targets, (PetrifiedOwlBossCameraTargetsProvider * __this, List_1_Moon_CameraTargetSettings_ * * targets));
IL2CPP_REGISTER_METHOD(0x0049D670, void, GetFight2Targets, (PetrifiedOwlBossCameraTargetsProvider * __this, List_1_Moon_CameraTargetSettings_ * * targets));
IL2CPP_REGISTER_METHOD(0x0049DC90, Vector3, GetOriPredictedPosition, (PetrifiedOwlBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0049DCC0, Vector3, GetPredictedGroundPosition, (PetrifiedOwlBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0049DE50, Vector3, GetCameraFocusPointPosition, (PetrifiedOwlBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0049DF30, Vector3, ClampPositionToMaxOffsets, (PetrifiedOwlBossCameraTargetsProvider * __this, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x0049E120, Vector3, ClampToMaxHeight, (PetrifiedOwlBossCameraTargetsProvider * __this, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x0049E220, float, get_GroundHeight, (PetrifiedOwlBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0049E330, float, get_MaxHeight, (PetrifiedOwlBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0049E490, bool, get_ShouldFrameGround, (PetrifiedOwlBossCameraTargetsProvider * __this));
IL2CPP_REGISTER_METHOD(0x0049E530, void, __ctor, (PetrifiedOwlBossCameraTargetsProvider * __this));
}
