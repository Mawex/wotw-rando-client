#include <interception_macros.h>

namespace app::methods::InstantiationHistory {
IL2CPP_REGISTER_METHOD(0x00632E80, GUIStyle *, get_LabelStyle, (InstantiationHistory * __this));
IL2CPP_REGISTER_METHOD(0x006331F0, InstantiationHistory *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00633290, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x00633360, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x00633570, void, EnsureImgui, (InstantiationHistory * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x00633660, void, Awake, (InstantiationHistory * __this));
IL2CPP_REGISTER_METHOD(0x00633700, void, _dumpToFile, (InstantiationHistory * __this));
IL2CPP_REGISTER_METHOD(0x00633CA0, void, OnDestroy, (InstantiationHistory * __this));
IL2CPP_REGISTER_METHOD(0x00633D50, void, SetParticleData, (InstantiationHistory * __this, InstantiationHistory_PrefabData * data, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x00633F50, void, CheckInstantiation, (InstantiationHistory * __this, GameObject * go, GameObject * instance, bool fromPool, bool newInPool, double msSpent));
IL2CPP_REGISTER_METHOD(0x00634CC0, void, Update, (InstantiationHistory * __this));
IL2CPP_REGISTER_METHOD(0x006352D0, void, OnGUI, (InstantiationHistory * __this));
IL2CPP_REGISTER_METHOD(0x006355B0, void, __ctor, (InstantiationHistory * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
