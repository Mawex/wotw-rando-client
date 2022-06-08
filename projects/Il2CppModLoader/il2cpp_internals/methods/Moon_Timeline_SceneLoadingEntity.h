#include <interception_macros.h>

namespace app::methods::Moon::Timeline::SceneLoadingEntity {
IL2CPP_REGISTER_METHOD(0x00783C60, void, OnStartPlayback, (SceneLoadingEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00783DE0, void, OnStopPlayback, (SceneLoadingEntity * __this));
IL2CPP_REGISTER_METHOD(0x00783EC0, void, OnUpdateEntity, (SceneLoadingEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00783F80, void, OnValidate, (SceneLoadingEntity * __this));
IL2CPP_REGISTER_METHOD(0x007840A0, void, __ctor, (SceneLoadingEntity * __this));
}
