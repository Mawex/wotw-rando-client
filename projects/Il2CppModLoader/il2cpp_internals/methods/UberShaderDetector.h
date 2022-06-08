#include <interception_macros.h>

namespace app::methods::UberShaderDetector {
IL2CPP_REGISTER_METHOD(0x01910A70, GUIStyle *, get_LabelStyle, (UberShaderDetector * __this));
IL2CPP_REGISTER_METHOD(0x01910E60, UberShaderDetector *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x01910EE0, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x01910F90, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x019110C0, void, EnsureImgui, (UberShaderDetector * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x019111B0, void, Awake, (UberShaderDetector * __this));
IL2CPP_REGISTER_METHOD(0x01911210, void, Destroy, (UberShaderDetector * __this));
IL2CPP_REGISTER_METHOD(0x01911220, String *, FullPath, (UberShaderDetector * __this, Transform * target));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CheckInstantiationAgainstStripList, (GameObject * original));
IL2CPP_REGISTER_METHOD(0x01911360, void, CheckInstantiation, (UberShaderDetector * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x019115A0, void, OnDisable, (UberShaderDetector * __this));
IL2CPP_REGISTER_METHOD(0x019119D0, void, Update, (UberShaderDetector * __this));
IL2CPP_REGISTER_METHOD(0x01911ED0, void, OnGUI, (UberShaderDetector * __this));
IL2CPP_REGISTER_METHOD(0x019121B0, void, __ctor, (UberShaderDetector * __this));
IL2CPP_REGISTER_METHOD(0x01912430, float, _Update_b__22_0, (UberShaderDetector * __this, KeyValuePair_2_System_String_System_Single_ x));
IL2CPP_REGISTER_METHODINFO(0x04736910, UberShaderDetector__Update_b__22_0__MethodInfo);
}
