using namespace app;

namespace app::methods::FullSerializer::Internal::fsNullableConverter {
IL2CPP_REGISTER_METHOD(0x01658FF0, bool, CanProcess, (fsNullableConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01659100, fsResult, TrySerialize, (fsNullableConverter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01659180, fsResult, TryDeserialize, (fsNullableConverter * __this, fsData * data, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01502ED0, Object *, CreateInstance, (fsNullableConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsNullableConverter * __this));
}
