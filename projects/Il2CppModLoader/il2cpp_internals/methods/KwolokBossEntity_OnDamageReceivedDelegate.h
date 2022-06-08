using namespace app;

namespace app::methods::KwolokBossEntity_OnDamageReceivedDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (KwolokBossEntity_OnDamageReceivedDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke, (KwolokBossEntity_OnDamageReceivedDelegate * __this, DamageResult result));
IL2CPP_REGISTER_METHOD(0x012DEBE0, IAsyncResult *, BeginInvoke, (KwolokBossEntity_OnDamageReceivedDelegate * __this, DamageResult result, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (KwolokBossEntity_OnDamageReceivedDelegate * __this, IAsyncResult * result));
}
