using namespace app;

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateHoldables {
IL2CPP_REGISTER_METHOD(0x00F3A360, bool, get_IsHoldingTorch, (PlayerUberStateHoldables * __this));
IL2CPP_REGISTER_METHOD(0x00F3A370, void, set_IsHoldingTorch, (PlayerUberStateHoldables * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F3A3C0, bool, get_IsTorchLit, (PlayerUberStateHoldables * __this));
IL2CPP_REGISTER_METHOD(0x00F3A3D0, void, set_IsTorchLit, (PlayerUberStateHoldables * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00417920, int64_t, get_Size, (PlayerUberStateHoldables * __this));
IL2CPP_REGISTER_METHOD(0x00F3A430, void, __ctor, (PlayerUberStateHoldables * __this, Action * setDirtyCallback));
IL2CPP_REGISTER_METHOD(0x00F3A610, void, OnGui, (PlayerUberStateHoldables * __this, NavigableOnGUI * gui));
IL2CPP_REGISTER_METHOD(0x00F3A7D0, void, Save, (PlayerUberStateHoldables * __this, UberStateArchive * archive, PlayerUberStateHoldables * holdables));
IL2CPP_REGISTER_METHOD(0x00F3A810, void, Load, (PlayerUberStateHoldables * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00F3A840, void, OnHoldingTorchStateChanged, (PlayerUberStateHoldables * __this));
IL2CPP_REGISTER_METHOD(0x00F3A840, void, OnTorchLitStateChanged, (PlayerUberStateHoldables * __this));
IL2CPP_REGISTER_METHOD(0x00F3A850, void, RunSetDirtyCallback, (PlayerUberStateHoldables * __this));
}
