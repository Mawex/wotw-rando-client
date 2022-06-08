#include <interception_macros.h>

namespace app::methods::System::ComponentModel::LicenseException {
IL2CPP_REGISTER_METHOD(0x01FF0890, void, __ctor, (LicenseException * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01FF09F0, void, __ctor, (LicenseException * __this, Type * type, Object * instance));
IL2CPP_REGISTER_METHOD(0x01FF0BF0, void, __ctor, (LicenseException * __this, Type * type, Object * instance, String * message));
IL2CPP_REGISTER_METHOD(0x01FF0C40, void, __ctor, (LicenseException * __this, Type * type, Object * instance, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01FF0C90, void, __ctor, (LicenseException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FBC20, Type *, get_LicensedType, (LicenseException * __this));
IL2CPP_REGISTER_METHOD(0x01FF0E10, void, GetObjectData, (LicenseException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x047422B8, LicenseException_GetObjectData__MethodInfo);
}
