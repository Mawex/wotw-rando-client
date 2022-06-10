#pragma once
#include <interception_macros.h>

namespace app::methods::GhostCameraPlugin {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::GhostCameraPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00E15450, void, RecordCycle, (app::GhostCameraPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostCameraPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E59B0, void, ctor, (app::GhostCameraPlugin * this_ptr))
}
