using namespace app;

namespace app::methods::WorldMapLogic {
IL2CPP_REGISTER_METHOD(0x00582C10, void, Awake, (WorldMapLogic * __this));
IL2CPP_REGISTER_METHOD(0x00582CE0, void, OnDestroy, (WorldMapLogic * __this));
IL2CPP_REGISTER_METHOD(0x00582E20, void, FixedUpdate, (WorldMapLogic * __this));
IL2CPP_REGISTER_METHOD(0x00583500, void, UpdateCurrentArea, (WorldMapLogic * __this));
IL2CPP_REGISTER_METHOD(0x00583910, RuntimeGameWorldArea *, FindAreaFromPosition, (WorldMapLogic * __this, Vector3 cameraPosition));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (WorldMapLogic * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (WorldMapLogic * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FD3F0, SuspendableMask__Enum, get_Mask, (WorldMapLogic * __this));
IL2CPP_REGISTER_METHOD(0x00583BA0, void, set_Mask, (WorldMapLogic * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00583C50, void, __ctor, (WorldMapLogic * __this));
IL2CPP_REGISTER_METHOD(0x00583D20, void, __cctor, (MethodInfo * method));
}
