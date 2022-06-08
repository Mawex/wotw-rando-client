#include <interception_macros.h>

namespace app::methods::TesterPlugin {
IL2CPP_REGISTER_METHOD(0x010E2B80, void, Awake, (TesterPlugin * __this));
IL2CPP_REGISTER_METHOD(0x010E2C40, void, PlayCycle, (TesterPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (TesterPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x010E32C0, void, Exit, (TesterPlugin * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (TesterPlugin * __this));
}
