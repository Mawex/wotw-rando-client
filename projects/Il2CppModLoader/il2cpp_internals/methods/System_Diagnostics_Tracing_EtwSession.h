#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::EtwSession {
IL2CPP_REGISTER_METHOD(0x01749920, EtwSession *, GetEtwSession, (int32_t etw_session_id, bool b_create_if_needed));
IL2CPP_REGISTER_METHOD(0x01749F50, void, RemoveEtwSession, (app::EtwSession * etw_session));
IL2CPP_REGISTER_METHOD(0x0174A240, void, TrimGlobalList, ());
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (app::EtwSession * this_ptr, int32_t etw_session_id));
IL2CPP_REGISTER_METHOD(0x0174A480, void, __cctor, ());
}
