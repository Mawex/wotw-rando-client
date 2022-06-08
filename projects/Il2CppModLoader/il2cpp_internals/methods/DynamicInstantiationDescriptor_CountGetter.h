#include <interception_macros.h>

namespace app::methods::DynamicInstantiationDescriptor_CountGetter {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DynamicInstantiationDescriptor_CountGetter * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01700900, int32_t, Invoke, (DynamicInstantiationDescriptor_CountGetter * __this, MonoBehaviour * component, int32_t arrayIndex, GameObject * go));
IL2CPP_REGISTER_METHOD(0x030E0580, IAsyncResult *, BeginInvoke, (DynamicInstantiationDescriptor_CountGetter * __this, MonoBehaviour * component, int32_t arrayIndex, GameObject * go, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (DynamicInstantiationDescriptor_CountGetter * __this, IAsyncResult * result));
}
