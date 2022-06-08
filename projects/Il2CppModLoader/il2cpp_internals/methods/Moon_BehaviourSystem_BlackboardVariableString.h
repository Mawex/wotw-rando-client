#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::BlackboardVariableString {
IL2CPP_REGISTER_METHOD(0x002FB9B0, IMoonType_1_System_String_ *, GetMoonType, (BlackboardVariableString * __this));
IL2CPP_REGISTER_METHOD(0x0300A560, String *, GetValue, (BlackboardVariableString * __this));
IL2CPP_REGISTER_METHOD(0x0300A590, void, SetValue, (BlackboardVariableString * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0300A5C0, bool, get_IsValid, (BlackboardVariableString * __this));
IL2CPP_REGISTER_METHOD(0x0300A610, bool, get_IsStatic, (BlackboardVariableString * __this));
IL2CPP_REGISTER_METHOD(0x0300A630, void, __ctor, (BlackboardVariableString * __this));
}
