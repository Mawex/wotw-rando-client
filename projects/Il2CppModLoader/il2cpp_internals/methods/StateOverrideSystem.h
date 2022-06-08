#include <interception_macros.h>

namespace app::methods::StateOverrideSystem {
IL2CPP_REGISTER_METHOD(0x03146FE0, StateOverrideSystem *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (StateOverrideSystem * __this));
IL2CPP_REGISTER_METHOD(0x031472B0, void, SubmitDynamicStateOverride, (StateOverrideSystem * __this, IGenericUberState * uberState, float state));
IL2CPP_REGISTER_METHOD(0x03147580, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x031476A0, void, OnDestroy, (StateOverrideSystem * __this));
IL2CPP_REGISTER_METHOD(0x031476B0, void, SubmitDynamicStateOverride, (StateOverrideSystem * __this, IPassiveStateDescriptor * passiveStateDescriptor, int32_t state));
IL2CPP_REGISTER_METHOD(0x03147980, void, SubmitStaticStateOverride, (StateOverrideSystem * __this, IPassiveStateDescriptor * passiveStateDescriptor, int32_t state, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x03147C20, void, ClearState, (StateOverrideSystem * __this, IGenericUberState * uberState));
IL2CPP_REGISTER_METHOD(0x03147CE0, void, ClearState, (StateOverrideSystem * __this, IPassiveStateDescriptor * passiveStateDescriptor));
IL2CPP_REGISTER_METHOD(0x03147D10, void, ClearState, (StateOverrideSystem * __this, int32_t objectId));
IL2CPP_REGISTER_METHOD(0x03147EB0, void, ClearAll, (StateOverrideSystem * __this));
IL2CPP_REGISTER_METHOD(0x03147F90, void, ClearAllStates, ());
IL2CPP_REGISTER_METHOD(0x03148070, int32_t, GetPassiveStateDescriptorId, (StateOverrideSystem * __this, IPassiveStateDescriptor * passiveStateDescriptor));
IL2CPP_REGISTER_METHOD(0x031481C0, void, OnUpdate, (StateOverrideSystem * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x03148470, void, __ctor, (StateOverrideSystem * __this));
}
