#include <interception_macros.h>

namespace app::methods::SmartInput::CompoundAxisInput {
IL2CPP_REGISTER_METHOD(0x006CA3B0, void, __ctor, (CompoundAxisInput * __this, IAxisInput__Array * inputs));
IL2CPP_REGISTER_METHOD(0x00597BC0, void, __ctor, (CompoundAxisInput * __this));
IL2CPP_REGISTER_METHOD(0x006CA3E0, float, GetValue, (CompoundAxisInput * __this));
IL2CPP_REGISTER_METHOD(0x006CA5F0, void, DeclareSources, (CompoundAxisInput * __this, InputCacheManager * manager));
IL2CPP_REGISTER_METHOD(0x006CA670, IAxisInput *, GetLastPressed, (CompoundAxisInput * __this));
IL2CPP_REGISTER_METHOD(0x006CA6B0, void, Add, (CompoundAxisInput * __this, IAxisInput * axis));
IL2CPP_REGISTER_METHOD(0x002FBAF0, void, Clear, (CompoundAxisInput * __this));
}
