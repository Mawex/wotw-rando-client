using namespace app;

namespace app::methods::FullSerializer::Internal::fsDictionaryConverter {
IL2CPP_REGISTER_METHOD(0x01653170, bool, CanProcess, (fsDictionaryConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01653240, Object *, CreateInstance, (fsDictionaryConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01653320, fsResult, TryDeserialize, (fsDictionaryConverter * __this, fsData * data, Object * * instance_, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01653CF0, fsResult, TrySerialize, (fsDictionaryConverter * __this, Object * instance_, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01654750, fsResult, AddItemToDictionary, (fsDictionaryConverter * __this, IDictionary * dictionary, Object * key, Object * value));
IL2CPP_REGISTER_METHOD(0x01654B30, void, GetKeyValueTypes, (Type * dictionaryType, Type * * keyStorageType, Type * * valueStorageType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsDictionaryConverter * __this));
}
