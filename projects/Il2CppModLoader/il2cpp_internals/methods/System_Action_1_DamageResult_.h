#include <interception_macros.h>

namespace app::methods::System::Action_1_DamageResult_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Action_1_DamageResult_ * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHODINFO(0x04795948, Action_1_DamageResult___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke, (Action_1_DamageResult_ * __this, DamageResult obj));
IL2CPP_REGISTER_METHODINFO(0x04711FE8, Action_1_DamageResult__Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029FC8F0, IAsyncResult *, BeginInvoke, (Action_1_DamageResult_ * __this, DamageResult obj, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Action_1_DamageResult_ * __this, IAsyncResult * result));
}
