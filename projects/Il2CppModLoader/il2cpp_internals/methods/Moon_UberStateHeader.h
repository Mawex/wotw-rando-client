using namespace app;

namespace app::methods::Moon::UberStateHeader {
IL2CPP_REGISTER_METHOD(0x00420230, int64_t, get_Size, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01B6D030, ValueTuple_2_Moon_UberID_Moon_UberStateHeader_UberStateType_, Read, (UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x01B6D200, void, Write, (UberStateArchive * archive, UberID * stateID, UberStateHeader_UberStateType__Enum type));
}
