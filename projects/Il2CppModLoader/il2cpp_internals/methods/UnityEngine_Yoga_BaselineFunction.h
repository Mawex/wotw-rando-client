#include <interception_macros.h>

namespace app::methods::UnityEngine::Yoga::BaselineFunction {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BaselineFunction * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x031BD4F0, float, Invoke, (BaselineFunction * __this, YogaNode * node, float width, float height));
IL2CPP_REGISTER_METHOD(0x031BDAC0, IAsyncResult *, BeginInvoke, (BaselineFunction * __this, YogaNode * node, float width, float height, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, (BaselineFunction * __this, IAsyncResult * result));
}
