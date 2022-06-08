#include <interception_macros.h>

namespace app::methods::Moon::MoonDriverSystem {
IL2CPP_REGISTER_METHOD(0x0313CAF0, MoonDriverSystem *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x002FB9B0, List_1_Moon_IDrivableGroup_ *, get_Groups, (MoonDriverSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, List_1_Moon_IDrivable_ *, get_Drivables, (MoonDriverSystem * __this));
IL2CPP_REGISTER_METHOD(0x0313CD60, void, Awake, (MoonDriverSystem * __this));
IL2CPP_REGISTER_METHOD(0x0313CE70, void, OnDestroy, (MoonDriverSystem * __this));
IL2CPP_REGISTER_METHOD(0x0313CEF0, void, DrivableInsertSort, (MoonDriverSystem * __this, IDrivable * drivable));
IL2CPP_REGISTER_METHOD(0x0313D070, void, FixedUpdate, (MoonDriverSystem * __this));
IL2CPP_REGISTER_METHOD(0x0313D0D0, void, OnUpdate, (MoonDriverSystem * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0313D2C0, void, __ctor, (MoonDriverSystem * __this));
IL2CPP_REGISTER_METHOD(0x018ECA60, IDrivableGroup *, GetGroup, (MoonDriverSystem * __this));
IL2CPP_REGISTER_METHOD(0x01550580, void, RegisterDrivible, (MoonDriverSystem * __this, Object * drivable, String * groupNameOverride));
IL2CPP_REGISTER_METHOD(0x01550BE0, void, UnregisterDrivible, (MoonDriverSystem * __this, Object * drivable));
IL2CPP_REGISTER_METHOD(0x01550480, void, KillGroup, (MoonDriverSystem * __this, IDrivableGroup * group));
IL2CPP_REGISTER_METHOD(0x015509A0, void, RegisterGroup, (MoonDriverSystem * __this, IDrivableGroup * drivableGroup));
IL2CPP_REGISTER_METHOD(0x01550780, void, RegisterGenericGroup, (MoonDriverSystem * __this));
IL2CPP_REGISTER_METHOD(0x01B31E90, bool, Contains, (MoonDriverSystem * __this, Object * drivable));
}
