#include <interception_macros.h>

namespace app::methods::GenericDataContainer {
IL2CPP_REGISTER_METHOD(0x01B5C7F0, void, CopyDataFrom, (GenericDataContainer * __this, GenericDataContainer * other));
IL2CPP_REGISTER_METHOD(0x01B5C840, bool, HasType, (GenericDataContainer * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01B5CB50, void, InitializeData, (GenericDataContainer * __this, int32_t booleans, int32_t ints, int32_t bytes, int32_t floats, int32_t vectors, int32_t colors));
IL2CPP_REGISTER_METHOD(0x01B5CFD0, void, Clear, (GenericDataContainer * __this));
IL2CPP_REGISTER_METHOD(0x01B5D170, void, __ctor, (GenericDataContainer * __this));
}
