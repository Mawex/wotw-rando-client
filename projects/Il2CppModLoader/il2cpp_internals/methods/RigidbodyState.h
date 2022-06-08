using namespace app;

namespace app::methods::RigidbodyState {
IL2CPP_REGISTER_METHOD(0x013527F0, bool, GetGoThroughComponent, (RigidbodyState * __this, GoThroughPlatform * * comp));
IL2CPP_REGISTER_METHOD(0x013529A0, Object *, Clone, (RigidbodyState * __this));
IL2CPP_REGISTER_METHOD(0x01352C70, void, SaveBodyState, (RigidbodyState * __this, Rigidbody * rigidbody, bool UseLocalCoordinates, bool resetXYRotations, bool resetZ));
IL2CPP_REGISTER_METHOD(0x01353320, void, ApplyInertia, (RigidbodyState * __this));
IL2CPP_REGISTER_METHOD(0x01353460, void, ApplyPosition, (RigidbodyState * __this, Vector3 RootShift, bool UseLocalCoordinates, bool resetXYRotations, bool resetZ));
IL2CPP_REGISTER_METHOD(0x013539E0, void, ApplyBodyConstraints, (RigidbodyState * __this));
IL2CPP_REGISTER_METHOD(0x01353B50, void, ApplyStateLegacy, (RigidbodyState * __this, Vector3 RootShift, bool UseLocalCoordinates, bool resetXYRotations, bool resetZ, bool applyKinematic, bool applyGravity));
IL2CPP_REGISTER_METHOD(0x01353ED0, void, ApplyState, (RigidbodyState * __this, Vector3 RootShift, bool UseLocalCoordinates, bool resetXYRotations, bool resetZ, bool applyActive, bool applyKinematic, bool applyGravity));
IL2CPP_REGISTER_METHOD(0x013543A0, void, ApplyDynamicSettings, (RigidbodyState * __this));
IL2CPP_REGISTER_METHOD(0x01354720, void, __ctor, (RigidbodyState * __this));
IL2CPP_REGISTER_METHOD(0x01354870, void, __cctor, (MethodInfo * method));
}
