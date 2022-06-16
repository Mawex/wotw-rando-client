#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::LicenseException {
    IL2CPP_REGISTER_METHOD(0x01FF0890, void, ctor_1, (app::LicenseException * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01FF09F0, void, ctor_2, (app::LicenseException * this_ptr, app::Type * type, app::Object * instance))
    IL2CPP_REGISTER_METHOD(0x01FF0BF0, void, ctor_3, (app::LicenseException * this_ptr, app::Type * type, app::Object * instance, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01FF0C40, void, ctor_4, (app::LicenseException * this_ptr, app::Type * type, app::Object * instance, app::String * message, app::Exception * inner_exception))
    IL2CPP_REGISTER_METHOD(0x01FF0C90, void, ctor_5, (app::LicenseException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Type *, get_LicensedType, (app::LicenseException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF0E10, void, GetObjectData, (app::LicenseException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x047422B8, LicenseException_GetObjectData__MethodInfo)
}
