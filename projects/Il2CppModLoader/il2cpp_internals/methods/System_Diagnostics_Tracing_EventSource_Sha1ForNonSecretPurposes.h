#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventSource_Sha1ForNonSecretPurposes {
IL2CPP_REGISTER_METHOD(0x00154C30, void, Start, (EventSource_Sha1ForNonSecretPurposes__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00154C40, void, Append, (EventSource_Sha1ForNonSecretPurposes__Boxed * __this, uint8_t input));
IL2CPP_REGISTER_METHOD(0x00154C50, void, Append, (EventSource_Sha1ForNonSecretPurposes__Boxed * __this, Byte__Array * input));
IL2CPP_REGISTER_METHOD(0x00154C60, void, Finish, (EventSource_Sha1ForNonSecretPurposes__Boxed * __this, Byte__Array * output));
IL2CPP_REGISTER_METHOD(0x00154C70, void, Drain, (EventSource_Sha1ForNonSecretPurposes__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x019FD330, uint32_t, Rol1, (uint32_t input));
IL2CPP_REGISTER_METHOD(0x019FD340, uint32_t, Rol5, (uint32_t input));
IL2CPP_REGISTER_METHOD(0x019FD350, uint32_t, Rol30, (uint32_t input));
}
