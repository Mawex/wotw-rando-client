using namespace app;

namespace app::methods::System::Exception {
IL2CPP_REGISTER_METHOD(0x01A1AFC0, void, Init, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x01A1B110, void, __ctor, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x01A1B120, void, __ctor, (Exception * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01A1B150, void, __ctor, (Exception * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01A1B190, void, __ctor, (Exception * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04777818, Exception__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A1B4C0, String *, get_Message, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x01A1B600, IDictionary *, get_Data, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsImmutableAgileException, (Exception * e));
IL2CPP_REGISTER_METHOD(0x01A1B770, String *, GetClassName, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Exception *, get_InnerException, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x01A1B7C0, String *, get_StackTrace, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x01A1B800, String *, GetStackTrace, (Exception * __this, bool needFileInfo));
IL2CPP_REGISTER_METHOD(0x002FD760, void, SetErrorCode, (Exception * __this, int32_t hr));
IL2CPP_REGISTER_METHOD(0x01A1B850, String *, get_Source, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x01A1BAA0, String *, ToString, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x01A1BAB0, String *, ToString, (Exception * __this, bool needFileLineInfo, bool needMessage));
IL2CPP_REGISTER_METHOD(0x01A1BED0, void, GetObjectData, (Exception * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04754A88, Exception_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A1C2A0, void, OnDeserialized, (Exception * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x00502220, String *, StripFileInfo, (Exception * __this, String * stackTrace, bool isRemoteStackTrace));
IL2CPP_REGISTER_METHOD(0x01A1C410, void, RestoreExceptionDispatchInfo, (Exception * __this, ExceptionDispatchInfo * exceptionDispatchInfo));
IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_HResult, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x002FD760, void, set_HResult, (Exception * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01A1C4F0, Type *, GetType, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x01A1C500, String *, GetMessageFromNativeResources, (Exception_ExceptionMessageKind__Enum kind));
IL2CPP_REGISTER_METHOD(0x01A1C590, Exception *, FixRemotingException, (Exception * __this));
IL2CPP_REGISTER_METHOD(0x01A1C6D0, void, __cctor, (MethodInfo * method));
}
