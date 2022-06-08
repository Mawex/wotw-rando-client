using namespace app;

namespace app::methods::PetrifiedFog {
IL2CPP_REGISTER_METHOD(0x0049ABF0, float, get_RemainingDuration, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0049AC70, void, OnEnable, (PetrifiedFog * __this));
IL2CPP_REGISTER_METHOD(0x0049AC80, void, Activate, (PetrifiedFog * __this));
IL2CPP_REGISTER_METHOD(0x0049AD70, bool, PositionInPetrifiedFog, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x0049AF20, bool, InThisZone, (PetrifiedFog * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0049AF70, void, OnDisable, (PetrifiedFog * __this));
IL2CPP_REGISTER_METHOD(0x0049AF80, void, Deactivate, (PetrifiedFog * __this));
IL2CPP_REGISTER_METHOD(0x0049B070, void, FixedUpdate, (PetrifiedFog * __this));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (PetrifiedFog * __this));
IL2CPP_REGISTER_METHOD(0x0049BF30, void, Serialize, (PetrifiedFog * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (PetrifiedFog * __this));
IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (PetrifiedFog * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF610, SuspendableMask__Enum, get_Mask, (PetrifiedFog * __this));
IL2CPP_REGISTER_METHOD(0x0049C040, void, set_Mask, (PetrifiedFog * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0049C0F0, void, __ctor, (PetrifiedFog * __this));
}
