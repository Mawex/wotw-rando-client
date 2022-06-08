#include <interception_macros.h>

namespace app::methods::AkWwiseInitializationSettings_PlatformSettings {
IL2CPP_REGISTER_METHOD(0x02706F50, void, IgnorePropertyValue, (AkWwiseInitializationSettings_PlatformSettings * __this, String * propertyPath));
IL2CPP_REGISTER_METHOD(0x02707080, bool, IsPropertyIgnored, (AkWwiseInitializationSettings_PlatformSettings * __this, String * propertyPath));
IL2CPP_REGISTER_METHOD(0x02707120, void, __ctor, (AkWwiseInitializationSettings_PlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x02707380, void, SetUseGlobalPropertyValue, (AkWwiseInitializationSettings_PlatformSettings * __this, String * propertyPath, bool use));
IL2CPP_REGISTER_METHOD(0x02707470, void, SetGlobalPropertyValues, (AkWwiseInitializationSettings_PlatformSettings * __this, IEnumerable * enumerable));
IL2CPP_REGISTER_METHOD(0x027076A0, bool, IsUsingGlobalPropertyValue, (AkWwiseInitializationSettings_PlatformSettings * __this, String * propertyPath));
IL2CPP_REGISTER_METHOD(0x02707740, HashSet_1_System_String_ *, get_GlobalPropertyHashSet, (AkWwiseInitializationSettings_PlatformSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_GlobalPropertyHashSet, (AkWwiseInitializationSettings_PlatformSettings * __this, HashSet_1_System_String_ * value));
}
