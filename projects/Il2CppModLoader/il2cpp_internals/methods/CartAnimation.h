using namespace app;

namespace app::methods::CartAnimation {
IL2CPP_REGISTER_METHOD(0x00B31760, void, set_AddtiveRotation, (CartAnimation * __this, float value));
IL2CPP_REGISTER_METHOD(0x00A479E0, float, get_BodyNormalizedLocalRotation, (CartAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00B31770, void, Awake, (CartAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00B31870, void, OnEnable, (CartAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00B319C0, void, Update, (CartAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00B31E10, void, AddForceToBody, (CartAnimation * __this, float force));
IL2CPP_REGISTER_METHOD(0x00B31E40, void, AddForceToBumper, (CartAnimation * __this, float force));
IL2CPP_REGISTER_METHOD(0x00B31E70, void, AddForceToScale, (CartAnimation * __this, float force));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateRoot, (CartAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00B31EA0, void, UpdateScale, (CartAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00B31F50, void, UpdateBody, (CartAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00B32190, void, UpdateBumper, (CartAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00B323D0, void, StepAllSprings, (CartAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00B32440, bool, AllSpringsAreResting, (CartAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00B324C0, void, RotateWhell, (CartAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00B325D0, void, __ctor, (CartAnimation * __this));
}
