#include <interception_macros.h>

namespace app::methods::Moon::EditorTools::SceneTracking::SceneDeletionExtension {
IL2CPP_REGISTER_METHOD(0x012083D0, SceneDeletionFlags__Enum, Add, (SceneDeletionFlags__Enum me, SceneDeletionFlags__Enum toAdd));
IL2CPP_REGISTER_METHOD(0x012083E0, SceneDeletionFlags__Enum, Remove, (SceneDeletionFlags__Enum me, SceneDeletionFlags__Enum toRemove));
IL2CPP_REGISTER_METHOD(0x00CD0C30, bool, HasFlags, (SceneDeletionFlags__Enum me, SceneDeletionFlags__Enum toCheck));
IL2CPP_REGISTER_METHOD(0x012083F0, int32_t, GetActiveFlagsCount, (SceneDeletionFlags__Enum me));
}
