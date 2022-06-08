#include <interception_macros.h>

namespace app::methods::Moon::SuspensionManager_SuspendableInfo {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Counter, (SuspensionManager_SuspendableInfo * __this));
IL2CPP_REGISTER_METHOD(0x031AF650, void, SuspendObj, (SuspensionManager_SuspendableInfo * __this, ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x031AF740, void, ResumeObj, (SuspensionManager_SuspendableInfo * __this, ISuspendable * suspendable));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SuspensionManager_SuspendableInfo * __this));
}
