using namespace app;

namespace app::methods::Moon::ExecutionOrderMap {
IL2CPP_REGISTER_METHOD(0x01221A00, IMoonDriverExecutionOrderMap *, Get, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01221B40, bool, TryGetExecutionOrderFor, (ExecutionOrderMap * __this, Type * type, int32_t * order));
IL2CPP_REGISTER_METHOD(0x01221D10, void, __ctor, (ExecutionOrderMap * __this));
}
