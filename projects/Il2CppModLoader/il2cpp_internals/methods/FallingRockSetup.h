using namespace app;

namespace app::methods::FallingRockSetup {
IL2CPP_REGISTER_METHOD(0x00996AA0, void, OnDamageDealt, (FallingRockSetup * __this, DamageDealer * dealer, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x04753D30, FallingRockSetup_OnDamageDealt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00996C80, void, OnEnable, (FallingRockSetup * __this));
IL2CPP_REGISTER_METHOD(0x00996F90, void, OnDisable, (FallingRockSetup * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (FallingRockSetup * __this));
IL2CPP_REGISTER_METHOD(0x009971D0, void, Apply, (FallingRockSetup * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00420EE0, IUberState__Array *, get_AffectingUberStates, (FallingRockSetup * __this));
IL2CPP_REGISTER_METHOD(0x009973A0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (FallingRockSetup * __this));
IL2CPP_REGISTER_METHOD(0x00997600, void, OnFrustumEnter, (FallingRockSetup * __this));
IL2CPP_REGISTER_METHOD(0x00997610, void, OnFrustumExit, (FallingRockSetup * __this));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_InsideFrustum, (FallingRockSetup * __this));
IL2CPP_REGISTER_METHOD(0x00997620, Bounds, get_Bounds, (FallingRockSetup * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, (FallingRockSetup * __this));
IL2CPP_REGISTER_METHOD(0x00997640, Bounds, EncapsulateChildren, (FallingRockSetup * __this, Transform * trans, Bounds * current, bool * hasBounds));
IL2CPP_REGISTER_METHOD(0x009977D0, Bounds, WorldSpaceHierarchyBoundingBox, (FallingRockSetup * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x00997A70, void, __ctor, (FallingRockSetup * __this));
}
