#include <interception_macros.h>

namespace app::methods::System::Security::Principal::WindowsImpersonationContext {
IL2CPP_REGISTER_METHOD(0x01E1D690, void, __ctor, (WindowsImpersonationContext * __this, void * token));
IL2CPP_REGISTER_METHODINFO(0x04721648, WindowsImpersonationContext__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1D6C0, void, Dispose, (WindowsImpersonationContext * __this));
IL2CPP_REGISTER_METHOD(0x01E1D6E0, void, Undo, (WindowsImpersonationContext * __this));
IL2CPP_REGISTER_METHODINFO(0x04742D78, WindowsImpersonationContext_Undo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1D710, bool, CloseToken, (void * token));
IL2CPP_REGISTER_METHOD(0x01E1D720, void *, DuplicateToken, (void * token));
IL2CPP_REGISTER_METHOD(0x01E1D730, bool, SetCurrentToken, (void * token));
IL2CPP_REGISTER_METHOD(0x01E1D740, bool, RevertToSelf, ());
}
