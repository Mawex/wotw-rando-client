using namespace app;

namespace app::methods::MasterTimelineSequence_SceneEntry {
IL2CPP_REGISTER_METHOD(0x00A13C70, float, get_StartTime, (MasterTimelineSequence_SceneEntry * __this));
IL2CPP_REGISTER_METHOD(0x00A13CE0, void, set_StartTime, (MasterTimelineSequence_SceneEntry * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A13D90, float, get_EndTime, (MasterTimelineSequence_SceneEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_EndTime, (MasterTimelineSequence_SceneEntry * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724020, float, get_Speed, (MasterTimelineSequence_SceneEntry * __this));
IL2CPP_REGISTER_METHOD(0x00724030, void, set_Speed, (MasterTimelineSequence_SceneEntry * __this, float value));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_LastCachedDuration, (MasterTimelineSequence_SceneEntry * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_LastCachedDuration, (MasterTimelineSequence_SceneEntry * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A13DD0, float, get_Duration, (MasterTimelineSequence_SceneEntry * __this));
IL2CPP_REGISTER_METHOD(0x00A13F40, BaseAnimator *, get_Animator, (MasterTimelineSequence_SceneEntry * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasStartConstraint, (MasterTimelineSequence_SceneEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_HasStartConstraint, (MasterTimelineSequence_SceneEntry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasEndConstraint, (MasterTimelineSequence_SceneEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_HasEndConstraint, (MasterTimelineSequence_SceneEntry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeConstrainedTo, (MasterTimelineSequence_SceneEntry * __this, IEntry * clip));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetStartConstraint, (MasterTimelineSequence_SceneEntry * __this, IEntry * constraint));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetEndConstraint, (MasterTimelineSequence_SceneEntry * __this, IEntry * constraint, LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum anchor));
IL2CPP_REGISTER_METHOD(0x00420EE0, LegacyTimelineSequence_SequenceEntry_Constraint *, get_StartConstraint, (MasterTimelineSequence_SceneEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_StartConstraint, (MasterTimelineSequence_SceneEntry * __this, LegacyTimelineSequence_SequenceEntry_Constraint * value));
IL2CPP_REGISTER_METHOD(0x00420EE0, LegacyTimelineSequence_SequenceEntry_Constraint *, get_EndConstraint, (MasterTimelineSequence_SceneEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_EndConstraint, (MasterTimelineSequence_SceneEntry * __this, LegacyTimelineSequence_SequenceEntry_Constraint * value));
IL2CPP_REGISTER_METHOD(0x00A14220, void, __ctor, (MasterTimelineSequence_SceneEntry * __this));
}
