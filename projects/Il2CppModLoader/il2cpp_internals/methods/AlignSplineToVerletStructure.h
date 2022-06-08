using namespace app;

namespace app::methods::AlignSplineToVerletStructure {
IL2CPP_REGISTER_METHOD(0x004F1E60, void, FindJoints, (AlignSplineToVerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x004F20D0, void, AlignSpline, (AlignSplineToVerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x004F2310, void, Init, (AlignSplineToVerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x002FD750, SuspendableMask__Enum, get_Mask, (AlignSplineToVerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x002FD760, void, set_Mask, (AlignSplineToVerletStructure * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsSuspended, (AlignSplineToVerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x004F2330, void, set_IsSuspended, (AlignSplineToVerletStructure * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004F2340, void, OnUpdatePhysics, (AlignSplineToVerletStructure * __this, float dt));
IL2CPP_REGISTER_METHOD(0x004F2730, void, __ctor, (AlignSplineToVerletStructure * __this));
}
