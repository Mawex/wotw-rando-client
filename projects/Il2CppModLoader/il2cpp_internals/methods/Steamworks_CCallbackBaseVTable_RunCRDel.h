using namespace app;

namespace app::methods::Steamworks::CCallbackBaseVTable_RunCRDel {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CCallbackBaseVTable_RunCRDel * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015F7A10, void, Invoke, (CCallbackBaseVTable_RunCRDel * __this, void * thisptr, void * pvParam, bool bIOFailure, uint64_t hSteamAPICall));
IL2CPP_REGISTER_METHOD(0x015F7E30, IAsyncResult *, BeginInvoke, (CCallbackBaseVTable_RunCRDel * __this, void * thisptr, void * pvParam, bool bIOFailure, uint64_t hSteamAPICall, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (CCallbackBaseVTable_RunCRDel * __this, IAsyncResult * result));
}
