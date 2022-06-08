#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::PickUp2Handed {
IL2CPP_REGISTER_METHOD(0x0222B500, void, OnGUI, (PickUp2Handed * __this));
IL2CPP_REGISTER_METHOD(0x0222B6D0, void, Start, (PickUp2Handed * __this));
IL2CPP_REGISTER_METHOD(0x0222BAD0, void, OnPause, (PickUp2Handed * __this, FullBodyBipedEffector__Enum effectorType, InteractionObject * interactionObject));
IL2CPP_REGISTER_METHODINFO(0x04787850, PickUp2Handed_OnPause__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0222BD80, void, OnStart, (PickUp2Handed * __this, FullBodyBipedEffector__Enum effectorType, InteractionObject * interactionObject));
IL2CPP_REGISTER_METHODINFO(0x04799008, PickUp2Handed_OnStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0222BF40, void, OnDrop, (PickUp2Handed * __this, FullBodyBipedEffector__Enum effectorType, InteractionObject * interactionObject));
IL2CPP_REGISTER_METHODINFO(0x04774B40, PickUp2Handed_OnDrop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0222C0D0, void, LateUpdate, (PickUp2Handed * __this));
IL2CPP_REGISTER_METHOD(0x0222C5D0, bool, get_holding, (PickUp2Handed * __this));
IL2CPP_REGISTER_METHOD(0x0222C600, void, OnDestroy, (PickUp2Handed * __this));
IL2CPP_REGISTER_METHOD(0x0222CA30, void, __ctor, (PickUp2Handed * __this));
}
