using namespace app;

namespace app::methods::FullSerializer::Internal::fsSerializationCallbackProcessor {
IL2CPP_REGISTER_METHOD(0x0165D3F0, bool, CanProcess, (fsSerializationCallbackProcessor * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x0165D4C0, void, OnBeforeSerialize, (fsSerializationCallbackProcessor * __this, Type * storageType, Object * instance));
IL2CPP_REGISTER_METHOD(0x0165D5A0, void, OnAfterSerialize, (fsSerializationCallbackProcessor * __this, Type * storageType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHOD(0x0165D690, void, OnBeforeDeserializeAfterInstanceCreation, (fsSerializationCallbackProcessor * __this, Type * storageType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHODINFO(0x04772558, fsSerializationCallbackProcessor_OnBeforeDeserializeAfterInstanceCreation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0165D8A0, void, OnAfterDeserialize, (fsSerializationCallbackProcessor * __this, Type * storageType, Object * instance));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsSerializationCallbackProcessor * __this));
}
