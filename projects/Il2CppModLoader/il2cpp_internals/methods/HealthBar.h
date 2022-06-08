#include <interception_macros.h>

namespace app::methods::HealthBar {
IL2CPP_REGISTER_METHOD(0x006FE430, float, get_Value, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x0109F220, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0109F2D0, void, CacheOriginals, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x0109F3E0, void, Awake, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x0109F5B0, void, OnDestroy, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x0109F750, void, ResetHealthBar, (HealthBar * __this));
IL2CPP_REGISTER_METHODINFO(0x04745138, HealthBar_ResetHealthBar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0109F9F0, void, RefreshMaxValue, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x0109FA30, void, OnEnable, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x0109FB40, void, Initialize, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x0109FB90, void, ForceHideBar, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x0109FC00, void, Update, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x0109FFE0, void, ShowBar, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x010A0000, void, OnValueChanged, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x010A01C0, void, UpdateColorBar, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x010A0470, void, UpdateGrayBar, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x010A0790, void, UpdateBackground, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x010A0850, Color, GetMinBarColorByValue, (HealthBar * __this, float normalizedValue));
IL2CPP_REGISTER_METHOD(0x010A0910, Color, GetMaxBarColor, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x010A0980, Color, GetBackBarColor, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x010A09B0, Vector4, GetTextureOffsetByValue, (HealthBar * __this, float normalizedValue));
IL2CPP_REGISTER_METHOD(0x010A09F0, void, __ctor, (HealthBar * __this));
IL2CPP_REGISTER_METHOD(0x010A0AD0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDisableOnRecordablePreview_get_gameObject, (HealthBar * __this));
}
