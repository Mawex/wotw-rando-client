using namespace app;

namespace app::methods::VoidUberShaderRebindService {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Rebind, (VoidUberShaderRebindService * __this, UberShaderComponent * target, RebindingReason__Enum reason));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RebindAsync, (VoidUberShaderRebindService * __this, UberShaderComponent * target, RebindingReason__Enum reason));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishCurrentRebinding, (VoidUberShaderRebindService * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterForUpdateIfNeeded, (VoidUberShaderRebindService * __this, UberShaderComponent * uberShaderComponent));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (VoidUberShaderRebindService * __this));
}
