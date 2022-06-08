#include <interception_macros.h>

namespace app::methods::ConceptScreen {
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (ConceptScreen * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (ConceptScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FD3F0, SuspendableMask__Enum, get_Mask, (ConceptScreen * __this));
IL2CPP_REGISTER_METHOD(0x011E2860, void, set_Mask, (ConceptScreen * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x011E2910, void, Awake, (ConceptScreen * __this));
IL2CPP_REGISTER_METHOD(0x011E2A60, void, OnDestroy, (ConceptScreen * __this));
IL2CPP_REGISTER_METHOD(0x011E2B60, void, ApplyImage, (ConceptScreen * __this));
IL2CPP_REGISTER_METHOD(0x011E2DE0, void, Activate, (ConceptScreen * __this, Texture * texture));
IL2CPP_REGISTER_METHOD(0x011E32F0, void, Deactivate, (ConceptScreen * __this));
IL2CPP_REGISTER_METHOD(0x011E35B0, void, FixedUpdate, (ConceptScreen * __this));
IL2CPP_REGISTER_METHOD(0x011E37C0, void, ChangeImage, (ConceptScreen * __this, int32_t e));
IL2CPP_REGISTER_METHOD(0x011E3990, void, __ctor, (ConceptScreen * __this));
}
