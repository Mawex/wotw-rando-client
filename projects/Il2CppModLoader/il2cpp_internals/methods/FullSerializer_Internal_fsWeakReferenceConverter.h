using namespace app;

namespace app::methods::FullSerializer::Internal::fsWeakReferenceConverter {
IL2CPP_REGISTER_METHOD(0x01504A10, bool, CanProcess, (fsWeakReferenceConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (fsWeakReferenceConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (fsWeakReferenceConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01504AC0, fsResult, TrySerialize, (fsWeakReferenceConverter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01504F30, fsResult, TryDeserialize, (fsWeakReferenceConverter * __this, fsData * data, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHOD(0x015053D0, Object *, CreateInstance, (fsWeakReferenceConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsWeakReferenceConverter * __this));
}
