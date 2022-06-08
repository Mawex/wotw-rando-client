#include <interception_macros.h>

namespace app::methods::Moon::SlugFastBehaviour {
IL2CPP_REGISTER_METHOD(0x007586C0, Vector3, get_PatrolOrigin, (SlugFastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E2D530, Vector3, get_TargetPosition, (SlugFastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E2D580, void, OnEntityInitialized, (SlugFastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E2D650, void, OnEnter, (SlugFastBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E2D860, Vector2, get_MovingDirectionRotated, (SlugFastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E2D980, BehaviourStatus__Enum, OnExecute, (SlugFastBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E2DE50, void, OnExit, (SlugFastBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00E2DF00, void, UpdateDirection, (SlugFastBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00E2E0E0, void, __ctor, (SlugFastBehaviour * __this));
}
