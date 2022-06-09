#include <interception_macros.h>

namespace app::methods::System_Runtime_Serialization_Formatters_Binary::IntSizedArray {
    IL2CPP_REGISTER_METHOD(0x01D92880, void, __ctor_1, (app::IntSizedArray * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D92920, void, __ctor_2, (app::IntSizedArray * this_ptr, app::IntSizedArray * sized_array));
    IL2CPP_REGISTER_METHOD(0x01D92A60, app::Object *, Clone, (app::IntSizedArray * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D92CB0, int32_t, get_Item, (app::IntSizedArray * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x01D92D50, void, set_Item, (app::IntSizedArray * this_ptr, int32_t index, int32_t value));
    IL2CPP_REGISTER_METHOD(0x01D92E50, void, IncreaseCapacity, (app::IntSizedArray * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x047463F8, IntSizedArray_IncreaseCapacity__MethodInfo);
}
