#include <interception_macros.h>

namespace app::methods::VerletSkinningModifier {
IL2CPP_REGISTER_METHOD(0x013C8070, void, Awake, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x013C8140, void, OnEnable, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitializeBonePostions, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdatePositions, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x013C8330, void, OnUpdatePhysics, (VerletSkinningModifier * __this, float delta));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv3, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv4, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsSuspended, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_IsSuspended, (VerletSkinningModifier * __this, bool value));
IL2CPP_REGISTER_METHOD(0x005035C0, SuspendableMask__Enum, get_Mask, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x013C84F0, void, set_Mask, (VerletSkinningModifier * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x013C8500, void, __ctor, (VerletSkinningModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
