using namespace app;

namespace app::methods::CommandPressedCondition {
IL2CPP_REGISTER_METHOD(0x011DE880, bool, Validate, (CommandPressedCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011DEA00, bool, ValidateInput, (Input_Command__Enum button, CommandPressedCondition_ButtonStates__Enum state));
IL2CPP_REGISTER_METHOD(0x008223A0, void, __ctor, (CommandPressedCondition * __this));
}
