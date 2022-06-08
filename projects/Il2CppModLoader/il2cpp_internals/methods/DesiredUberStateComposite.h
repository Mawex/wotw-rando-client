#include <interception_macros.h>

namespace app::methods::DesiredUberStateComposite {
IL2CPP_REGISTER_METHOD(0x01B58540, void, WriteDesiredStates, (DesiredUberStateComposite * __this));
IL2CPP_REGISTER_METHOD(0x01B58660, void, Revert, (DesiredUberStateComposite * __this));
IL2CPP_REGISTER_METHOD(0x01B58780, IUberState *, get_UberState, (DesiredUberStateComposite * __this));
IL2CPP_REGISTER_METHOD(0x01B58820, bool, IsEmpty, (DesiredUberStateComposite * __this));
IL2CPP_REGISTER_METHOD(0x01B588E0, bool, IsFulfilled, (DesiredUberStateComposite * __this));
IL2CPP_REGISTER_METHOD(0x01B58A10, List_1_Moon_IUberState_ *, GetAllDescriptors, (DesiredUberStateComposite * __this));
IL2CPP_REGISTER_METHOD(0x01B58F90, void, WriteDesiredStateForList, (DesiredUberStateComposite * __this, IDesiredUberState__Array * requirements));
IL2CPP_REGISTER_METHOD(0x01B59100, void, RevertStateForList, (DesiredUberStateComposite * __this, IDesiredUberState__Array * requirements));
IL2CPP_REGISTER_METHOD(0x01B59270, bool, IsListFullfilled, (DesiredUberStateComposite * __this, IDesiredUberState__Array * requirements));
IL2CPP_REGISTER_METHOD(0x01B59350, String *, get_NiceName, (DesiredUberStateComposite * __this));
IL2CPP_REGISTER_METHOD(0x01B593D0, void, __ctor, (DesiredUberStateComposite * __this));
}
