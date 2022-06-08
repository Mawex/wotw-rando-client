using namespace app;

namespace app::methods::Mono::RuntimeGPtrArrayHandle {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (RuntimeGPtrArrayHandle__Boxed * __this, void * ptr));
IL2CPP_REGISTER_METHOD(0x001EA580, int32_t, get_Length, (RuntimeGPtrArrayHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EA5A0, void *, get_Item, (RuntimeGPtrArrayHandle__Boxed * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x001EA5A0, void *, Lookup, (RuntimeGPtrArrayHandle__Boxed * __this, int32_t i));
IL2CPP_REGISTER_METHODINFO(0x04715A80, RuntimeGPtrArrayHandle_Lookup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023CE860, void, GPtrArrayFree, (RuntimeStructs_GPtrArray * value));
IL2CPP_REGISTER_METHOD(0x023CE8A0, void, DestroyAndFree, (RuntimeGPtrArrayHandle * h));
}
