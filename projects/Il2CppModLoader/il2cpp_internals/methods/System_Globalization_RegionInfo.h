using namespace app;

namespace app::methods::System::Globalization::RegionInfo {
IL2CPP_REGISTER_METHOD(0x01DEB470, RegionInfo *, get_CurrentRegion, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01DEB760, void, __ctor, (RegionInfo * __this, int32_t culture));
IL2CPP_REGISTER_METHODINFO(0x0470FC88, RegionInfo__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEB880, void, __ctor, (RegionInfo * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04705580, RegionInfo__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEB9D0, void, __ctor, (RegionInfo * __this, CultureInfo * ci));
IL2CPP_REGISTER_METHODINFO(0x047288F8, RegionInfo__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEBB30, bool, GetByTerritory, (RegionInfo * __this, CultureInfo * ci));
IL2CPP_REGISTER_METHODINFO(0x04719950, RegionInfo_GetByTerritory__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEBC30, bool, construct_internal_region_from_name, (RegionInfo * __this, String * name));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_CurrencyEnglishName, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_CurrencySymbol, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_DisplayName, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_EnglishName, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_GeoId, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEBC40, bool, get_IsMetric, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_ISOCurrencySymbol, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_NativeName, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_CurrencyNativeName, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_ThreeLetterISORegionName, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_ThreeLetterWindowsRegionName, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_TwoLetterISORegionName, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEBD20, bool, Equals, (RegionInfo * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01DEBE60, int32_t, GetHashCode, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEBEA0, String *, ToString, (RegionInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEBEC0, void, ClearCachedData, (MethodInfo * method));
}
