using namespace app;

namespace app::methods::Steamworks::CallResult_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x002FB9B0, SteamAPICall_t, get_Handle, (CallResult_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D1A5D0, void, add_m_Func, (CallResult_1_System_Object_ * __this, CallResult_1_T_APIDispatchDelegate_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01D1A690, void, remove_m_Func, (CallResult_1_System_Object_ * __this, CallResult_1_T_APIDispatchDelegate_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01D1A750, CallResult_1_System_Object_ *, Create, (CallResult_1_T_APIDispatchDelegate_System_Object_ * func));
IL2CPP_REGISTER_METHOD(0x01D1A8B0, void, __ctor, (CallResult_1_System_Object_ * __this, CallResult_1_T_APIDispatchDelegate_System_Object_ * func));
IL2CPP_REGISTER_METHOD(0x01D1AAD0, void, Finalize, (CallResult_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D1AB80, void, Dispose, (CallResult_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D1AC90, void, Set, (CallResult_1_System_Object_ * __this, SteamAPICall_t hAPICall, CallResult_1_T_APIDispatchDelegate_System_Object_ * func));
IL2CPP_REGISTER_METHODINFO(0x04736C08, CallResult_1_System_Object__Set__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D1AE70, bool, IsActive, (CallResult_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D1AF30, void, Cancel, (CallResult_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D1B050, void, SetGameserverFlag, (CallResult_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D1B070, void, OnRunCallback, (CallResult_1_System_Object_ * __this, void * thisptr, void * pvParam));
IL2CPP_REGISTER_METHOD(0x01D1B230, void, OnRunCallResult, (CallResult_1_System_Object_ * __this, void * thisptr, void * pvParam, bool bFailed, uint64_t hSteamAPICall_));
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, OnGetCallbackSizeBytes, (CallResult_1_System_Object_ * __this, void * thisptr));
IL2CPP_REGISTER_METHOD(0x01D1B430, void, BuildCCallbackBase, (CallResult_1_System_Object_ * __this));
}
