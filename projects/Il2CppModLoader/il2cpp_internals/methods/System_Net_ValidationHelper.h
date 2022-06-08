using namespace app;

namespace app::methods::System::Net::ValidationHelper {
IL2CPP_REGISTER_METHOD(0x020AD050, String__Array *, MakeEmptyArrayNull, (String__Array * stringArray));
IL2CPP_REGISTER_METHOD(0x020AD070, String *, MakeStringNull, (String * stringValue));
IL2CPP_REGISTER_METHOD(0x020AD090, String *, ExceptionMessage, (Exception * exception));
IL2CPP_REGISTER_METHOD(0x020AD1C0, String *, ToString, (Object * objectValue));
IL2CPP_REGISTER_METHOD(0x020AD3D0, String *, HashString, (Object * objectValue));
IL2CPP_REGISTER_METHOD(0x020AD4E0, bool, IsInvalidHttpString, (String * stringValue));
IL2CPP_REGISTER_METHOD(0x01E28500, bool, IsBlankString, (String * stringValue));
IL2CPP_REGISTER_METHOD(0x020AD5C0, bool, ValidateTcpPort, (int32_t port));
IL2CPP_REGISTER_METHOD(0x020AD5E0, bool, ValidateRange, (int32_t actual, int32_t fromAllowed, int32_t toAllowed));
IL2CPP_REGISTER_METHOD(0x020AD5F0, void, ValidateSegment, (ArraySegment_1_Byte_ segment));
IL2CPP_REGISTER_METHODINFO(0x04732C40, ValidationHelper_ValidateSegment__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020AD6F0, void, __cctor, (MethodInfo * method));
}
