#include <interception_macros.h>

namespace app::methods::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate * this_ptr, app::float * a));
IL2CPP_REGISTER_METHOD(0x012E7A80, IAsyncResult *, BeginInvoke, (app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate * this_ptr, app::float * a, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate * this_ptr, app::float * a, app::IAsyncResult * result));
}
