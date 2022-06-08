using namespace app;

namespace app::methods::RootMotion::FinalIK::Recoil {
IL2CPP_REGISTER_METHOD(0x02A1CF80, void, SetHandRotations, (Recoil * __this, Quaternion leftHandRotation, Quaternion rightHandRotation));
IL2CPP_REGISTER_METHOD(0x02A1CFB0, void, Fire, (Recoil * __this, float magnitude));
IL2CPP_REGISTER_METHOD(0x02A1D460, void, OnModifyOffset, (Recoil * __this));
IL2CPP_REGISTER_METHOD(0x02A1EB60, void, AfterFBBIK, (Recoil * __this));
IL2CPP_REGISTER_METHODINFO(0x0473D3A0, Recoil_AfterFBBIK__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A1EF30, IKEffector *, get_primaryHandEffector, (Recoil * __this));
IL2CPP_REGISTER_METHOD(0x02A1EFD0, IKEffector *, get_secondaryHandEffector, (Recoil * __this));
IL2CPP_REGISTER_METHOD(0x02A1F070, Transform *, get_primaryHand, (Recoil * __this));
IL2CPP_REGISTER_METHOD(0x02A1F090, Transform *, get_secondaryHand, (Recoil * __this));
IL2CPP_REGISTER_METHOD(0x02A1F0B0, void, OnDestroy, (Recoil * __this));
IL2CPP_REGISTER_METHOD(0x02A1F2C0, void, __ctor, (Recoil * __this));
}
