using namespace app;

namespace app::methods::Cheat {
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor, (Cheat * __this, Input_InputButtonProcessor__Array * combination, Action * action, Func_1_Boolean_ * condition));
IL2CPP_REGISTER_METHOD(0x0131C520, bool, IsFirstInCombination, (Cheat * __this));
IL2CPP_REGISTER_METHOD(0x0131C580, bool, CanContinue, (Cheat * __this));
IL2CPP_REGISTER_METHOD(0x0131C5E0, void, GoNext, (Cheat * __this));
IL2CPP_REGISTER_METHOD(0x0073DA30, void, Reset, (Cheat * __this));
IL2CPP_REGISTER_METHOD(0x0131C5F0, bool, IsStarted, (Cheat * __this));
IL2CPP_REGISTER_METHOD(0x0131C600, bool, IsFinished, (Cheat * __this));
IL2CPP_REGISTER_METHOD(0x0131C630, void, Perform, (Cheat * __this));
}
