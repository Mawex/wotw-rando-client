using namespace app;

namespace app::methods::AreaMapIcon {
IL2CPP_REGISTER_METHOD(0x0050CA80, bool, ShouldShowAttentionMarker, (AreaMapIcon * __this, GameWorldAreaID__Enum areaID));
IL2CPP_REGISTER_METHOD(0x0050CC20, void, Awake, (AreaMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x0050CD10, void, ShowLabel, (AreaMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x0050CDB0, void, HideLabel, (AreaMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x0050CE70, bool, IsIconShown, (AreaMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x0050D0C0, void, SetMessageProvider, (AreaMapIcon * __this, MessageProvider * provider));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetIcon, (AreaMapIcon * __this, GameObject * iconPrefab));
IL2CPP_REGISTER_METHOD(0x0050D170, void, SetIconActive, (AreaMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x0050D390, void, SetIconSpecial, (AreaMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x0050D5B0, void, SetIconInactive, (AreaMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x0050D7D0, void, SetAttentionMarker, (AreaMapIcon * __this, bool enable));
IL2CPP_REGISTER_METHOD(0x002FBBA0, GameObject *, GetTransparencyAnimatorContainer, (AreaMapIcon * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (AreaMapIcon * __this));
}
