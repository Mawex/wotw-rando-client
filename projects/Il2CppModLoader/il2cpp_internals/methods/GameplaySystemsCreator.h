using namespace app;

namespace app::methods::GameplaySystemsCreator {
IL2CPP_REGISTER_METHOD(0x004140F0, void, Awake, (GameplaySystemsCreator * __this));
IL2CPP_REGISTER_METHOD(0x00414240, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x004142F0, IEnumerator *, CreateSetups, (GameplaySystemsCreator * __this));
IL2CPP_REGISTER_METHOD(0x00414440, GameObject *, InstantiatePrefab, (GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x00414520, GameObject *, InstantiatePrefab, (GameObject * prefab, Transform * parent, Vector3 localPosition));
IL2CPP_REGISTER_METHOD(0x00414850, void, __ctor, (GameplaySystemsCreator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
