#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::InteractionSystem_InteractionDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (InteractionSystem_InteractionDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (InteractionSystem_InteractionDelegate * __this, FullBodyBipedEffector__Enum effectorType, InteractionObject * interactionObject));
IL2CPP_REGISTER_METHOD(0x02A14570, IAsyncResult *, BeginInvoke, (InteractionSystem_InteractionDelegate * __this, FullBodyBipedEffector__Enum effectorType, InteractionObject * interactionObject, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (InteractionSystem_InteractionDelegate * __this, IAsyncResult * result));
}
