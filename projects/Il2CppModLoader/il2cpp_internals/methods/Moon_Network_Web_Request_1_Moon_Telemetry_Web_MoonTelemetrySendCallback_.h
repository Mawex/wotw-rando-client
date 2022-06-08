#include <interception_macros.h>

namespace app::methods::Moon::Network::Web::Request_1_Moon::Telemetry::Web::MoonTelemetrySendCallback_ {
IL2CPP_REGISTER_METHOD(0x002FB960, void, SetPath, (Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * __this, String * path));
IL2CPP_REGISTER_METHODINFO(0x04715080, Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback__SetPath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0052A000, void, SetMethod, (Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * __this, Method__Enum method_1));
IL2CPP_REGISTER_METHODINFO(0x04741F80, Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback__SetMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02722930, void, SetDataReader, (Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * __this, IDataReader * dataReader));
IL2CPP_REGISTER_METHODINFO(0x04739278, Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback__SetDataReader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02722770, void, Send, (Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * __this, Action_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * callback));
IL2CPP_REGISTER_METHODINFO(0x04765E60, Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback__Send__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Path, (Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, Method__Enum, get_Method, (Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, IDataReader *, get_DataReader, (Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Dictionary_2_System_String_System_String_ *, get_Headers, (Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * __this));
IL2CPP_REGISTER_METHOD(0x027229E0, IRequestCallback *, CreateRequestCallbackObject, (Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * __this));
IL2CPP_REGISTER_METHOD(0x02722AA0, void, Finish, (Request_1_Moon_Telemetry_Web_MoonTelemetrySendCallback_ * __this, IRequestCallback * result));
}
