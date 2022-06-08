using namespace app;

namespace app::methods::AsyncRaycast_Manager {
IL2CPP_REGISTER_METHOD(0x00842CF0, AsyncRaycast_Manager *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00842F80, void, __ctor, (AsyncRaycast_Manager * __this));
IL2CPP_REGISTER_METHOD(0x008430D0, void, AddInstance, (AsyncRaycast_Manager * __this, AsyncRaycast * arc));
IL2CPP_REGISTER_METHOD(0x00843290, void, RemoveInstance, (AsyncRaycast_Manager * __this, AsyncRaycast * arc));
IL2CPP_REGISTER_METHOD(0x00843450, void, RefreshBufferCapacity, (AsyncRaycast_Manager * __this));
IL2CPP_REGISTER_METHOD(0x008436F0, void, ScheduleCasts, (AsyncRaycast_Manager * __this));
IL2CPP_REGISTER_METHOD(0x00843AA0, void, CompleteCasts, (AsyncRaycast_Manager * __this));
}
