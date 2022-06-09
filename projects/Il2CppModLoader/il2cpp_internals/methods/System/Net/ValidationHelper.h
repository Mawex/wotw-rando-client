#include <interception_macros.h>

namespace app::methods::System::Net::ValidationHelper {
    IL2CPP_REGISTER_METHOD(0x020AD050, app::String__Array *, MakeEmptyArrayNull, (app::String__Array * string_array));
    IL2CPP_REGISTER_METHOD(0x020AD070, app::String *, MakeStringNull, (app::String * string_value));
    IL2CPP_REGISTER_METHOD(0x020AD090, app::String *, ExceptionMessage, (app::Exception * exception));
    IL2CPP_REGISTER_METHOD(0x020AD1C0, app::String *, ToString, (app::Object * object_value));
    IL2CPP_REGISTER_METHOD(0x020AD3D0, app::String *, HashString, (app::Object * object_value));
    IL2CPP_REGISTER_METHOD(0x020AD4E0, bool, IsInvalidHttpString, (app::String * string_value));
    IL2CPP_REGISTER_METHOD(0x01E28500, bool, IsBlankString, (app::String * string_value));
    IL2CPP_REGISTER_METHOD(0x020AD5C0, bool, ValidateTcpPort, (int32_t port));
    IL2CPP_REGISTER_METHOD(0x020AD5E0, bool, ValidateRange, (int32_t actual, int32_t from_allowed, int32_t to_allowed));
    IL2CPP_REGISTER_METHOD(0x020AD5F0, void, ValidateSegment, (app::ArraySegment_1_Byte_ segment));
    IL2CPP_REGISTER_METHODINFO(0x04732C40, ValidationHelper_ValidateSegment__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x020AD6F0, void, __cctor, ());
}
