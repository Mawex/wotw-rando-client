#include <interception_macros.h>

namespace app::methods::Moon::ScalableAnimationPlayer {
IL2CPP_REGISTER_METHOD(0x003FC510, float, get_EffectiveSpeed, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAC3E0, float, get_PreviewDuration, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_ShouldUpdatePreviewDuration, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00757000, void, set_ShouldUpdatePreviewDuration, (ScalableAnimationPlayer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01BAC410, bool, get_UseSimulationDataForPreview, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00756FF0, void, set_UseSimulationDataForPreview, (ScalableAnimationPlayer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01BAC4B0, float, get_AnimationOriginalDuration, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00D6DA00, void, OnValidate, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAC590, void, OnActiveAnimationStopEvent, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAC5D0, bool, HasFinished, (ScalableAnimationPlayer * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00B83350, void, SetSpeed, (ScalableAnimationPlayer * __this, float speed));
IL2CPP_REGISTER_METHOD(0x01BAC740, void, OnStartPlayback, (ScalableAnimationPlayer * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01BAC8A0, void, OnUpdateEntity, (ScalableAnimationPlayer * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01BACA40, void, UpdateMarkers, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BACBC0, void, SynchronizeData, (ScalableAnimationPlayer * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01BACE30, bool, get_HasCustomEvents, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BACEC0, float, get_FrameStep, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, RecordableParsingGroup__Enum, get_ParsingGroup, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAD000, void, CollectEvents, (ScalableAnimationPlayer * __this, List_1_Moon_Timeline_IEventDescriptor_ * events));
IL2CPP_REGISTER_METHOD(0x01BAD160, Single__Array *, GetEventPreviewTimes, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAD270, bool, ApproximateEvent, (ScalableAnimationPlayer * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x01BAD4D0, void, UpdateIntervals, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAD910, float, SnapNormalizedTime, (ScalableAnimationPlayer * __this, float value));
IL2CPP_REGISTER_METHOD(0x01BADAE0, void, UpdatePreviewDuration, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BADCD0, void, GetNextIntervalFrom, (ScalableAnimationPlayer * __this, float time, float * start, float * end, bool * scalable));
IL2CPP_REGISTER_METHOD(0x01BADF20, float, GetSpeedForNormalizedTime, (ScalableAnimationPlayer * __this, float time));
IL2CPP_REGISTER_METHOD(0x01BADF90, EntityId, AddNewEvent, (ScalableAnimationPlayer * __this));
IL2CPP_REGISTER_METHOD(0x01BAE310, void, RemoveEventById, (ScalableAnimationPlayer * __this, EntityId id));
IL2CPP_REGISTER_METHOD(0x01BAE400, void, RegisterCustomPreview, (ScalableAnimationPlayer * __this, float time, float normalizedTime));
IL2CPP_REGISTER_METHOD(0x01BAE830, float, GetNormalizedPreviewTimeForTime, (ScalableAnimationPlayer * __this, float time));
IL2CPP_REGISTER_METHOD(0x01BAEB10, void, GetBestInterval, (ScalableAnimationPlayer * __this, float time, int32_t * leftIndex, int32_t * rightIndex));
IL2CPP_REGISTER_METHOD(0x01BAEC70, void, __ctor, (ScalableAnimationPlayer * __this));
}
