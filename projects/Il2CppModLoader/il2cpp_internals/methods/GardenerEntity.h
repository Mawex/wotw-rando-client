using namespace app;

namespace app::methods::GardenerEntity {
IL2CPP_REGISTER_METHOD(0x00416C40, ITimelineEntity *, get_CurrentProject, (GardenerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00416D80, MessageProvider *, get_FinishedProjectMessage, (GardenerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00416EB0, MoonAnimation *, get_TalkIdleAnimation, (GardenerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00416F20, GardenerEntity *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00416FA0, void, set_Instance, (GardenerEntity * value));
IL2CPP_REGISTER_METHOD(0x00417030, void, Awake, (GardenerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417050, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417060, String *, get_DialogActorName, (GardenerEntity * __this));
IL2CPP_REGISTER_METHOD(0x004170E0, String *, get_InteractionActorName, (GardenerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417160, void, OnUpdate, (GardenerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417260, bool, get_CanEffectivelyStartInteraction, (GardenerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00417380, void, OnInteractionStart, (GardenerEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x004173A0, void, OnInteractionEnd, (GardenerEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x004173E0, void, __ctor, (GardenerEntity * __this));
}
