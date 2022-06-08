using namespace app;

namespace app::methods::LegacyPointAmbienceZone {
IL2CPP_REGISTER_METHOD(0x00A30830, void, Awake, (LegacyPointAmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x00A30AB0, void, FixedUpdate, (LegacyPointAmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x00A30C70, void, SetSoundProvider, (LegacyPointAmbienceZone * __this, SoundProvider * soundProvider));
IL2CPP_REGISTER_METHOD(0x00A30CC0, void, OnDestroy, (LegacyPointAmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x00A30CC0, void, OnDisable, (LegacyPointAmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x00A30D00, void, ActivateAmbienceZone, (LegacyPointAmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x00A30CC0, void, DeactiveAmbienceZone, (LegacyPointAmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x00A30DB0, void, PlaySound, (LegacyPointAmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x00A31040, float, CalculateRtpcValue, (LegacyPointAmbienceZone * __this));
IL2CPP_REGISTER_METHODINFO(0x04750AF0, LegacyPointAmbienceZone_CalculateRtpcValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A31350, float, RelativePositionToRtpcValue, (LegacyPointAmbienceZone * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x0043D9E0, SelectableCategory__Enum, get_Category, (LegacyPointAmbienceZone * __this));
IL2CPP_REGISTER_METHOD(0x00A319E0, void, __ctor, (LegacyPointAmbienceZone * __this));
}
