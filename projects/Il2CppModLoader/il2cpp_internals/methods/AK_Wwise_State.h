#include <interception_macros.h>

namespace app::methods::AK::Wwise::State {
IL2CPP_REGISTER_METHOD(0x0043D9A0, WwiseObjectType__Enum, get_WwiseObjectType, (State * __this));
IL2CPP_REGISTER_METHOD(0x00AB4D20, WwiseObjectType__Enum, get_WwiseObjectGroupType, (State * __this));
IL2CPP_REGISTER_METHOD(0x026C3530, void, SetValue, (State * __this));
IL2CPP_REGISTER_METHOD(0x026C3610, void, SetValueFast, (uint32_t id, uint32_t groupID));
IL2CPP_REGISTER_METHOD(0x026C36E0, void, SetValueSpecific, (State * __this, uint32_t id));
IL2CPP_REGISTER_METHOD(0x026C37B0, uint32_t, GetGroupsCurrentState, (State * __this));
IL2CPP_REGISTER_METHOD(0x026C39A0, void, __ctor, (State * __this));
}
