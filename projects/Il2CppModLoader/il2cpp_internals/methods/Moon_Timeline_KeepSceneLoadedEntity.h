#include <interception_macros.h>

namespace app::methods::Moon::Timeline::KeepSceneLoadedEntity {
IL2CPP_REGISTER_METHOD(0x00417920, UpdateCategory__Enum, get_UpdateCategory, (KeepSceneLoadedEntity * __this));
IL2CPP_REGISTER_METHOD(0x00771CC0, void, OnStartPlayback, (KeepSceneLoadedEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007721E0, void, OnUpdateEntity, (KeepSceneLoadedEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x007725D0, void, OnLoadedScene, (KeepSceneLoadedEntity * __this, bool success));
IL2CPP_REGISTER_METHODINFO(0x04736528, KeepSceneLoadedEntity_OnLoadedScene__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007725F0, void, OnLoadedScene, (KeepSceneLoadedEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007726D0, void, OnStopPlayback, (KeepSceneLoadedEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, (KeepSceneLoadedEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, (KeepSceneLoadedEntity * __this));
IL2CPP_REGISTER_METHOD(0x007729F0, void, __ctor, (KeepSceneLoadedEntity * __this));
}
