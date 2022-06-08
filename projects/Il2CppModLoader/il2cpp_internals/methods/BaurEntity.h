using namespace app;

namespace app::methods::BaurEntity {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CameraTargetActive, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F97E30, String *, get_DialogActorName, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F97EB0, String *, get_InteractionActorName, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F97F30, bool, get_IsSnoring, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F97F90, BaurEntity_State__Enum, get_CurrentState, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F97FC0, void, set_CurrentState, (BaurEntity * __this, BaurEntity_State__Enum value));
IL2CPP_REGISTER_METHOD(0x00F97FF0, void, PlayLookAnimation, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F98260, void, OnAwake, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F98430, void, OnEnable, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F986D0, void, ResetEntity, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F986F0, void, OnDisable, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F987A0, void, OnUnblockedGate, (BaurEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04708A38, BaurEntity_OnUnblockedGate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F989A0, void, OnUpdate, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F98EA0, void, TriggerSnoreSound, (BaurEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04782C40, BaurEntity_TriggerSnoreSound__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F99050, void, UpdateSnoreSound, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F991F0, void, Awakened, (BaurEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04718668, BaurEntity_Awakened__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F993F0, void, UpdateCurrentIdle, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F99900, void, Apply, (BaurEntity * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00F99910, IUberState__Array *, get_AffectingUberStates, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F999A0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (BaurEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F99B60, void, ResolveDamage, (BaurEntity * __this, DamageResult result));
IL2CPP_REGISTER_METHODINFO(0x04713048, BaurEntity_ResolveDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F99DA0, bool, CanInteractWithCharacter, (BaurEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00F9A110, void, __ctor, (BaurEntity * __this));
}
