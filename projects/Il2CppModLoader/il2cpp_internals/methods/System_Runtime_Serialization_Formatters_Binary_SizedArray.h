#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::SizedArray {
IL2CPP_REGISTER_METHOD(0x01DA1860, void, __ctor, (SizedArray * __this));
IL2CPP_REGISTER_METHOD(0x01DA1900, void, __ctor, (SizedArray * __this, int32_t length));
IL2CPP_REGISTER_METHOD(0x01DA19B0, void, __ctor, (SizedArray * __this, SizedArray * sizedArray));
IL2CPP_REGISTER_METHOD(0x01DA1AC0, Object *, Clone, (SizedArray * __this));
IL2CPP_REGISTER_METHOD(0x01DA1CE0, Object *, get_Item, (SizedArray * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01DA1D80, void, set_Item, (SizedArray * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x01DA1EF0, void, IncreaseCapacity, (SizedArray * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0476DC68, SizedArray_IncreaseCapacity__MethodInfo);
}
