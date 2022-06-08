#include <interception_macros.h>

namespace app::methods::System::ComponentModel::Win32Exception {
IL2CPP_REGISTER_METHOD(0x0295EA40, void, __ctor, (Win32Exception * __this));
IL2CPP_REGISTER_METHOD(0x0295EB20, void, __ctor, (Win32Exception * __this, int32_t error));
IL2CPP_REGISTER_METHOD(0x0295EBE0, void, __ctor, (Win32Exception * __this, int32_t error, String * message));
IL2CPP_REGISTER_METHOD(0x0295EC20, void, __ctor, (Win32Exception * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0295ED20, void, __ctor, (Win32Exception * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x0295EE30, void, __ctor, (Win32Exception * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_NativeErrorCode, (Win32Exception * __this));
IL2CPP_REGISTER_METHOD(0x0295EF00, void, GetObjectData, (Win32Exception * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04725A18, Win32Exception_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0295F000, String *, GetErrorMessage, (int32_t error));
IL2CPP_REGISTER_METHOD(0x0295F1E0, void, InitializeErrorMessages, ());
IL2CPP_REGISTER_METHOD(0x02960E20, void, __cctor, ());
}
