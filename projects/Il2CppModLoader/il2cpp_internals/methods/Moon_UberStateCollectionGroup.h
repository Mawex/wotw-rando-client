#include <interception_macros.h>

namespace app::methods::Moon::UberStateCollectionGroup {
IL2CPP_REGISTER_METHOD(0x01B691F0, IUberState *, GetState, (UberStateCollectionGroup * __this, UberID * id));
IL2CPP_REGISTER_METHOD(0x01B692F0, void, Add, (UberStateCollectionGroup * __this, UberID * id, IUberState * uberStateDescriptor));
IL2CPP_REGISTER_METHOD(0x01B69520, void, __ctor, (UberStateCollectionGroup * __this));
}
