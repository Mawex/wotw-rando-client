using namespace app;

namespace app::methods::MoonTelemetry {
IL2CPP_REGISTER_METHOD(0x02E9B450, String *, CleanName, (String * name));
IL2CPP_REGISTER_METHOD(0x02E9B520, MoonTelemetry_State__Enum, get_CurrentState, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonTelemetry * __this));
IL2CPP_REGISTER_METHOD(0x01A93850, void, Finalize, (MoonTelemetry * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ChangeState, (MoonTelemetry_State__Enum state));
IL2CPP_REGISTER_METHOD(0x002FA000, void, TryChangeState, (MoonTelemetry_State__Enum state));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartThread, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StopThread, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9B5C0, bool, get_AllowTelemetry, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9B660, void, set_AllowTelemetry, (bool value));
IL2CPP_REGISTER_METHOD(0x02E9B710, void, Send, (MoonTelemetryEvent * moonTelemetryEvent));
IL2CPP_REGISTER_METHOD(0x02E9B900, void, Post, (int32_t typeID, String * eventname, int32_t sequenceID, DateTime timestampUTC, Object * payload));
IL2CPP_REGISTER_METHOD(0x02E9BBE0, void, MoonTelemetryMain, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9D630, void, Sleep, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9D640, void, SetupTimeout, (TimeSpan delay));
IL2CPP_REGISTER_METHOD(0x02E9D740, void, add_OnStartThread, (Action * value));
IL2CPP_REGISTER_METHOD(0x02E9D880, void, remove_OnStartThread, (Action * value));
IL2CPP_REGISTER_METHOD(0x02E9D9C0, void, add_OnStopThread, (Action * value));
IL2CPP_REGISTER_METHOD(0x02E9DB00, void, remove_OnStopThread, (Action * value));
IL2CPP_REGISTER_METHOD(0x02E9DC40, void, OnApplicationQuit, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9DCD0, void, OnDomainUnload, (Object * obj, EventArgs * args));
IL2CPP_REGISTER_METHOD(0x02E9DD60, void, PlaymodeUpdateSafe, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9DE00, void, PlaymodeUpdate, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9E060, void, ShowResponseErrorLog, (int32_t statusCode, int32_t tryCount, Exception * error, IRequest * request));
IL2CPP_REGISTER_METHOD(0x02E9E440, int32_t, get_TotalSends, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9E4E0, int32_t, get_PendingEventsMaxCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9E580, int32_t, get_PostDataQueueMaxCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9E620, List_1_System_String_ *, GetAndClearExceptions, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9E700, Dictionary_2_System_Int32_System_Int32_ *, get_ResponseCodesCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E9E7A0, void, __cctor, (MethodInfo * method));
}
