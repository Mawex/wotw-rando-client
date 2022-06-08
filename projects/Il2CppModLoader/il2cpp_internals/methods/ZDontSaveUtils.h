#include <interception_macros.h>

namespace app::methods::ZDontSaveUtils {
IL2CPP_REGISTER_METHOD(0x03119560, Transform *, get_DontSaveTransform, ());
IL2CPP_REGISTER_METHOD(0x031197D0, GameObject *, InstantiateDontSavePrefab, (GameObject * prefab, String * gameObjectName));
IL2CPP_REGISTER_METHOD(0x03119910, bool, IsWithinDontSaveGroup, (GameObject * go));
IL2CPP_REGISTER_METHOD(0x03119A00, bool, IsWithinDontSaveGroup, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x03119C00, void, MakeDontSave, (GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x03119D00, void, __cctor, ());
}
