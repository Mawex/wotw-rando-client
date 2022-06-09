#include <interception_macros.h>

namespace app::methods::KwolokBossEntity_OnDamageReceivedDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::KwolokBossEntity_OnDamageReceivedDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke, (app::KwolokBossEntity_OnDamageReceivedDelegate * this_ptr, app::DamageResult result));
IL2CPP_REGISTER_METHOD(0x012DEBE0, IAsyncResult *, BeginInvoke, (app::KwolokBossEntity_OnDamageReceivedDelegate * this_ptr, app::DamageResult result, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::KwolokBossEntity_OnDamageReceivedDelegate * this_ptr, app::IAsyncResult * result));
}
