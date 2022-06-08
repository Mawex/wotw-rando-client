using namespace app;

namespace app::methods::System::Version_VersionResult {
IL2CPP_REGISTER_METHOD(0x00249F60, void, Init, (Version_VersionResult__Boxed * __this, String * argumentName, bool canThrow));
IL2CPP_REGISTER_METHOD(0x00249F70, void, SetFailure, (Version_VersionResult__Boxed * __this, Version_ParseFailureKind__Enum failure));
IL2CPP_REGISTER_METHOD(0x00249F80, void, SetFailure, (Version_VersionResult__Boxed * __this, Version_ParseFailureKind__Enum failure, String * argument));
IL2CPP_REGISTER_METHODINFO(0x04759A98, Version_VersionResult_SetFailure_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00249F90, Exception *, GetVersionParseException, (Version_VersionResult__Boxed * __this));
}
