#include <interception_macros.h>

namespace app::methods::KwolokNpcEntity {
IL2CPP_REGISTER_METHOD(0x012FBAD0, String *, get_DialogActorName, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FBB50, String *, get_InteractionActorName, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CameraTargetActive, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FBBD0, CharacterInteractableActivationMode__Enum, get_ActivationMode, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FBBE0, void, OnDisable, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FBC90, void, ResetEntity, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FBCB0, KwolokNpcEntity_State__Enum, get_CurrentState, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FBCE0, void, set_CurrentState, (KwolokNpcEntity * __this, KwolokNpcEntity_State__Enum value));
IL2CPP_REGISTER_METHOD(0x012FBD10, KwolokNpcEntity_CleanseWellspringState__Enum, get_CleanseWellspringCurrentState, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FBD40, void, OnEnable, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FBE10, void, PlayLookAnimation, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FC080, void, OnUpdate, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FC380, void, StartIdle, (KwolokNpcEntity * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x012FC630, void, SetupState, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FC7C0, void, Apply, (KwolokNpcEntity * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x012FC7D0, IUberState__Array *, get_AffectingUberStates, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FC860, List_1_UnityEngine_GameObject_ *, get_AllTargets, (KwolokNpcEntity * __this));
IL2CPP_REGISTER_METHOD(0x012FCA20, bool, CanInteractWithCharacter, (KwolokNpcEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x012FCBB0, void, __ctor, (KwolokNpcEntity * __this));
}
