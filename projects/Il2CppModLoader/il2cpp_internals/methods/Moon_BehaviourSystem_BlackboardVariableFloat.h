#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::BlackboardVariableFloat {
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonType_1_System_Single_ *, GetMoonType, (BlackboardVariableFloat * __this));
IL2CPP_REGISTER_METHOD(0x03009CE0, float, GetValue, (BlackboardVariableFloat * __this));
IL2CPP_REGISTER_METHOD(0x03009D10, void, SetValue, (BlackboardVariableFloat * __this, float value));
IL2CPP_REGISTER_METHOD(0x03009D40, bool, get_IsValid, (BlackboardVariableFloat * __this));
IL2CPP_REGISTER_METHOD(0x03009D90, bool, get_IsStatic, (BlackboardVariableFloat * __this));
IL2CPP_REGISTER_METHOD(0x03009DB0, void, __ctor, (BlackboardVariableFloat * __this));
}
