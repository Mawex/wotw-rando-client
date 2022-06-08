#include <interception_macros.h>

namespace app::methods::RigidbodyInteractionController {
IL2CPP_REGISTER_METHOD(0x00912560, void, OnCollisionEnter, (RigidbodyInteractionController * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00912600, void, OnCollisionStay, (RigidbodyInteractionController * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00912670, void, OnCollisionExit, (RigidbodyInteractionController * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x009126E0, void, OnApplyForce, (RigidbodyInteractionController * __this, Vector3 force));
IL2CPP_REGISTER_METHOD(0x00912880, void, HandleCollision, (RigidbodyInteractionController * __this, RigidbodyInteractionController_InteractionInformation interactionInformation, RigidbodyInteractionController_InstanciationInteractionSettings__Array * collisionInstanciationSettings, RigidbodyInteractionController_SoundInteractionSettings__Array * collisionSoundSettings));
IL2CPP_REGISTER_METHOD(0x00913670, float, GetRemappedModulationValue, (RigidbodyInteractionController * __this, Rect rangeRemapping, float inputParameter));
IL2CPP_REGISTER_METHOD(0x00913740, void, __ctor, (RigidbodyInteractionController * __this));
IL2CPP_REGISTER_METHOD(0x00913760, void, __cctor, ());
}
