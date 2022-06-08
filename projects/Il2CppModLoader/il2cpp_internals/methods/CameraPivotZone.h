#include <interception_macros.h>

namespace app::methods::CameraPivotZone {
IL2CPP_REGISTER_METHOD(0x0169CEB0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0169CF80, GameplayCamera *, get_Camera, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169D020, float, get_maxWeight, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169D280, bool, get_IsInside, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169DA80, void, InstantUpdate, ());
IL2CPP_REGISTER_METHOD(0x0169DC00, void, ImmediatelyUpdate, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169DEC0, void, OnDestroy, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169DED0, void, OnEnable, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169DF90, void, OnDisable, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169E080, void, ActivateTargetLayer, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169E2E0, void, DeactivateTargetLayer, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169E4D0, void, Serialize, (CameraPivotZone * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0169E580, void, RemoveTargetLayerIfExists, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169E700, void, AddTargetLayerIfNotExist, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169E770, void, FixedUpdate, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x00417920, SelectableCategory__Enum, get_Category, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsSuspended, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsSuspended, (CameraPivotZone * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF7D0, SuspendableMask__Enum, get_Mask, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169EA50, void, set_Mask, (CameraPivotZone * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, get_VirtualTimelineTarget, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169EB00, String *, get_NameDisplayedOnClip, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169EB80, void, Build, (CameraPivotZone * __this, VirtualClipsBuilder * builder));
IL2CPP_REGISTER_METHOD(0x0169EDD0, bool, get_IsInfluencingCamera, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169EF80, void, __ctor, (CameraPivotZone * __this));
IL2CPP_REGISTER_METHOD(0x0169F200, void, __cctor, ());
}
