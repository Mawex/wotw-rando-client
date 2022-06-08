using namespace app;

namespace app::methods::RootMotion::BipedNaming {
IL2CPP_REGISTER_METHOD(0x021FCD40, Transform__Array *, GetBonesOfType, (BipedNaming_BoneType__Enum boneType, Transform__Array * bones));
IL2CPP_REGISTER_METHOD(0x021FCF20, Transform__Array *, GetBonesOfSide, (BipedNaming_BoneSide__Enum boneSide, Transform__Array * bones));
IL2CPP_REGISTER_METHOD(0x021FD100, Transform__Array *, GetBonesOfTypeAndSide, (BipedNaming_BoneType__Enum boneType, BipedNaming_BoneSide__Enum boneSide, Transform__Array * bones));
IL2CPP_REGISTER_METHOD(0x021FD1C0, Transform *, GetFirstBoneOfTypeAndSide, (BipedNaming_BoneType__Enum boneType, BipedNaming_BoneSide__Enum boneSide, Transform__Array * bones));
IL2CPP_REGISTER_METHOD(0x021FD2C0, Transform *, GetNamingMatch, (Transform__Array * transforms, String__Array__Array * namings));
IL2CPP_REGISTER_METHOD(0x021FD450, BipedNaming_BoneType__Enum, GetBoneType, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FDB50, BipedNaming_BoneSide__Enum, GetBoneSide, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FDC30, Transform *, GetBone, (Transform__Array * transforms, BipedNaming_BoneType__Enum boneType, BipedNaming_BoneSide__Enum boneSide, String__Array__Array * namings));
IL2CPP_REGISTER_METHOD(0x021FDD00, bool, isLeft, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FDE70, bool, isRight, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FDFE0, bool, isSpine, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FE0E0, bool, isHead, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FE1E0, bool, isArm, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FE2E0, bool, isLeg, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FE3E0, bool, isTail, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FE4E0, bool, isEye, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FE5E0, bool, isTypeExclude, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FE690, bool, matchesNaming, (String * boneName, String__Array * namingConvention));
IL2CPP_REGISTER_METHOD(0x021FE7D0, bool, excludesNaming, (String * boneName, String__Array * namingConvention));
IL2CPP_REGISTER_METHOD(0x021FE870, bool, matchesLastLetter, (String * boneName, String__Array * namingConvention));
IL2CPP_REGISTER_METHOD(0x021FE970, bool, LastLetterIs, (String * boneName, String * letter));
IL2CPP_REGISTER_METHOD(0x021FE9D0, String *, firstLetter, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FEA70, String *, lastLetter, (String * boneName));
IL2CPP_REGISTER_METHOD(0x021FEB10, void, __cctor, (MethodInfo * method));
}
