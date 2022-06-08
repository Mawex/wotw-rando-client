#include <interception_macros.h>

namespace app::methods::ServerAnimatorHelper {
IL2CPP_REGISTER_METHOD(0x00AB9510, ServerAnimatorHelper_BaseAnimatorData, CreateBaseAnimatorData, (BaseAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00AB9660, void, ApplyBaseAnimatorData, (ServerAnimatorHelper_BaseAnimatorData animatorData, BaseAnimator * * animator));
IL2CPP_REGISTER_METHOD(0x00AB9700, ServerAnimatorHelper_SequenceEntryData, CreateSequenceEntryData, (LegacyTimelineSequence_SequenceEntry * entry));
IL2CPP_REGISTER_METHOD(0x00AB9870, void, ApplySequenceEntryData, (ServerAnimatorHelper_SequenceEntryData data, LegacyTimelineSequence_SequenceEntry * * entry));
IL2CPP_REGISTER_METHOD(0x00AB9920, ServerAnimatorHelper_ConstraintData, CreateConstraintData, (LegacyTimelineSequence_SequenceEntry_Constraint * constraint));
IL2CPP_REGISTER_METHOD(0x00AB9A30, void, ApplyConstraintData, (ServerAnimatorHelper_ConstraintData data, LegacyTimelineSequence_SequenceEntry_Constraint * * contraint));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ServerAnimatorHelper * __this));
}
