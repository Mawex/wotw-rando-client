#include <interception_macros.h>

namespace app::methods::SavePedestal {
IL2CPP_REGISTER_METHOD(0x009147C0, bool, get_IsShowingHint, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00914860, bool, get_HasGameBeenSaved, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00914950, void, set_HasGameBeenSaved, (SavePedestal * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00914A40, bool, get_IsTeleporterActive, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00914B30, void, set_IsTeleporterActive, (SavePedestal * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00914C20, bool, get_CanPerformActionBase, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00914EB0, bool, get_IsPlayingAnyTimeline, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00915030, bool, get_CanPerformSaveAction, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00915040, bool, get_CanPerformTeleportAction, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00915100, bool, get_IsInside, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x009151E0, void, Awake, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x009152B0, void, OnDestroy, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00915370, void, OnEnable, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00915420, void, OnDisable, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x009154C0, void, Apply, (SavePedestal * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00915690, IUberState__Array *, get_AffectingUberStates, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00915720, List_1_UnityEngine_GameObject_ *, get_AllTargets, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x009158E0, void, OnTeleporterActivationStateChanged, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x009158E0, void, RefreshIsAnyOtherTeleporterActive, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00915900, void, Highlight, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00915E00, void, Unhighlight, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00916140, bool, get_OriHasTargets, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00916260, float, get_DistanceToSein, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00916410, void, FixedUpdate, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00916B10, void, UpdateAbilityRestrictZone, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00916C80, void, TeleportOnPedestal, (SavePedestal * __this));
IL2CPP_REGISTER_METHODINFO(0x0475C3D0, SavePedestal_TeleportOnPedestal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00916CB0, void, OnBeginTeleporting, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00916EE0, void, OnFinishedTeleporting, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00917000, void, MarkAsUsed, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x009171B0, void, UpdateHint, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00917370, void, ShowHint, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x009175B0, void, HideHint, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00917680, void, SaveOnPedestal, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00917BD0, void, SaveGame, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneSave, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneSave, (SceneRoot * root));
IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_InvalidateParentTimelineCache, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x006B8970, void, set_InvalidateParentTimelineCache, (SavePedestal * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00917D50, void, __ctor, (SavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00917E00, void, __cctor, ());
}
