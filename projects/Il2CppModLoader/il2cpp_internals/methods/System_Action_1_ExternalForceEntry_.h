#include <interception_macros.h>

namespace app::methods::System::Action_1_ExternalForceEntry_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_ExternalForceEntry_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke, (app::Action_1_ExternalForceEntry_ * this_ptr, app::ExternalForceEntry obj));
IL2CPP_REGISTER_METHOD(0x029FD7E0, IAsyncResult *, BeginInvoke, (app::Action_1_ExternalForceEntry_ * this_ptr, app::ExternalForceEntry obj, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_ExternalForceEntry_ * this_ptr, app::IAsyncResult * result));
}
