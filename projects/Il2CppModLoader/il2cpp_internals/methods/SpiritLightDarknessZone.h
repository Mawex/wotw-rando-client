using namespace app;

namespace app::methods::SpiritLightDarknessZone {
IL2CPP_REGISTER_METHOD(0x00D619D0, Bounds, get_WorldSpaceBoundingBox, (SpiritLightDarknessZone * __this));
IL2CPP_REGISTER_METHOD(0x00D61BE0, bool, IsInsideDarknessZone, (Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x00D61DC0, void, OnEnable, (SpiritLightDarknessZone * __this));
IL2CPP_REGISTER_METHOD(0x00D61E80, void, OnDisable, (SpiritLightDarknessZone * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SpiritLightDarknessZone * __this));
IL2CPP_REGISTER_METHOD(0x00D61F40, void, __cctor, (MethodInfo * method));
}
