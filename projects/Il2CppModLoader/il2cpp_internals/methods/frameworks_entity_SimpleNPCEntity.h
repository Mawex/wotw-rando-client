using namespace app;

namespace app::methods::frameworks::entity::SimpleNPCEntity {
IL2CPP_REGISTER_METHOD(0x00F5BA90, Vector2, get_EffectivePlayerAnchor, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x047605F0, SimpleNPCEntity_get_EffectivePlayerAnchor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CA2550, bool, get_IsInteracting, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00CA2560, void, set_IsInteracting, (SimpleNPCEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F5BED0, bool, get_IsInInteractionRange, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F5C0E0, Sensor *, get_Sensor, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417920, CharacterInteractableType__Enum, get_InteractableType, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F5C1B0, void, OnEnable, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F5C250, void, OnDisable, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F5C2F0, void, OnAwake, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F5C300, bool, CanInteractWithCharacter, (SimpleNPCEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00F5C450, void, OnInteractionStart, (SimpleNPCEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00F5C730, void, MoveOriToAnchor, (SimpleNPCEntity * __this, Action_1_Boolean_ * onFinished));
IL2CPP_REGISTER_METHOD(0x00F5CAB0, void, EnableCameraZone, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F5CC10, void, DisableCameraZone, (SimpleNPCEntity * __this, bool imediate));
IL2CPP_REGISTER_METHOD(0x00F5CDD0, void, OnInteractionEffectivelyStart, (SimpleNPCEntity * __this, bool arrivedToDestination));
IL2CPP_REGISTER_METHODINFO(0x047928F8, SimpleNPCEntity_OnInteractionEffectivelyStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F5CEB0, void, FinishInteraction, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F5CFC0, void, InteractionUpdate, (SimpleNPCEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00F5D190, void, OnInteractionEnd, (SimpleNPCEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00F5D270, bool, ShouldFinishInteraction, (SimpleNPCEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00420EE0, CharacterInteractableActivationMode__Enum, get_ActivationMode, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F5D440, Input_InputButtonProcessor *, get_ActivationButton, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, MessageProvider *, get_InteractionMessageHint, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_DialogActorName, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, MoonAnimator *, get_DialogActorAnimator, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F5D4E0, Vector2, get_DialogActorPosition, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_InteractionActorName, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, MoonAnimator *, get_InteractionActorAnimator, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_InteractionActorPosition, (SimpleNPCEntity * __this));
IL2CPP_REGISTER_METHOD(0x00F5D640, void, __ctor, (SimpleNPCEntity * __this));
}
