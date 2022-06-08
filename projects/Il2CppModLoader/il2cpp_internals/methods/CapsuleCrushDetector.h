using namespace app;

namespace app::methods::CapsuleCrushDetector {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CapsuleCrushDetector * __this));
IL2CPP_REGISTER_METHOD(0x00B238D0, PlatformBehaviour *, get_PlatformBehaviour, (CapsuleCrushDetector * __this));
IL2CPP_REGISTER_METHOD(0x00B238F0, bool, get_OnCeiling, (CapsuleCrushDetector * __this));
IL2CPP_REGISTER_METHOD(0x00B23950, bool, get_OnGround, (CapsuleCrushDetector * __this));
IL2CPP_REGISTER_METHOD(0x00B239B0, bool, get_OnWallLeft, (CapsuleCrushDetector * __this));
IL2CPP_REGISTER_METHOD(0x00B23A10, bool, get_OnWallRight, (CapsuleCrushDetector * __this));
IL2CPP_REGISTER_METHOD(0x00B23A70, void, Start, (CapsuleCrushDetector * __this));
IL2CPP_REGISTER_METHOD(0x00B23DA0, void, OnDestroy, (CapsuleCrushDetector * __this));
IL2CPP_REGISTER_METHOD(0x00B240D0, void, OnMoonControllerCollision, (CapsuleCrushDetector * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHODINFO(0x047446C8, CapsuleCrushDetector_OnMoonControllerCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B24110, void, OnNativeCollision, (CapsuleCrushDetector * __this, Collision * collision));
IL2CPP_REGISTER_METHODINFO(0x0471E470, CapsuleCrushDetector_OnNativeCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B241B0, void, OnCollision, (CapsuleCrushDetector * __this, Vector3 normal, Collider * other));
IL2CPP_REGISTER_METHOD(0x00B249D0, void, OnTriggerEnter, (CapsuleCrushDetector * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00B249D0, void, OnTriggerStay, (CapsuleCrushDetector * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00B249E0, void, OnTrigger, (CapsuleCrushDetector * __this, CrushPlayer * crush));
IL2CPP_REGISTER_METHOD(0x00B24AA0, void, OnTrigger, (CapsuleCrushDetector * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00B24C30, void, OnSetReferenceToSein, (CapsuleCrushDetector * __this));
IL2CPP_REGISTER_METHOD(0x00B24C60, void, KillOri, (CapsuleCrushDetector * __this));
IL2CPP_REGISTER_METHOD(0x00B24F50, bool, IsSimilarDirection, (CapsuleCrushDetector * __this, Vector3 a, Vector3 b));
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (CapsuleCrushDetector * __this));
}
