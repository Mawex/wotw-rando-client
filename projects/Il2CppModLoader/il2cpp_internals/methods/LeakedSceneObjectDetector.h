#include <interception_macros.h>

namespace app::methods::LeakedSceneObjectDetector {
IL2CPP_REGISTER_METHOD(0x004E7F00, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x015C33D0, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x015C3550, void, Awake, (LeakedSceneObjectDetector * __this));
IL2CPP_REGISTER_METHOD(0x015C35E0, bool, IsValid, (LeakedSceneObjectDetector * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x015C38F0, bool, IsPrefab, (LeakedSceneObjectDetector * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x015C3AC0, void, UpdateLeakedItem, (LeakedSceneObjectDetector * __this));
IL2CPP_REGISTER_METHOD(0x015C3E80, void, OnDisable, (LeakedSceneObjectDetector * __this));
IL2CPP_REGISTER_METHOD(0x015C3E90, void, Print, (LeakedSceneObjectDetector * __this));
IL2CPP_REGISTER_METHOD(0x015C4920, void, Update, (LeakedSceneObjectDetector * __this));
IL2CPP_REGISTER_METHOD(0x015C49B0, void, __ctor, (LeakedSceneObjectDetector * __this));
}
