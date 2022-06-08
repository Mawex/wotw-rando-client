#include <interception_macros.h>

namespace app::methods::PlayCharacterAnimation3D {
IL2CPP_REGISTER_METHOD(0x01177180, bool, ConsumeTerminationEvent, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHOD(0x011771A0, bool, ConsumeConditionEvent, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHOD(0x011771C0, void, Start, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHOD(0x01177630, void, OnDestroy, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHOD(0x01177AD0, void, Perform, (PlayCharacterAnimation3D * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011783B0, void, OnStartPlaying, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHODINFO(0x0476AB98, PlayCharacterAnimation3D_OnStartPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011784B0, bool, ContinuePlayingLoopCondition, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHODINFO(0x04700AA8, PlayCharacterAnimation3D_ContinuePlayingLoopCondition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011785C0, void, OnStopPlaying, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHODINFO(0x047936E0, PlayCharacterAnimation3D_OnStopPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00706210, bool, ShouldPlayAnimation, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHODINFO(0x04771B70, PlayCharacterAnimation3D_ShouldPlayAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011789A0, void, Stop, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHOD(0x01178A80, bool, get_IsPerforming, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHOD(0x01178BB0, bool, get_IsBlocking, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHOD(0x01178CC0, void, LateUpdate, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHOD(0x01178F00, void, OnAnimationEvent, (PlayCharacterAnimation3D * __this, String * receivedEventId));
IL2CPP_REGISTER_METHODINFO(0x047277A0, PlayCharacterAnimation3D_OnAnimationEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01178F60, void, EnterIdle, (PlayCharacterAnimation3D * __this));
IL2CPP_REGISTER_METHOD(0x01178F70, void, OnStringAnimationEvent, (PlayCharacterAnimation3D * __this, String * eventId));
IL2CPP_REGISTER_METHODINFO(0x04798848, PlayCharacterAnimation3D_OnStringAnimationEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011790B0, void, __ctor, (PlayCharacterAnimation3D * __this));
}
