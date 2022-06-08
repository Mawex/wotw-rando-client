using namespace app;

namespace app::methods::GameObjectReference {
IL2CPP_REGISTER_METHOD(0x003F8B20, GameObject *, GetReference, (GameObjectReference * gameObjectReference));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (GameObjectReference * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_GameObject, (GameObjectReference * __this, GameObject * value));
IL2CPP_REGISTER_METHOD(0x002FA280, GameObject *, get_GameObject, (GameObjectReference * __this));
IL2CPP_REGISTER_METHOD(0x003F8B30, GameObjectReference *, MakeReference, (GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x003F8D00, void, ChangeReference, (GameObject * oldGameObject, GameObject * newGameObject));
}
