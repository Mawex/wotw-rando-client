#include <interception_macros.h>

namespace app::methods::BreakPhysicsSystemAction {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (BreakPhysicsSystemAction * __this));
IL2CPP_REGISTER_METHOD(0x00D4AFE0, void, Perform, (BreakPhysicsSystemAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D4B420, void, Serialize, (BreakPhysicsSystemAction * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00D4B520, String *, GetNiceName, (BreakPhysicsSystemAction * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, GameObject *, GetDynamicGraphicTarget, (BreakPhysicsSystemAction * __this));
IL2CPP_REGISTER_METHOD(0x0087A2D0, void, __ctor, (BreakPhysicsSystemAction * __this));
}
