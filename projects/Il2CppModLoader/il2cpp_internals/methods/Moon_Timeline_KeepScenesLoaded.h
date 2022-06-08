#include <interception_macros.h>

namespace app::methods::Moon::Timeline::KeepScenesLoaded {
IL2CPP_REGISTER_METHOD(0x00772AB0, void, OnEnable, (KeepScenesLoaded * __this));
IL2CPP_REGISTER_METHOD(0x00772C80, void, OnDisable, (KeepScenesLoaded * __this));
IL2CPP_REGISTER_METHOD(0x00772E50, void, OnDestroy, (KeepScenesLoaded * __this));
IL2CPP_REGISTER_METHOD(0x00772E60, void, PreloadScenes, (KeepScenesLoaded * __this));
IL2CPP_REGISTER_METHOD(0x00773010, void, AllowUnloading, (KeepScenesLoaded * __this));
IL2CPP_REGISTER_METHOD(0x00773150, void, UpdatePreloadState, (KeepScenesLoaded * __this));
IL2CPP_REGISTER_METHODINFO(0x0477DC10, KeepScenesLoaded_UpdatePreloadState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00773150, void, Apply, (KeepScenesLoaded * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (KeepScenesLoaded * __this));
IL2CPP_REGISTER_METHOD(0x007731B0, IUberState__Array *, get_AffectingUberStates, (KeepScenesLoaded * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, List_1_UnityEngine_GameObject_ *, get_AllTargets, (KeepScenesLoaded * __this));
IL2CPP_REGISTER_METHOD(0x007732B0, void, __ctor, (KeepScenesLoaded * __this));
}
