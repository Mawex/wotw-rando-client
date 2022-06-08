using namespace app;

namespace app::methods::Moon::UpdateHandle {
IL2CPP_REGISTER_METHOD(0x002FC6D0, UpdateType__Enum, get_UpdateType, (UpdateHandle * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_ExecutionOrderOffset, (UpdateHandle * __this));
IL2CPP_REGISTER_METHOD(0x0313D6C0, void, __ctor, (UpdateHandle * __this, Action_1_Single_ * method_1, int32_t order, UpdateType__Enum updateType));
IL2CPP_REGISTER_METHOD(0x0313D6D0, void, OnUpdate, (UpdateHandle * __this, float deltaTime));
}
