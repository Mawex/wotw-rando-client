#include <interception_macros.h>

namespace app::methods::InstantiateAction {
IL2CPP_REGISTER_METHOD(0x003FF2B0, int32_t, GetPrewarmAmount, (InstantiateAction * __this, GameObject * entry));
IL2CPP_REGISTER_METHOD(0x0062BD70, void, Perform, (InstantiateAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0062C2D0, String *, GetNiceName, (InstantiateAction * __this));
IL2CPP_REGISTER_METHOD(0x0062C3E0, bool, MakeInstanceFollowTarget, (InstantiateAction * __this, GameObject * instance, Transform * target));
IL2CPP_REGISTER_METHOD(0x0062C4E0, void, __ctor, (InstantiateAction * __this));
}
