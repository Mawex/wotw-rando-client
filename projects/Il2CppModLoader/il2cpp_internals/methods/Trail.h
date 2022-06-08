using namespace app;

namespace app::methods::Trail {
IL2CPP_REGISTER_METHOD(0x00B02030, void, OnPoolSpawned, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B020E0, void, OnEnable, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B021A0, void, OnDisable, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B02280, void, Awake, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B02390, void, OnDestroy, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B02430, Vector3, get_TargetPosition, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B024C0, void, FixedUpdate, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B02D60, void, LateUpdate, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_IsSuspended, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x003FF7A0, void, set_IsSuspended, (Trail_1 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF7B0, SuspendableMask__Enum, get_Mask, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B02FA0, void, set_Mask, (Trail_1 * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00B02430, Vector3, get_Position, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Position, (Trail_1 * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00B03050, Vector3, get_Speed, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B03070, void, set_Speed, (Trail_1 * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x009886D0, void, OnGoThroughPortal, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapEnter, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapExit, (Trail_1 * __this));
IL2CPP_REGISTER_METHOD(0x00B03080, void, __ctor, (Trail_1 * __this));
}
