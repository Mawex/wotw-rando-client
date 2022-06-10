#pragma once
#include <interception_macros.h>

namespace app::methods::MortarEntity_AimVeloCache_Packer {
    IL2CPP_REGISTER_METHOD(0x0147CC30, void, ctor, (app::MortarEntity_AimVeloCache_Packer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147CC30, void, InitDefaults, (app::MortarEntity_AimVeloCache_Packer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147CC70, uint16_t, VItoXI, (app::MortarEntity_AimVeloCache_Packer * this_ptr, uint16_t vi))
    IL2CPP_REGISTER_METHOD(0x0147CC90, uint16_t, VItoYI, (app::MortarEntity_AimVeloCache_Packer * this_ptr, uint16_t vi))
    IL2CPP_REGISTER_METHOD(0x0147CCB0, uint16_t, Pack, (app::MortarEntity_AimVeloCache_Packer * this_ptr, float v, float vmin, float vmax, float imax))
    IL2CPP_REGISTER_METHOD(0x0147CDA0, float, Unpack, (app::MortarEntity_AimVeloCache_Packer * this_ptr, uint16_t i, float vmin, float vmax, float imax))
    IL2CPP_REGISTER_METHOD(0x0147CE80, uint16_t, PackVelocity, (app::MortarEntity_AimVeloCache_Packer * this_ptr, app::Vector2 velo))
    IL2CPP_REGISTER_METHOD(0x0147CFD0, app::Vector2, UnpackVelocity, (app::MortarEntity_AimVeloCache_Packer * this_ptr, uint16_t vi))
    IL2CPP_REGISTER_METHOD(0x0147D130, bool, UnpackHit, (app::MortarEntity_AimVeloCache_Packer * this_ptr, uint16_t vi))
}
