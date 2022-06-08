using namespace app;

namespace app::methods::FullSerializer::Internal::fsForwardConverter {
IL2CPP_REGISTER_METHOD(0x01655A90, void, __ctor, (fsForwardConverter * __this, fsForwardAttribute * attribute));
IL2CPP_REGISTER_METHOD(0x01655AB0, bool, CanProcess, (fsForwardConverter * __this, Type * type));
IL2CPP_REGISTER_METHODINFO(0x0477EF78, fsForwardConverter_CanProcess__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01655B10, fsResult, GetProperty, (fsForwardConverter * __this, Object * instance, fsMetaProperty * * property));
IL2CPP_REGISTER_METHOD(0x01655D90, fsResult, TrySerialize, (fsForwardConverter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01655F50, fsResult, TryDeserialize, (fsForwardConverter * __this, fsData * data, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01656150, Object *, CreateInstance, (fsForwardConverter * __this, fsData * data, Type * storageType));
}
