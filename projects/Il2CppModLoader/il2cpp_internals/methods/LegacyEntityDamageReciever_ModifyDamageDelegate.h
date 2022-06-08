#include <interception_macros.h>

namespace app::methods::LegacyEntityDamageReciever_ModifyDamageDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (LegacyEntityDamageReciever_ModifyDamageDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (LegacyEntityDamageReciever_ModifyDamageDelegate * __this, Damage * d));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (LegacyEntityDamageReciever_ModifyDamageDelegate * __this, Damage * d, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (LegacyEntityDamageReciever_ModifyDamageDelegate * __this, IAsyncResult * result));
}
