#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_ {
    IL2CPP_REGISTER_METHOD(0x029FD190, void, Invoke, (app::Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_ * this_ptr, app::XalUserGetTokenAndSignatureData obj))
    IL2CPP_REGISTER_METHODINFO(0x047300B8, Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04760DA0, Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029FF9A0, app::IAsyncResult *, BeginInvoke, (app::Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_ * this_ptr, app::XalUserGetTokenAndSignatureData obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_ * this_ptr, app::IAsyncResult * result))
}
