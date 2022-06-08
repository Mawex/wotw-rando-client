#include <interception_macros.h>

namespace app::methods::System::ComponentModel::InstallerTypeAttribute {
IL2CPP_REGISTER_METHOD(0x01FEED00, void, __ctor, (InstallerTypeAttribute * __this, Type * installerType));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (InstallerTypeAttribute * __this, String * typeName));
IL2CPP_REGISTER_METHOD(0x01FEED40, Type *, get_InstallerType, (InstallerTypeAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FEEE00, bool, Equals, (InstallerTypeAttribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (InstallerTypeAttribute * __this));
}
