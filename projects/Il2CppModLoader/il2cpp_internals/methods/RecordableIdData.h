using namespace app;

namespace app::methods::RecordableIdData {
IL2CPP_REGISTER_METHOD(0x00114C30, void, __ctor, (RecordableIdData__Boxed * __this, RecordableType__Enum recordableType, int64_t id, String * assetGuid));
IL2CPP_REGISTER_METHOD(0x00114C40, void, __ctor, (RecordableIdData__Boxed * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x00114C50, void, Save, (RecordableIdData__Boxed * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x0013BB70, Object *, GetAssetFromGuid, (RecordableIdData__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, GameObject *, GetAssetFromGuid, (RecordableIdData__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04746808, RecordableIdData_GetAssetFromGuid_1__MethodInfo);
}
