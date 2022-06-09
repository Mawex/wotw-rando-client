#include <interception_macros.h>

namespace app::methods::Moon_Timeline::WaitForTriggerEntity {
IL2CPP_REGISTER_METHOD(0x00417920, UpdateCategory__Enum, get_UpdateCategory, (app::WaitForTriggerEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D1E5F0, Rect, get_Bounds, (app::WaitForTriggerEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D1E7C0, bool, IsInside, (app::WaitForTriggerEntity * this_ptr, app::Vector3 point));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, UsingTimeout, (app::WaitForTriggerEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D1E990, void, OnStartPlayback, (app::WaitForTriggerEntity * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00D1E9A0, void, OnUpdateEntity, (app::WaitForTriggerEntity * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x00778590, void, OnStopPlayback, (app::WaitForTriggerEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D1EB50, bool, HasFinished, (app::WaitForTriggerEntity * this_ptr, int32_t event_id));
IL2CPP_REGISTER_METHOD(0x00420EE0, RecordableParsingGroup__Enum, get_ParsingGroup, (app::WaitForTriggerEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D1ECC0, void, __ctor, (app::WaitForTriggerEntity * this_ptr));
}
