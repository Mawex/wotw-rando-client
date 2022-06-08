#include <interception_macros.h>

namespace app::methods::LegacyTimelineSequence_SequenceEntry {
IL2CPP_REGISTER_METHOD(0x002FA280, BaseAnimator *, get_Animator, (LegacyTimelineSequence_SequenceEntry * __this));
IL2CPP_REGISTER_METHOD(0x01127030, float, get_Speed, (LegacyTimelineSequence_SequenceEntry * __this));
IL2CPP_REGISTER_METHOD(0x00724010, void, set_Speed, (LegacyTimelineSequence_SequenceEntry * __this, float value));
IL2CPP_REGISTER_METHOD(0x01127060, bool, get_HasStartConstraint, (LegacyTimelineSequence_SequenceEntry * __this));
IL2CPP_REGISTER_METHOD(0x01127110, bool, get_HasEndConstraint, (LegacyTimelineSequence_SequenceEntry * __this));
IL2CPP_REGISTER_METHOD(0x011271C0, float, get_StartTime, (LegacyTimelineSequence_SequenceEntry * __this));
IL2CPP_REGISTER_METHOD(0x01127230, void, set_StartTime, (LegacyTimelineSequence_SequenceEntry * __this, float value));
IL2CPP_REGISTER_METHOD(0x01127370, float, get_EndTime, (LegacyTimelineSequence_SequenceEntry * __this));
IL2CPP_REGISTER_METHOD(0x01127430, float, get_Duration, (LegacyTimelineSequence_SequenceEntry * __this));
IL2CPP_REGISTER_METHOD(0x011275F0, void, SetStartConstraint, (LegacyTimelineSequence_SequenceEntry * __this, LegacyTimelineSequence_SequenceEntry * constraint, LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum anchor));
IL2CPP_REGISTER_METHOD(0x011277B0, void, SetEndConstraint, (LegacyTimelineSequence_SequenceEntry * __this, LegacyTimelineSequence_SequenceEntry * constraint, LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum anchor));
IL2CPP_REGISTER_METHOD(0x01127830, bool, CanBeConstrainedTo, (LegacyTimelineSequence_SequenceEntry * __this, LegacyTimelineSequence_SequenceEntry * constraint));
IL2CPP_REGISTER_METHOD(0x01127A40, void, OnAfterDeserialize, (LegacyTimelineSequence_SequenceEntry * __this, LegacyTimelineSequence * sequence));
IL2CPP_REGISTER_METHOD(0x01127C70, void, __ctor, (LegacyTimelineSequence_SequenceEntry * __this));
}
