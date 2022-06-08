#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::VRInteractionController {
IL2CPP_REGISTER_METHOD(0x002FB9B0, InteractionSystem *, get_interactionSystem, (VRInteractionController * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_interactionSystem, (VRInteractionController * __this, InteractionSystem * value));
IL2CPP_REGISTER_METHOD(0x0204BF60, float, get_triggerProgress, (VRInteractionController * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, InteractionTrigger *, get_currentTrigger, (VRInteractionController * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_currentTrigger, (VRInteractionController * __this, InteractionTrigger * value));
IL2CPP_REGISTER_METHOD(0x0204BF80, void, Start, (VRInteractionController * __this));
IL2CPP_REGISTER_METHOD(0x0204C010, void, LateUpdate, (VRInteractionController * __this));
IL2CPP_REGISTER_METHOD(0x0204C1A0, bool, CanTrigger, (VRInteractionController * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x008A2C20, void, __ctor, (VRInteractionController * __this));
}
