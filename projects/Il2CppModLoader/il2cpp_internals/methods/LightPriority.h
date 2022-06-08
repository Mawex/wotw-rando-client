#include <interception_macros.h>

namespace app::methods::LightPriority {
IL2CPP_REGISTER_METHOD(0x0114E930, Dictionary_2_LightPriority_Layer_System_Int32_ *, get_DarkeningErasingPriorityMap, ());
IL2CPP_REGISTER_METHOD(0x0114ED30, Dictionary_2_LightPriority_Layer_System_Int32_ *, get_CullingPriorityMap, ());
IL2CPP_REGISTER_METHOD(0x0114F160, int32_t, GetDarkeningErasingPriorityForLayer, (LightPriority_Layer__Enum group));
IL2CPP_REGISTER_METHOD(0x0114F200, int32_t, GetCullingPriorityForLayer, (LightPriority_Layer__Enum group));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LightPriority * __this));
}
