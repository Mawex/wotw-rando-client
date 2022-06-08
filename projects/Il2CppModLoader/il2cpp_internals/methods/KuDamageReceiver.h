#include <interception_macros.h>

namespace app::methods::KuDamageReceiver {
IL2CPP_REGISTER_METHOD(0x002FBBA0, Ku *, get_Ku, (KuDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x0122F570, SeinCharacter *, get_Sein, (KuDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetReferenceToKu, (KuDamageReceiver * __this, Ku * ku));
IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (KuDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x0122F600, void, OnEnable, (KuDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x0122F7E0, void, OnDisable, (KuDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x0122F9C0, void, OnOriDamage, (KuDamageReceiver * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0475BA68, KuDamageReceiver_OnOriDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0122FFC0, void, OnRootMotion, (KuDamageReceiver * __this, Vector3 rootMotion));
IL2CPP_REGISTER_METHODINFO(0x047943A8, KuDamageReceiver_OnRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01230150, void, OnAnimationEnd, (KuDamageReceiver * __this));
IL2CPP_REGISTER_METHODINFO(0x04787D70, KuDamageReceiver_OnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01230300, void, OnRecieveDamage, (KuDamageReceiver * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x01230450, bool, ShouldHurtAnimationKeepPlaying, (KuDamageReceiver * __this));
IL2CPP_REGISTER_METHODINFO(0x0478A7F0, KuDamageReceiver_ShouldHurtAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012304A0, void, __ctor, (KuDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (KuDamageReceiver * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (KuDamageReceiver * __this));
}
