using namespace app;

namespace app::methods::System::TimeZoneInfo_AdjustmentRule {
IL2CPP_REGISTER_METHOD(0x002FA280, DateTime, get_DateStart, (TimeZoneInfo_AdjustmentRule * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, DateTime, get_DateEnd, (TimeZoneInfo_AdjustmentRule * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, TimeSpan, get_DaylightDelta, (TimeZoneInfo_AdjustmentRule * __this));
IL2CPP_REGISTER_METHOD(0x027B9780, TimeZoneInfo_TransitionTime, get_DaylightTransitionStart, (TimeZoneInfo_AdjustmentRule * __this));
IL2CPP_REGISTER_METHOD(0x027B97A0, TimeZoneInfo_TransitionTime, get_DaylightTransitionEnd, (TimeZoneInfo_AdjustmentRule * __this));
IL2CPP_REGISTER_METHOD(0x027B97C0, bool, Equals, (TimeZoneInfo_AdjustmentRule * __this, TimeZoneInfo_AdjustmentRule * other));
IL2CPP_REGISTER_METHOD(0x027B9980, int32_t, GetHashCode, (TimeZoneInfo_AdjustmentRule * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TimeZoneInfo_AdjustmentRule * __this));
IL2CPP_REGISTER_METHOD(0x027B99A0, TimeZoneInfo_AdjustmentRule *, CreateAdjustmentRule, (DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TimeZoneInfo_TransitionTime daylightTransitionStart, TimeZoneInfo_TransitionTime daylightTransitionEnd));
IL2CPP_REGISTER_METHOD(0x027B9BE0, TimeZoneInfo_AdjustmentRule *, CreateAdjustmentRule, (DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TimeZoneInfo_TransitionTime daylightTransitionStart, TimeZoneInfo_TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta));
IL2CPP_REGISTER_METHOD(0x027B9C50, void, ValidateAdjustmentRule, (DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TimeZoneInfo_TransitionTime daylightTransitionStart, TimeZoneInfo_TransitionTime daylightTransitionEnd));
IL2CPP_REGISTER_METHODINFO(0x0477F588, TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027BA0A0, void, IDeserializationCallback_OnDeserialization, (TimeZoneInfo_AdjustmentRule * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x0477FBA8, TimeZoneInfo_AdjustmentRule_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027BA1C0, void, ISerializable_GetObjectData, (TimeZoneInfo_AdjustmentRule * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04730850, TimeZoneInfo_AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027BA380, void, __ctor, (TimeZoneInfo_AdjustmentRule * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0474BDA0, TimeZoneInfo_AdjustmentRule__ctor_1__MethodInfo);
}
