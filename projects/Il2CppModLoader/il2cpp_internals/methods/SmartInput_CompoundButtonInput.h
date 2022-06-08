#include <interception_macros.h>

namespace app::methods::SmartInput::CompoundButtonInput {
IL2CPP_REGISTER_METHOD(0x006CA840, void, __ctor, (CompoundButtonInput * __this, IButtonInput__Array * inputs));
IL2CPP_REGISTER_METHOD(0x00597BD0, void, __ctor, (CompoundButtonInput * __this));
IL2CPP_REGISTER_METHOD(0x006CA8E0, bool, GetValue, (CompoundButtonInput * __this));
IL2CPP_REGISTER_METHOD(0x006CA9F0, void, DeclareSources, (CompoundButtonInput * __this, InputCacheManager * manager));
IL2CPP_REGISTER_METHOD(0x006CAB40, IButtonInput *, GetLastPressed, (CompoundButtonInput * __this));
IL2CPP_REGISTER_METHOD(0x006CABE0, void, Add, (CompoundButtonInput * __this, IButtonInput * button));
IL2CPP_REGISTER_METHOD(0x006CADA0, void, Remove, (CompoundButtonInput * __this, IButtonInput * button));
IL2CPP_REGISTER_METHOD(0x002FBAF0, void, Clear, (CompoundButtonInput * __this));
IL2CPP_REGISTER_METHOD(0x006CAE40, bool, ContainsKey, (CompoundButtonInput * __this, KeyCode__Enum code));
}
