#include <interception_macros.h>

namespace app::methods::DropSlugAlertBehaviour {
IL2CPP_REGISTER_METHOD(0x00BE0A40, void, OnEnter, (DropSlugAlertBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00BE0C20, void, PlayAlertLoop, (DropSlugAlertBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04730E80, DropSlugAlertBehaviour_PlayAlertLoop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BE0C50, void, OnExit, (DropSlugAlertBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecute, (DropSlugAlertBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00BE0E50, void, PlayTimeline, (DropSlugAlertBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00BE0E80, void, __ctor, (DropSlugAlertBehaviour * __this));
}
