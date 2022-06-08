#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::OffsetModifier {
IL2CPP_REGISTER_METHOD(0x02A18130, float, get_deltaTime, (OffsetModifier * __this));
IL2CPP_REGISTER_METHOD(0x02A18190, void, Start, (OffsetModifier * __this));
IL2CPP_REGISTER_METHOD(0x02A182E0, IEnumerator *, Initiate, (OffsetModifier * __this));
IL2CPP_REGISTER_METHOD(0x02A18430, void, ModifyOffset, (OffsetModifier * __this));
IL2CPP_REGISTER_METHODINFO(0x0473E500, OffsetModifier_ModifyOffset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A18600, void, ApplyLimits, (OffsetModifier * __this, OffsetModifier_OffsetLimits__Array * limits));
IL2CPP_REGISTER_METHOD(0x02A187A0, void, OnDestroy, (OffsetModifier * __this));
IL2CPP_REGISTER_METHOD(0x008A2C20, void, __ctor, (OffsetModifier * __this));
}
