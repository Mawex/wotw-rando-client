using namespace app;

namespace app::methods::Moon::InteractablePrefabSpawner {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInteractionStart, (InteractablePrefabSpawner * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x01102E20, void, OnInteractionEnd, (InteractablePrefabSpawner * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x01102E70, GameObject *, InstantiatePrefab, (InteractablePrefabSpawner * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x01103070, void, OnAfterInstantiatePrefab, (InteractablePrefabSpawner * __this, ICharacter * character, GameObject * prefabInstance));
IL2CPP_REGISTER_METHOD(0x011031D0, GameObject *, GiveItemToCharacter, (GameObject * prefab, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (InteractablePrefabSpawner * __this));
}
