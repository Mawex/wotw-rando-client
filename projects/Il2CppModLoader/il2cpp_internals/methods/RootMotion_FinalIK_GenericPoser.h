#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::GenericPoser {
IL2CPP_REGISTER_METHOD(0x02064540, void, AutoMapping, (GenericPoser * __this));
IL2CPP_REGISTER_METHOD(0x02064960, void, StoreDefaultState, (GenericPoser * __this));
IL2CPP_REGISTER_METHOD(0x020649F0, void, FixTransforms, (GenericPoser * __this));
IL2CPP_REGISTER_METHOD(0x02064B70, Transform *, GetTargetNamed, (GenericPoser * __this, String * tName, Transform__Array * array));
IL2CPP_REGISTER_METHOD(0x02064C40, void, LateUpdate, (GenericPoser * __this));
IL2CPP_REGISTER_METHOD(0x02064DB0, void, __ctor, (GenericPoser * __this));
}
