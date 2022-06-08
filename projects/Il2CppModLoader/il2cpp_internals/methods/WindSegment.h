using namespace app;

namespace app::methods::WindSegment {
IL2CPP_REGISTER_METHOD(0x005782E0, void, Awake, (WindSegment * __this));
IL2CPP_REGISTER_METHOD(0x00578480, void, OnDestroy, (WindSegment * __this));
IL2CPP_REGISTER_METHOD(0x00578520, void, Serialize, (WindSegment * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x005785D0, void, OnEntered, (WindSegment * __this));
IL2CPP_REGISTER_METHOD(0x00578840, void, OnVisitedNextSegment, (WindSegment * __this));
IL2CPP_REGISTER_METHOD(0x00578900, void, FixedUpdate, (WindSegment * __this));
IL2CPP_REGISTER_METHOD(0x00578B50, void, Finish, (WindSegment * __this));
IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_IsSuspended, (WindSegment * __this));
IL2CPP_REGISTER_METHOD(0x003FF7A0, void, set_IsSuspended, (WindSegment * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF7B0, SuspendableMask__Enum, get_Mask, (WindSegment * __this));
IL2CPP_REGISTER_METHOD(0x00578C00, void, set_Mask, (WindSegment * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00578CB0, void, __ctor, (WindSegment * __this));
}
