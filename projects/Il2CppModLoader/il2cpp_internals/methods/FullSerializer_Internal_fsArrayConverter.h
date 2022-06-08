using namespace app;

namespace app::methods::FullSerializer::Internal::fsArrayConverter {
IL2CPP_REGISTER_METHOD(0x01650EE0, bool, CanProcess, (fsArrayConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (fsArrayConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (fsArrayConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01650F10, fsResult, TrySerialize, (fsArrayConverter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01651280, fsResult, TryDeserialize, (fsArrayConverter * __this, fsData * data, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01651620, Object *, CreateInstance, (fsArrayConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsArrayConverter * __this));
}
