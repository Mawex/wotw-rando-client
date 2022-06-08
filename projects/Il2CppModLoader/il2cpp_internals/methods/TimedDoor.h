using namespace app;

namespace app::methods::TimedDoor {
IL2CPP_REGISTER_METHOD(0x010F3C70, void, Awake, (TimedDoor * __this));
IL2CPP_REGISTER_METHOD(0x0090CE60, void, Serialize, (TimedDoor * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x010F3D10, void, OpenTheDoor, (TimedDoor * __this));
IL2CPP_REGISTER_METHOD(0x010F3D50, void, CloseTheDoor, (TimedDoor * __this));
IL2CPP_REGISTER_METHOD(0x010F3E60, void, PuzzleSolved, (TimedDoor * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (TimedDoor * __this));
}
