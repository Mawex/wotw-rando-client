using namespace app;

namespace app::methods::System::TimeZoneInfo_TransitionTime {
IL2CPP_REGISTER_METHOD(0x00107C00, DateTime, get_TimeOfDay, (TimeZoneInfo_TransitionTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00114120, int32_t, get_Month, (TimeZoneInfo_TransitionTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00114130, int32_t, get_Week, (TimeZoneInfo_TransitionTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001C5DE0, int32_t, get_Day, (TimeZoneInfo_TransitionTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001155B0, DayOfWeek__Enum, get_DayOfWeek, (TimeZoneInfo_TransitionTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113140, bool, get_IsFixedDateRule, (TimeZoneInfo_TransitionTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00203D30, bool, Equals, (TimeZoneInfo_TransitionTime__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x027BA6A0, bool, operator___, (TimeZoneInfo_TransitionTime t1, TimeZoneInfo_TransitionTime t2));
IL2CPP_REGISTER_METHOD(0x00203E20, bool, Equals, (TimeZoneInfo_TransitionTime__Boxed * __this, TimeZoneInfo_TransitionTime other));
IL2CPP_REGISTER_METHOD(0x00203E50, int32_t, GetHashCode, (TimeZoneInfo_TransitionTime__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x027BA850, TimeZoneInfo_TransitionTime, CreateFixedDateRule, (DateTime timeOfDay, int32_t month, int32_t day));
IL2CPP_REGISTER_METHOD(0x027BA8F0, TimeZoneInfo_TransitionTime, CreateFloatingDateRule, (DateTime timeOfDay, int32_t month, int32_t week, DayOfWeek__Enum dayOfWeek));
IL2CPP_REGISTER_METHOD(0x027BA9A0, TimeZoneInfo_TransitionTime, CreateTransitionTime, (DateTime timeOfDay, int32_t month, int32_t week, int32_t day, DayOfWeek__Enum dayOfWeek, bool isFixedDateRule));
IL2CPP_REGISTER_METHOD(0x027BAA60, void, ValidateTransitionTime, (DateTime timeOfDay, int32_t month, int32_t week, int32_t day, DayOfWeek__Enum dayOfWeek));
IL2CPP_REGISTER_METHODINFO(0x047303E8, TimeZoneInfo_TransitionTime_ValidateTransitionTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00203E60, void, IDeserializationCallback_OnDeserialization, (TimeZoneInfo_TransitionTime__Boxed * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x04792BD8, TimeZoneInfo_TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00203E70, void, ISerializable_GetObjectData, (TimeZoneInfo_TransitionTime__Boxed * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04710AC8, TimeZoneInfo_TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00203FD0, void, __ctor, (TimeZoneInfo_TransitionTime__Boxed * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04750B68, TimeZoneInfo_TransitionTime__ctor__MethodInfo);
}
