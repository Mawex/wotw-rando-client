using namespace app;

namespace app::methods::RootMotion::FinalIK::GenericPoser_Map {
IL2CPP_REGISTER_METHOD(0x02064DD0, void, __ctor, (GenericPoser_Map * __this, Transform * bone, Transform * target));
IL2CPP_REGISTER_METHOD(0x02064DE0, void, StoreDefaultState, (GenericPoser_Map * __this));
IL2CPP_REGISTER_METHOD(0x02064EE0, void, FixTransform, (GenericPoser_Map * __this));
IL2CPP_REGISTER_METHOD(0x02064FD0, void, Update, (GenericPoser_Map * __this, float localRotationWeight, float localPositionWeight));
}
