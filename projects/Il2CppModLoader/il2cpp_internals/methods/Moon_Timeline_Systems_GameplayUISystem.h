using namespace app;

namespace app::methods::Moon::Timeline::Systems::GameplayUISystem {
IL2CPP_REGISTER_METHOD(0x00420EE0, UpdateType__Enum, get_UpdateType, (GameplayUISystem * __this));
IL2CPP_REGISTER_METHOD(0x00D08B10, bool, get_DefaultState, (GameplayUISystem * __this));
IL2CPP_REGISTER_METHOD(0x00D08BB0, bool, get_ShowUI, (GameplayUISystem * __this));
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DisableAutomaticHidingTime, (GameplayUISystem * __this));
IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_DisableAutomaticHidingTime, (GameplayUISystem * __this, float value));
IL2CPP_REGISTER_METHOD(0x00D08C70, void, IncreaseReferenceCount, (GameplayUISystem * __this, bool enable));
IL2CPP_REGISTER_METHOD(0x00D08C80, void, OnUpdate, (GameplayUISystem * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00D09190, void, ResetCouters, (GameplayUISystem * __this));
IL2CPP_REGISTER_METHOD(0x00D091A0, void, __ctor, (GameplayUISystem * __this));
}
