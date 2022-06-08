#include <interception_macros.h>

namespace app::methods::StomperTrigger {
IL2CPP_REGISTER_METHOD(0x0065C110, void, OnTriggerEnter, (StomperTrigger * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0065C110, void, OnTriggerStay, (StomperTrigger * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0065C120, void, PerformTrigger, (StomperTrigger * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (StomperTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004C8610, void, __ctor, (StomperTrigger * __this));
}
