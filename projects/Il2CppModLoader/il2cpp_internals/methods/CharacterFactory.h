using namespace app;

namespace app::methods::CharacterFactory {
IL2CPP_REGISTER_METHOD(0x0104FAD0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0104FB50, void, Awake, (CharacterFactory * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (CharacterFactory * __this));
IL2CPP_REGISTER_METHOD(0x0104FBE0, GameObject *, SpawnCharacter, (CharacterFactory * __this, CharacterFactory_Characters__Enum character, GameObject * prefab, Vector3 position, Action * afterLoad, bool asignToCurrent));
IL2CPP_REGISTER_METHODINFO(0x04740278, CharacterFactory_SpawnCharacter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01050280, void, DestroyCharacter, (CharacterFactory * __this));
IL2CPP_REGISTER_METHOD(0x010505D0, void, DestroyKu, (CharacterFactory * __this));
IL2CPP_REGISTER_METHOD(0x01050810, GameObject *, GetCharacterPrefab, (CharacterFactory * __this, CharacterFactory_Characters__Enum character));
IL2CPP_REGISTER_METHOD(0x010509A0, void, __ctor, (CharacterFactory * __this));
}
