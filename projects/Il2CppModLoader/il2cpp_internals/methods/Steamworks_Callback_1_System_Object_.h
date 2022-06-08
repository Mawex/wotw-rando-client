#include <interception_macros.h>

namespace app::methods::Steamworks::Callback_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x01D1A5D0, void, add_m_Func, (Callback_1_System_Object_ * __this, Callback_1_T_DispatchDelegate_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01D1A690, void, remove_m_Func, (Callback_1_System_Object_ * __this, Callback_1_T_DispatchDelegate_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x01D1BAA0, Callback_1_System_Object_ *, Create, (Callback_1_T_DispatchDelegate_System_Object_ * func));
IL2CPP_REGISTER_METHOD(0x01D1BC00, Callback_1_System_Object_ *, CreateGameServer, (Callback_1_T_DispatchDelegate_System_Object_ * func));
IL2CPP_REGISTER_METHOD(0x01D1BD60, void, __ctor, (Callback_1_System_Object_ * __this, Callback_1_T_DispatchDelegate_System_Object_ * func, bool bGameServer));
IL2CPP_REGISTER_METHOD(0x01D1BF70, void, Finalize, (Callback_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D1C020, void, Dispose, (Callback_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D1C130, void, Register, (Callback_1_System_Object_ * __this, Callback_1_T_DispatchDelegate_System_Object_ * func));
IL2CPP_REGISTER_METHODINFO(0x04742F70, Callback_1_System_Object__Register__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D1C2A0, void, Unregister, (Callback_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D1B050, void, SetGameserverFlag, (Callback_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D1C2C0, void, OnRunCallback, (Callback_1_System_Object_ * __this, void * thisptr, void * pvParam));
IL2CPP_REGISTER_METHOD(0x01D1C450, void, OnRunCallResult, (Callback_1_System_Object_ * __this, void * thisptr, void * pvParam, bool bFailed, uint64_t hSteamAPICall));
IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, OnGetCallbackSizeBytes, (Callback_1_System_Object_ * __this, void * thisptr));
IL2CPP_REGISTER_METHOD(0x01D1C5E0, void, BuildCCallbackBase, (Callback_1_System_Object_ * __this));
}
