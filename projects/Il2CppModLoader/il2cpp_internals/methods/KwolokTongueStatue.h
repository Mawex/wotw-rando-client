using namespace app;

namespace app::methods::KwolokTongueStatue {
IL2CPP_REGISTER_METHOD(0x012FD6B0, IByteUberState *, get_ResolvedUberState, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FD780, bool, get_StateIsSerialized, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FD870, bool, get_CanCollideWithAnotherTongue, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsBlocked, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00413170, void, set_IsBlocked, (KwolokTongueStatue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FD920, uint8_t, StateToByte, (KwolokTongueStatue_KwolowTongueStatueState__Enum state));
IL2CPP_REGISTER_METHOD(0x012FD930, KwolokTongueStatue_KwolowTongueStatueState__Enum, ByteToState, (uint8_t val));
IL2CPP_REGISTER_METHOD(0x012FD950, KwolokTongueStatue_TongueState *, GetTongueState, (KwolokTongueStatue * __this, KwolokTongueStatue_KwolowTongueStatueState__Enum state));
IL2CPP_REGISTER_METHOD(0x012FD970, KwolokTongueStatue_TongueState *, get_OpenedState, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FDAE0, KwolokTongueStatue_TongueState *, get_ClosedState, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FDC50, KwolokTongueStatue_TongueState *, get_PartiallyOpenedState, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FDDD0, void, OnValidate, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FE000, void, OnEnable, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FE1D0, void, OnDisable, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FE3A0, void, OnRestoreCheckpoint, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHODINFO(0x04743588, KwolokTongueStatue_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012FE510, void, Awake, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FE830, void, OnDestroy, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FE8F0, void, FixedUpdate, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FEA60, void, LateUpdate, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FEBC0, void, HandleBlocking, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FEC50, void, HandleTonguePlatformActivation, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FEEE0, bool, IsBlocking, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FF0E0, bool, IsCurrentOrTargetState, (KwolokTongueStatue * __this, KwolokTongueStatue_KwolowTongueStatueState__Enum state));
IL2CPP_REGISTER_METHOD(0x012FF100, void, ToggleSwitch, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FF120, void, TurnOn, (KwolokTongueStatue * __this, KwolokTongueStatue_KwolowTongueTriggerSource__Enum source));
IL2CPP_REGISTER_METHOD(0x012FF260, void, TurnOnPartially, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FF280, void, TurnOff, (KwolokTongueStatue * __this, KwolokTongueStatue_KwolowTongueTriggerSource__Enum source));
IL2CPP_REGISTER_METHOD(0x012FF360, void, SetDesiredState, (KwolokTongueStatue * __this, KwolokTongueStatue_KwolowTongueStatueState__Enum state));
IL2CPP_REGISTER_METHOD(0x012FF560, void, InterruptAllStates, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByBow, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00BB6AB0, bool, get_IsSuspended, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00BB6AC0, void, set_IsSuspended, (KwolokTongueStatue * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00413180, SuspendableMask__Enum, get_Mask, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FF5F0, void, set_Mask, (KwolokTongueStatue * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_BowPriority, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_BowEnableAutoTarget, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldArrowExplode, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FF6B0, Vector3, get_BowAutoTargetPosition, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldArrowBeReflected, (KwolokTongueStatue * __this, ArrowHitData hitData));
IL2CPP_REGISTER_METHOD(0x012FF890, bool, get_IsOn, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x012FF8B0, IDesiredUberState__Array *, GetRequirementsForTimeline, (KwolokTongueStatue * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x012FFCD0, void, OnRecieveDamage, (KwolokTongueStatue * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x01300080, void, Apply, (KwolokTongueStatue * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01300140, IUberState__Array *, get_AffectingUberStates, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x013001D0, GameObject *, GetDynamicGraphicTarget, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x005B0220, IDamageReciever__Array *, get_AffectedReceivers, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x013001F0, void, __ctor, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (KwolokTongueStatue * __this));
IL2CPP_REGISTER_METHOD(0x002FBD40, IMoonTypeResolver *, GetResolverForType, (KwolokTongueStatue * __this));
}
