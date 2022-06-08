#include <interception_macros.h>

namespace app::methods::System::Resources::ResourceLocator {
IL2CPP_REGISTER_METHOD(0x0018ED30, void, __ctor, (ResourceLocator__Boxed * __this, int32_t dataPos, Object * value));
IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_DataPosition, (ResourceLocator__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00107C00, Object *, get_Value, (ResourceLocator__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_Value, (ResourceLocator__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01A84740, bool, CanCache, (ResourceTypeCode__Enum value));
}
