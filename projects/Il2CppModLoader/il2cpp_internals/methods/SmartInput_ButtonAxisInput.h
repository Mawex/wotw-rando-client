using namespace app;

namespace app::methods::SmartInput::ButtonAxisInput {
IL2CPP_REGISTER_METHOD(0x006CA160, void, __ctor, (ButtonAxisInput * __this, IButtonInput * buttonInput, ButtonAxisInput_Mode__Enum mode));
IL2CPP_REGISTER_METHOD(0x006CA130, void, DeclareSources, (ButtonAxisInput * __this, InputCacheManager * manager));
IL2CPP_REGISTER_METHOD(0x006CA1A0, float, GetValue, (ButtonAxisInput * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, IButtonInput *, GetButtonInput, (ButtonAxisInput * __this));
IL2CPP_REGISTER_METHOD(0x006CA2A0, bool, get_Positive, (ButtonAxisInput * __this));
}
