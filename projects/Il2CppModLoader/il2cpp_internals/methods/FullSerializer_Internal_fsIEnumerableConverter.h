using namespace app;

namespace app::methods::FullSerializer::Internal::fsIEnumerableConverter {
IL2CPP_REGISTER_METHOD(0x01656710, bool, CanProcess, (fsIEnumerableConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01656810, Object *, CreateInstance, (fsIEnumerableConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x016568F0, fsResult, TrySerialize, (fsIEnumerableConverter * __this, Object * instance_, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01656EB0, bool, IsStack, (fsIEnumerableConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01656FF0, fsResult, TryDeserialize, (fsIEnumerableConverter * __this, fsData * data, Object * * instance_, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01657760, int32_t, HintSize, (IEnumerable * collection));
IL2CPP_REGISTER_METHOD(0x01657860, Type *, GetElementType, (Type * objectType));
IL2CPP_REGISTER_METHOD(0x016579E0, void, TryClear, (Type * type, Object * instance));
IL2CPP_REGISTER_METHOD(0x01657AE0, int32_t, TryGetExistingSize, (Type * type, Object * instance));
IL2CPP_REGISTER_METHOD(0x01657C50, MethodInfo_1 *, GetAddMethod, (Type * type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsIEnumerableConverter * __this));
}
