using namespace app;

namespace app::methods::MortarEntity_AimVeloCache_Grid {
IL2CPP_REGISTER_METHOD(0x0147BA80, bool, get_ShouldUnpack, (MortarEntity_AimVeloCache_Grid * __this));
IL2CPP_REGISTER_METHOD(0x0147BAA0, void, InitForGeneration, (MortarEntity_AimVeloCache_Grid * __this, float MaxSpitRange));
IL2CPP_REGISTER_METHOD(0x0147BB80, void, Pack, (MortarEntity_AimVeloCache_Grid * __this, MortarEntity_AimVeloCache_Packer * packer));
IL2CPP_REGISTER_METHOD(0x0147BCF0, void, Unpack, (MortarEntity_AimVeloCache_Grid * __this, MortarEntity_AimVeloCache_Packer * packer));
IL2CPP_REGISTER_METHOD(0x0147BE70, int32_t, XYIndexToAddress, (MortarEntity_AimVeloCache_Grid * __this, int32_t xi, int32_t yi));
IL2CPP_REGISTER_METHOD(0x0147BE80, int32_t, AddressToXIndex, (MortarEntity_AimVeloCache_Grid * __this, int32_t a));
IL2CPP_REGISTER_METHOD(0x0147BE90, int32_t, AddressToYIndex, (MortarEntity_AimVeloCache_Grid * __this, int32_t a));
IL2CPP_REGISTER_METHOD(0x0147BEA0, int32_t, TargetOffsetToAddress, (MortarEntity_AimVeloCache_Grid * __this, Vector3 targetOffset));
IL2CPP_REGISTER_METHOD(0x0147BF30, Vector3, SnapOffset, (MortarEntity_AimVeloCache_Grid * __this, Vector3 targetOffset));
IL2CPP_REGISTER_METHOD(0x0147C050, float, XIndexToXOffset, (MortarEntity_AimVeloCache_Grid * __this, int32_t xi));
IL2CPP_REGISTER_METHOD(0x0147C090, float, YIndexToYOffset, (MortarEntity_AimVeloCache_Grid * __this, int32_t yi));
IL2CPP_REGISTER_METHOD(0x0147C0D0, int32_t, XOffsetToXIndex, (MortarEntity_AimVeloCache_Grid * __this, float x));
IL2CPP_REGISTER_METHOD(0x0147C110, int32_t, YOffsetToYIndex, (MortarEntity_AimVeloCache_Grid * __this, float y));
IL2CPP_REGISTER_METHOD(0x0147C150, float, IndexToOffset, (MortarEntity_AimVeloCache_Grid * __this, int32_t i, float imax, float fmin, float fmax));
IL2CPP_REGISTER_METHOD(0x0147C240, int32_t, OffsetToIndex, (MortarEntity_AimVeloCache_Grid * __this, float f, float fmin, float fmax, float imax));
IL2CPP_REGISTER_METHOD(0x0147C330, bool, GetTargetVelocity, (MortarEntity_AimVeloCache_Grid * __this, Vector3 entityPos, Vector3 targetPos, Vector3 * velocity, MortarEntity_AimVeloCache_EntityParams * entityDebugOnly));
IL2CPP_REGISTER_METHOD(0x0147C550, void, DebugDraw, (MortarEntity_AimVeloCache_Grid * __this, MortarEntity_AimVeloCache_EntityParams * entity));
IL2CPP_REGISTER_METHOD(0x0147C7D0, void, Log, (MortarEntity_AimVeloCache_Grid * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MortarEntity_AimVeloCache_Grid * __this));
}
