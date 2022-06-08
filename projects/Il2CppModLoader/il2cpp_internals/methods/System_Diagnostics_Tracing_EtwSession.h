#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EtwSession {
IL2CPP_REGISTER_METHOD(0x01749920, EtwSession *, GetEtwSession, (int32_t etwSessionId, bool bCreateIfNeeded));
IL2CPP_REGISTER_METHOD(0x01749F50, void, RemoveEtwSession, (EtwSession * etwSession));
IL2CPP_REGISTER_METHOD(0x0174A240, void, TrimGlobalList, ());
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (EtwSession * __this, int32_t etwSessionId));
IL2CPP_REGISTER_METHOD(0x0174A480, void, __cctor, ());
}
