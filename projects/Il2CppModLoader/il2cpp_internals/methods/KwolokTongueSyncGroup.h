using namespace app;

namespace app::methods::KwolokTongueSyncGroup {
IL2CPP_REGISTER_METHOD(0x00EFB910, void, OnEnable, (KwolokTongueSyncGroup * __this));
IL2CPP_REGISTER_METHOD(0x00EFB920, void, OnDisable, (KwolokTongueSyncGroup * __this));
IL2CPP_REGISTER_METHOD(0x00EFB930, void, SubscribeToFrogs, (KwolokTongueSyncGroup * __this));
IL2CPP_REGISTER_METHOD(0x00EFBD50, void, UnsubscribeToFrogs, (KwolokTongueSyncGroup * __this));
IL2CPP_REGISTER_METHOD(0x00EFC190, void, FrogTurnOn, (KwolokTongueSyncGroup * __this, KwolokTongueStatue * frog));
IL2CPP_REGISTER_METHODINFO(0x047310D8, KwolokTongueSyncGroup_FrogTurnOn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EFC380, void, FrogTurnOff, (KwolokTongueSyncGroup * __this, KwolokTongueStatue * frog));
IL2CPP_REGISTER_METHODINFO(0x04739B48, KwolokTongueSyncGroup_FrogTurnOff__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EFC570, bool, IsFrogInverted, (KwolokTongueSyncGroup * __this, KwolokTongueStatue * frog));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (KwolokTongueSyncGroup * __this));
}
