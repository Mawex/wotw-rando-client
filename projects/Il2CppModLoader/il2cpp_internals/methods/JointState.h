#include <interception_macros.h>

namespace app::methods::JointState {
IL2CPP_REGISTER_METHOD(0x0064C5D0, void, Break, (JointState * __this));
IL2CPP_REGISTER_METHOD(0x0064C820, Object *, Clone, (JointState * __this));
IL2CPP_REGISTER_METHOD(0x0064CA60, void, ApplyState, (JointState * __this, bool refreshJoint, bool checkForDisabled, bool forceRefresh));
IL2CPP_REGISTER_METHOD(0x0064D3D0, void, SaveJointState, (JointState * __this, ConfigurableJoint * saveJoint));
IL2CPP_REGISTER_METHOD(0x0064D8A0, void, __ctor, (JointState * __this));
}
