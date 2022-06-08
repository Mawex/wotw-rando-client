#include <interception_macros.h>

namespace app::methods::LightCanvasStateController {
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentPassiveStateApplied, (LightCanvasStateController * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsPassiveStateDescriptorValid, (LightCanvasStateController * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_FallbackPassiveState, (LightCanvasStateController * __this));
IL2CPP_REGISTER_METHOD(0x01149830, void, OnValidate, (LightCanvasStateController * __this));
IL2CPP_REGISTER_METHOD(0x01149850, void, CollectCanvases, (LightCanvasStateController * __this));
IL2CPP_REGISTER_METHOD(0x011498E0, void, UpdateStatesDefinitionOnChildren, (LightCanvasStateController * __this));
IL2CPP_REGISTER_METHOD(0x01149970, void, ApplyKnownState, (LightCanvasStateController * __this, int32_t stateGUID, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01149AE0, Int32__Array *, GetAllStateGUIDs, (LightCanvasStateController * __this));
IL2CPP_REGISTER_METHOD(0x01149C10, String *, GetStateName, (LightCanvasStateController * __this, int32_t stateGUID));
IL2CPP_REGISTER_METHOD(0x01149CC0, bool, HasStateGUID, (LightCanvasStateController * __this, int32_t stateGUID));
IL2CPP_REGISTER_METHOD(0x01149CE0, LightCanvasStateController_LightCanvasState *, GetStateByGuid, (LightCanvasStateController * __this, int32_t guid));
IL2CPP_REGISTER_METHOD(0x01149DE0, void, AddState, (LightCanvasStateController * __this));
IL2CPP_REGISTER_METHOD(0x01149F70, void, RemoveStateByIndex, (LightCanvasStateController * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0114A020, int32_t, GetNewGuid, (LightCanvasStateController * __this));
IL2CPP_REGISTER_METHOD(0x0114A310, void, __ctor, (LightCanvasStateController * __this));
}
