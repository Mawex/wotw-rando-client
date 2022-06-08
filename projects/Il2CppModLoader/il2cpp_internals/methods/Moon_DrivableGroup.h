#include <interception_macros.h>

namespace app::methods::Moon::DrivableGroup {
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsActive, (DrivableGroup * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsActive, (DrivableGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03136590, void, RegisterDrivable, (DrivableGroup * __this, IDrivable * drivable));
IL2CPP_REGISTER_METHOD(0x03136670, void, UnregisterDrivable, (DrivableGroup * __this, IDrivable * drivable));
IL2CPP_REGISTER_METHOD(0x03136740, bool, Contains, (DrivableGroup * __this, IDrivable * drivable));
IL2CPP_REGISTER_METHOD(0x031367E0, String *, get_GroupName, (DrivableGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_GroupName, (DrivableGroup * __this, String * value));
IL2CPP_REGISTER_METHOD(0x03136930, int32_t, get_GroupSize, (DrivableGroup * __this));
IL2CPP_REGISTER_METHOD(0x031369C0, void, Pause, (DrivableGroup * __this));
IL2CPP_REGISTER_METHOD(0x03136C00, void, Resume, (DrivableGroup * __this));
IL2CPP_REGISTER_METHOD(0x00617EB0, void, Activate, (DrivableGroup * __this));
IL2CPP_REGISTER_METHOD(0x03136E40, void, Clear, (DrivableGroup * __this));
IL2CPP_REGISTER_METHOD(0x03136F40, void, __ctor, (DrivableGroup * __this));
}
