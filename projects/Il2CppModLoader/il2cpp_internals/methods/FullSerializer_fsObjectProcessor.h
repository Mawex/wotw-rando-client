using namespace app;

namespace app::methods::FullSerializer::fsObjectProcessor {
IL2CPP_REGISTER_METHOD(0x015145E0, bool, CanProcess, (fsObjectProcessor * __this, Type * type));
IL2CPP_REGISTER_METHODINFO(0x0473C4C8, fsObjectProcessor_CanProcess__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (fsObjectProcessor * __this, Type * storageType, Object * instance));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterSerialize, (fsObjectProcessor * __this, Type * storageType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeDeserialize, (fsObjectProcessor * __this, Type * storageType, fsData * * data));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeDeserializeAfterInstanceCreation, (fsObjectProcessor * __this, Type * storageType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (fsObjectProcessor * __this, Type * storageType, Object * instance));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsObjectProcessor * __this));
}
