#include <interception_macros.h>

namespace app::methods::CharacterLeftRightMovement_PreDashDelegateType {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::CharacterLeftRightMovement_PreDashDelegateType * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::CharacterLeftRightMovement_PreDashDelegateType * this_ptr, app::CharacterLeftRightMovement * left_right_movement));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::CharacterLeftRightMovement_PreDashDelegateType * this_ptr, app::CharacterLeftRightMovement * left_right_movement, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::CharacterLeftRightMovement_PreDashDelegateType * this_ptr, app::IAsyncResult * result));
}
