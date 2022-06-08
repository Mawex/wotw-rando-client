using namespace app;

namespace app::methods::STCDemo {
IL2CPP_REGISTER_METHOD(0x00C07A70, void, Start, (STCDemo * __this));
IL2CPP_REGISTER_METHOD(0x00C07A80, void, SubscribeOnRemoteAction, (STCDemo * __this));
IL2CPP_REGISTER_METHOD(0x00C07C00, void, ActionActivated, (STCDemo * __this));
IL2CPP_REGISTER_METHODINFO(0x04786CB0, STCDemo_ActionActivated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C07DB0, void, Serialize, (STCDemo * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (STCDemo * __this));
}
