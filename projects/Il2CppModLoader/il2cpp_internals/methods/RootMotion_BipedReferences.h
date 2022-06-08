#include <interception_macros.h>

namespace app::methods::RootMotion::BipedReferences {
IL2CPP_REGISTER_METHOD(0x02201AC0, bool, get_isFilled, (BipedReferences * __this));
IL2CPP_REGISTER_METHOD(0x020A4270, bool, get_isEmpty, (BipedReferences * __this));
IL2CPP_REGISTER_METHOD(0x02201F50, bool, IsEmpty, (BipedReferences * __this, bool includeRoot));
IL2CPP_REGISTER_METHOD(0x02202420, bool, Contains, (BipedReferences * __this, Transform * t, bool ignoreRoot));
IL2CPP_REGISTER_METHOD(0x02202900, bool, AutoDetectReferences, (BipedReferences * * references, Transform * root, BipedReferences_AutoDetectParams autoDetectParams));
IL2CPP_REGISTER_METHOD(0x02202C20, void, DetectReferencesByNaming, (BipedReferences * * references, Transform * root, BipedReferences_AutoDetectParams autoDetectParams));
IL2CPP_REGISTER_METHOD(0x022038C0, void, AssignHumanoidReferences, (BipedReferences * * references, Animator * animator, BipedReferences_AutoDetectParams autoDetectParams));
IL2CPP_REGISTER_METHOD(0x02203E80, bool, SetupError, (BipedReferences * references, String * * errorMessage));
IL2CPP_REGISTER_METHOD(0x02203FF0, bool, SetupWarning, (BipedReferences * references, String * * warningMessage));
IL2CPP_REGISTER_METHOD(0x022040E0, bool, IsNeckBone, (Transform * bone, Transform * leftUpperArm));
IL2CPP_REGISTER_METHOD(0x02204290, bool, AddBoneToEyes, (Transform * bone, BipedReferences * * references, BipedReferences_AutoDetectParams autoDetectParams));
IL2CPP_REGISTER_METHOD(0x022043F0, bool, AddBoneToSpine, (Transform * bone, BipedReferences * * references, BipedReferences_AutoDetectParams autoDetectParams));
IL2CPP_REGISTER_METHOD(0x02204630, void, DetectLimb, (BipedNaming_BoneType__Enum boneType, BipedNaming_BoneSide__Enum boneSide, Transform * * firstBone, Transform * * secondBone, Transform * * lastBone, Transform__Array * transforms));
IL2CPP_REGISTER_METHOD(0x022047C0, void, AddBoneToHierarchy, (Transform__Array * * bones, Transform * transform));
IL2CPP_REGISTER_METHOD(0x022048F0, bool, LimbError, (Transform * bone1, Transform * bone2, Transform * bone3, String * * errorMessage));
IL2CPP_REGISTER_METHOD(0x02204F70, bool, LimbWarning, (Transform * bone1, Transform * bone2, Transform * bone3, String * * warningMessage));
IL2CPP_REGISTER_METHOD(0x02205490, bool, SpineError, (BipedReferences * references, String * * errorMessage));
IL2CPP_REGISTER_METHOD(0x00417870, bool, SpineWarning, (BipedReferences * references, String * * warningMessage));
IL2CPP_REGISTER_METHOD(0x02205910, bool, EyesError, (BipedReferences * references, String * * errorMessage));
IL2CPP_REGISTER_METHOD(0x00417870, bool, EyesWarning, (BipedReferences * references, String * * warningMessage));
IL2CPP_REGISTER_METHOD(0x02205B10, bool, RootHeightWarning, (BipedReferences * references, String * * warningMessage));
IL2CPP_REGISTER_METHOD(0x02205F00, bool, FacingAxisWarning, (BipedReferences * references, String * * warningMessage));
IL2CPP_REGISTER_METHOD(0x022063D0, float, GetVerticalOffset, (Vector3 p1, Vector3 p2, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x02206540, void, __ctor, (BipedReferences * __this));
}
