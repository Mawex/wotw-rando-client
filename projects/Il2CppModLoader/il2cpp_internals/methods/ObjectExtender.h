using namespace app;

namespace app::methods::ObjectExtender {
IL2CPP_REGISTER_METHOD(0x0060E350, Component_1 *, GetComponentInParents, (GameObject * gameObject, Type * type));
IL2CPP_REGISTER_METHOD(0x0060E3D0, Component_1 *, GetComponentInParents, (Transform * transform, Type * type));
IL2CPP_REGISTER_METHOD(0x015F4D30, Object *, GetComponentInParents, (GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x015F4CA0, Object *, GetComponentInParents, (Component_1 * component));
IL2CPP_REGISTER_METHOD(0x015F4F80, Object *, GetComponentInParents, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x015F4D30, Object *, GetComponentInChildrenAndParents, (GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x015F4CA0, Object *, GetComponentInChildrenAndParents, (Component_1 * component));
IL2CPP_REGISTER_METHOD(0x015F4DB0, Object *, GetComponentInChildrenAndParents, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x015F4D30, Object *, GetComponentInParentsDontSuckTooMuch, (GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x015F4CA0, Object *, GetComponentInParentsDontSuckTooMuch, (Component_1 * component));
IL2CPP_REGISTER_METHOD(0x016A9610, Object *, GetComponentInParentsDontSuckTooMuch, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x015F4CA0, Entity *, GetComponentInChildrenAndParents, (Component_1 * component));
IL2CPP_REGISTER_METHODINFO(0x0473A3F0, ObjectExtender_GetComponentInChildrenAndParents_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4CA0, MoonTimeline *, GetComponentInParents, (Component_1 * component));
IL2CPP_REGISTER_METHODINFO(0x04782558, ObjectExtender_GetComponentInParents_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4CA0, GoThroughPlatform *, GetComponentInParents, (Component_1 * component));
IL2CPP_REGISTER_METHODINFO(0x04799158, ObjectExtender_GetComponentInParents_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4CA0, LightCanvas *, GetComponentInParentsDontSuckTooMuch, (Component_1 * component));
IL2CPP_REGISTER_METHODINFO(0x0477FE90, ObjectExtender_GetComponentInParentsDontSuckTooMuch_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4CA0, Entity *, GetComponentInParents, (Component_1 * component));
IL2CPP_REGISTER_METHODINFO(0x04706A68, ObjectExtender_GetComponentInParents_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4CA0, SeinCharacter *, GetComponentInParents, (Component_1 * component));
IL2CPP_REGISTER_METHODINFO(0x0474A6F8, ObjectExtender_GetComponentInParents_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4D30, SceneRoot *, GetComponentInParentsDontSuckTooMuch, (GameObject * gameObject));
IL2CPP_REGISTER_METHODINFO(0x0470F0B8, ObjectExtender_GetComponentInParentsDontSuckTooMuch_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F4D30, CleverMenuItemSelectionManager *, GetComponentInParents, (GameObject * gameObject));
IL2CPP_REGISTER_METHODINFO(0x047515E8, ObjectExtender_GetComponentInParents_9__MethodInfo);
}
