using namespace app;

namespace app::methods::SpiritShardUIConfirmationOverlay {
IL2CPP_REGISTER_METHOD(0x003FF610, SpiritShardUIConfirmationOverlay_Context__Enum, get_CurrentContext, (SpiritShardUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00D6B450, void, FixedUpdate, (SpiritShardUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00D6B680, void, InitializeUpgradeShard, (SpiritShardUIConfirmationOverlay * __this, PlayerUberStateShards_Shard * shard));
IL2CPP_REGISTER_METHOD(0x00D6B970, void, Clear, (SpiritShardUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00D6B990, void, Initialize, (SpiritShardUIConfirmationOverlay * __this, EquipmentType__Enum equipmentType, String * title, String * description));
IL2CPP_REGISTER_METHOD(0x00D6BC50, void, SetTitle, (SpiritShardUIConfirmationOverlay * __this, String * message));
IL2CPP_REGISTER_METHOD(0x00D6BDB0, void, SetDescription, (SpiritShardUIConfirmationOverlay * __this, String * message));
IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (SpiritShardUIConfirmationOverlay * __this, bool change));
IL2CPP_REGISTER_METHOD(0x002FA000, void, HideImmediate, (SpiritShardUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00D6BF10, void, Show, (SpiritShardUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowImmediate, (SpiritShardUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00D6C0E0, void, __ctor, (SpiritShardUIConfirmationOverlay * __this));
}
