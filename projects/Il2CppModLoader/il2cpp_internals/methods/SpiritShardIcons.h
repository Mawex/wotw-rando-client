using namespace app;

namespace app::methods::SpiritShardIcons {
IL2CPP_REGISTER_METHOD(0x00D680F0, Texture2D *, GetIcon, (SpiritShardIcons * __this, SpiritShardType__Enum type));
IL2CPP_REGISTER_METHOD(0x00D68280, void, OnValidate, (SpiritShardIcons * __this));
IL2CPP_REGISTER_METHOD(0x00D68290, Texture2D *, FindItem, (SpiritShardType__Enum type, SpiritShardIcons_IconTexture__Array * list));
IL2CPP_REGISTER_METHOD(0x00D68310, void, EnsureListMatchesEnum, (SpiritShardIcons * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SpiritShardIcons * __this));
}
