using namespace app;

namespace app::methods::SoulFlame {
IL2CPP_REGISTER_METHOD(0x00EE3A50, bool, get_IsInside, (SoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x00EE3AD0, Vector3, get_Position, (SoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x00EE3B60, void, set_Position, (SoulFlame * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00EE3BE0, void, Awake, (SoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x00EE3DD0, void, OnDestroy, (SoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x009886D0, void, OnGameSerializeLoad, (SoulFlame * __this));
IL2CPP_REGISTER_METHODINFO(0x0473E220, SoulFlame_OnGameSerializeLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EE3F60, void, OnRekindle, (SoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x00EE4190, void, FixedUpdate, (SoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x00647DD0, void, OnDisable, (SoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x00EE44F0, void, Disappear, (SoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x00EE45E0, void, Start, (SoulFlame * __this));
IL2CPP_REGISTER_METHOD(0x00EE4620, void, __ctor, (SoulFlame * __this));
}
