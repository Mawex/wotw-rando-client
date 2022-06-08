#include <interception_macros.h>

namespace app::methods::BubblemakerBlocked {
IL2CPP_REGISTER_METHOD(0x00805460, void, Start, (BubblemakerBlocked * __this));
IL2CPP_REGISTER_METHOD(0x00805660, void, OnDestroy, (BubblemakerBlocked * __this));
IL2CPP_REGISTER_METHOD(0x00805710, void, UnlockBubblemaker, (BubblemakerBlocked * __this));
IL2CPP_REGISTER_METHODINFO(0x0474F448, BubblemakerBlocked_UnlockBubblemaker__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00805800, void, UpdateState, (BubblemakerBlocked * __this));
IL2CPP_REGISTER_METHOD(0x00805A90, void, Apply, (BubblemakerBlocked * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (BubblemakerBlocked * __this));
IL2CPP_REGISTER_METHOD(0x002FBD20, IUberState__Array *, get_AffectingUberStates, (BubblemakerBlocked * __this));
IL2CPP_REGISTER_METHOD(0x002FBD40, List_1_UnityEngine_GameObject_ *, get_AllTargets, (BubblemakerBlocked * __this));
IL2CPP_REGISTER_METHOD(0x00805420, void, __ctor, (BubblemakerBlocked * __this));
}
