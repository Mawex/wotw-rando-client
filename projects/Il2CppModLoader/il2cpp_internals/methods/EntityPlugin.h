#include <interception_macros.h>

namespace app::methods::EntityPlugin {
IL2CPP_REGISTER_METHOD(0x00C9F850, void, Awake, (EntityPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00C9F910, void, PlayCycle, (EntityPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00C9FF30, void, RecordCycle, (EntityPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00C9FFF0, void, Exit, (EntityPlugin * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (EntityPlugin * __this));
}
