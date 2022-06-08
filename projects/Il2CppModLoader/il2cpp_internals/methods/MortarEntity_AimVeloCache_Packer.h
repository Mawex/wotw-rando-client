using namespace app;

namespace app::methods::MortarEntity_AimVeloCache_Packer {
IL2CPP_REGISTER_METHOD(0x0147CC30, void, __ctor, (MortarEntity_AimVeloCache_Packer * __this));
IL2CPP_REGISTER_METHOD(0x0147CC30, void, InitDefaults, (MortarEntity_AimVeloCache_Packer * __this));
IL2CPP_REGISTER_METHOD(0x0147CC70, uint16_t, VItoXI, (MortarEntity_AimVeloCache_Packer * __this, uint16_t vi));
IL2CPP_REGISTER_METHOD(0x0147CC90, uint16_t, VItoYI, (MortarEntity_AimVeloCache_Packer * __this, uint16_t vi));
IL2CPP_REGISTER_METHOD(0x0147CCB0, uint16_t, Pack, (MortarEntity_AimVeloCache_Packer * __this, float v, float vmin, float vmax, float imax));
IL2CPP_REGISTER_METHOD(0x0147CDA0, float, Unpack, (MortarEntity_AimVeloCache_Packer * __this, uint16_t i, float vmin, float vmax, float imax));
IL2CPP_REGISTER_METHOD(0x0147CE80, uint16_t, PackVelocity, (MortarEntity_AimVeloCache_Packer * __this, Vector2 velo));
IL2CPP_REGISTER_METHOD(0x0147CFD0, Vector2, UnpackVelocity, (MortarEntity_AimVeloCache_Packer * __this, uint16_t vi));
IL2CPP_REGISTER_METHOD(0x0147D130, bool, UnpackHit, (MortarEntity_AimVeloCache_Packer * __this, uint16_t vi));
}
