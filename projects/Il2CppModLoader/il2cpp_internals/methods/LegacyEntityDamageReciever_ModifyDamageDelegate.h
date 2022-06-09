#include <interception_macros.h>

namespace app::methods::LegacyEntityDamageReciever_ModifyDamageDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::LegacyEntityDamageReciever_ModifyDamageDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::LegacyEntityDamageReciever_ModifyDamageDelegate * this_ptr, app::Damage * d));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::LegacyEntityDamageReciever_ModifyDamageDelegate * this_ptr, app::Damage * d, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::LegacyEntityDamageReciever_ModifyDamageDelegate * this_ptr, app::IAsyncResult * result));
}
