#include <interception_macros.h>

namespace app::methods::SceneUberStateCondition {
IL2CPP_REGISTER_METHOD(0x00BC0750, MoonGuid *, get_MoonGuid, (SceneUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x00BC0950, SceneMetaData *, get_SceneMetaData, (SceneUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x00BC0A10, void, set_SceneMetaData, (SceneUberStateCondition * __this, SceneMetaData * value));
IL2CPP_REGISTER_METHOD(0x00BC0C70, SceneMetaData *, CurrentMetaData, (SceneUberStateCondition * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00BC0D30, bool, get_IsInside, (SceneUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x00BC0DE0, SceneUberStateCondition_PositionSource__Enum, get_Source, (SceneUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x00BC0E90, void, __ctor, (SceneUberStateCondition * __this));
IL2CPP_REGISTER_METHOD(0x00BC12F0, bool, Validate, (SceneUberStateCondition * __this));
}
