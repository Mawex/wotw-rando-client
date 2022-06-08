using namespace app;

namespace app::methods::Moon::PhysicsUpdateHandlerManager {
IL2CPP_REGISTER_METHOD(0x00C3B590, void, Reset, (PhysicsUpdateHandlerManager * __this));
IL2CPP_REGISTER_METHOD(0x00C3B7E0, void, Init, (PhysicsUpdateHandlerManager * __this, Component_1__Array * updateHandlerComponents));
IL2CPP_REGISTER_METHOD(0x00C3BF20, void, UpdateNonFixed, (PhysicsUpdateHandlerManager * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00C3C1A0, void, UpdateFixed, (PhysicsUpdateHandlerManager * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00C3C420, void, UpdateLate, (PhysicsUpdateHandlerManager * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00C3C6A0, void, UpdateAll, (PhysicsUpdateHandlerManager * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00C3C6E0, PhysicsUpdateHandlerAttribute *, GetTypeInfo, (Type * type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PhysicsUpdateHandlerManager * __this));
IL2CPP_REGISTER_METHOD(0x00C3C8A0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00C3CA10, IJobSystem__Array *, _Init_g__CreateSystems_5_0, (Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ * systemDictionary));
}
