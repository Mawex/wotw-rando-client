using namespace app;

namespace app::methods::UnityEngine::LayerMask {
IL2CPP_REGISTER_METHOD(0x0252E560, int32_t, operator_, (LayerMask mask));
IL2CPP_REGISTER_METHOD(0x0252E560, LayerMask, operator_, (int32_t intVal));
IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_value, (LayerMask__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_value, (LayerMask__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0252E580, String *, LayerToName, (int32_t layer));
IL2CPP_REGISTER_METHOD(0x0252E5D0, int32_t, NameToLayer, (String * layerName));
IL2CPP_REGISTER_METHOD(0x0252E620, int32_t, GetMask, (String__Array * layerNames));
IL2CPP_REGISTER_METHODINFO(0x0476C820, LayerMask_GetMask__MethodInfo);
}
