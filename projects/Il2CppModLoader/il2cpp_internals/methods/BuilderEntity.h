#include <interception_macros.h>

namespace app::methods::BuilderEntity {
IL2CPP_REGISTER_METHOD(0x00816030, ITimelineEntity *, get_CurrentProject, (BuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x00816170, MessageProvider *, get_FinishedProjectMessage, (BuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x008162B0, BuilderEntity *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00816330, void, set_Instance, (BuilderEntity * value));
IL2CPP_REGISTER_METHOD(0x008163C0, void, Awake, (BuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x008163F0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00816400, String *, get_DialogActorName, (BuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x00816480, String *, get_InteractionActorName, (BuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x00816500, void, PlayIdleAnimation, (BuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x00816750, void, LateUpdate, (BuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x008167A0, void, OnUpdate, (BuilderEntity * __this));
IL2CPP_REGISTER_METHOD(0x008168D0, void, OnInteractionStart, (BuilderEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x008168F0, void, OnInteractionEnd, (BuilderEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x004173E0, void, __ctor, (BuilderEntity * __this));
}
