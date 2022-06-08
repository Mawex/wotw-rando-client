#include <interception_macros.h>

namespace app::methods::SeinController3D {
IL2CPP_REGISTER_METHOD(0x006DF9E0, void, add_OnAnimationEventCallback, (SeinController3D * __this, Action_1_SeinController3D_EventId_ * value));
IL2CPP_REGISTER_METHOD(0x006DFAD0, void, remove_OnAnimationEventCallback, (SeinController3D * __this, Action_1_SeinController3D_EventId_ * value));
IL2CPP_REGISTER_METHOD(0x006DFBC0, void, add_OnStringAnimationEventCallback, (SeinController3D * __this, Action_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x006DFCB0, void, remove_OnStringAnimationEventCallback, (SeinController3D * __this, Action_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x006DFDA0, Renderer *, get_Renderer, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006DFF40, Renderer *, get_AlphaBlendedRenderer, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E00E0, float, get_CurrentRootAngle, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E00F0, PerspectiveRotationAdjustment *, get_PerspectiveAdjustment, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E01C0, float, get_MirrorHolderAngle, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E0260, void, set_MirrorHolderAngle, (SeinController3D * __this, float value));
IL2CPP_REGISTER_METHOD(0x006D64E0, OriHeadIk *, get_OriHeadIk, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E03A0, void, set_OriHeadIk, (SeinController3D * __this, OriHeadIk * value));
IL2CPP_REGISTER_METHOD(0x002FBB40, GameObject *, get_OpaqueObject, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, GameObject *, get_AlphaBlendObject, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E03B0, void, Awake, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x0065FBB0, void, SetPuppet, (SeinController3D * __this, IPuppet * puppet));
IL2CPP_REGISTER_METHOD(0x006E0650, void, Start, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E0710, bool, get_MirrorHolderOverrided, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E0D30, void, FixedUpdate, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E0E40, void, Update, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E1580, void, ResetMirrorHolderRotationOverTime, (SeinController3D * __this, float originalRotation, float time));
IL2CPP_REGISTER_METHOD(0x006E15A0, void, ResetMirrorHolderRotation, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E15C0, void, SetDirection, (SeinController3D * __this, bool faceLeft));
IL2CPP_REGISTER_METHOD(0x006E15E0, void, Show, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x006E16E0, void, Hide, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourEnter, (SeinController3D * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourUpdate, (SeinController3D * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStateMachineBehaviourExit, (SeinController3D * __this, Animator * animator, AnimatorStateInfo stateInfo, int32_t layerIndex));
IL2CPP_REGISTER_METHOD(0x006E17E0, void, OnAnimationEvent, (SeinController3D * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x006E1880, void, OnAnimationEvent, (SeinController3D * __this, String * eventId));
IL2CPP_REGISTER_METHOD(0x006E1920, void, ApplyEmissivitySettings, (SeinController3D * __this, EmissiveIndividualSettings settings));
IL2CPP_REGISTER_METHOD(0x006E1DA0, void, ApplySettings, (SeinController3D * __this, PlayerSettingsPerScene * settings));
IL2CPP_REGISTER_METHOD(0x006E1F50, void, __ctor, (SeinController3D * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
