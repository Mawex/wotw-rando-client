#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::InteractionSystem_InteractionEventDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (InteractionSystem_InteractionEventDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C795D0, void, Invoke, (InteractionSystem_InteractionEventDelegate * __this, FullBodyBipedEffector__Enum effectorType, InteractionObject * interactionObject, InteractionObject_InteractionEvent * interactionEvent));
IL2CPP_REGISTER_METHOD(0x02A14640, IAsyncResult *, BeginInvoke, (InteractionSystem_InteractionEventDelegate * __this, FullBodyBipedEffector__Enum effectorType, InteractionObject * interactionObject, InteractionObject_InteractionEvent * interactionEvent, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (InteractionSystem_InteractionEventDelegate * __this, IAsyncResult * result));
}
