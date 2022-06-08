using namespace app;

namespace app::methods::System::ComponentModel::WarningException {
IL2CPP_REGISTER_METHOD(0x0295DC00, void, __ctor, (WarningException * __this));
IL2CPP_REGISTER_METHOD(0x0295DC30, void, __ctor, (WarningException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0295DC60, void, __ctor, (WarningException * __this, String * message, String * helpUrl));
IL2CPP_REGISTER_METHOD(0x01E259C0, void, __ctor, (WarningException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x0295DCA0, void, __ctor, (WarningException * __this, String * message, String * helpUrl, String * helpTopic));
IL2CPP_REGISTER_METHOD(0x0295DCE0, void, __ctor, (WarningException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FBC20, String *, get_HelpUrl, (WarningException * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, String *, get_HelpTopic, (WarningException * __this));
IL2CPP_REGISTER_METHOD(0x0295DE60, void, GetObjectData, (WarningException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04730A00, WarningException_GetObjectData__MethodInfo);
}
