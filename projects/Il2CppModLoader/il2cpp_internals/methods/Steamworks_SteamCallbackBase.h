using namespace app;

namespace app::methods::Steamworks::SteamCallbackBase {
IL2CPP_REGISTER_METHOD(0x027E3510, void *, BuildVTable, (CCallbackBaseVTable_RunCBDel * runCallback, CCallbackBaseVTable_RunCRDel * runCallResult, CCallbackBaseVTable_GetCallbackSizeBytesDel * getCallbackSizeBytes));
IL2CPP_REGISTER_METHOD(0x027E37C0, void, BuildCCallbackBase, (void * vtablePtr, int32_t callbackIdentity, CCallbackBase * * callbackBase, GCHandle * callbackBasePtr));
}
