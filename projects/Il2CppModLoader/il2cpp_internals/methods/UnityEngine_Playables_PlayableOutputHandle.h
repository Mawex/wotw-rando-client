#include <interception_macros.h>

namespace app::methods::UnityEngine::Playables::PlayableOutputHandle {
IL2CPP_REGISTER_METHOD(0x02966B30, PlayableOutputHandle, get_Null, ());
IL2CPP_REGISTER_METHOD(0x00216C90, int32_t, GetHashCode, (PlayableOutputHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02966BE0, bool, operator___, (PlayableOutputHandle lhs, PlayableOutputHandle rhs));
IL2CPP_REGISTER_METHOD(0x00216F50, bool, Equals, (PlayableOutputHandle__Boxed * __this, Object * p));
IL2CPP_REGISTER_METHOD(0x00217030, bool, Equals, (PlayableOutputHandle__Boxed * __this, PlayableOutputHandle other));
IL2CPP_REGISTER_METHOD(0x029651B0, bool, CompareVersion, (PlayableOutputHandle lhs, PlayableOutputHandle rhs));
IL2CPP_REGISTER_METHOD(0x00217050, bool, IsValid, (PlayableOutputHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00217060, Type *, GetPlayableOutputType, (PlayableOutputHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00217070, void, SetSourcePlayable, (PlayableOutputHandle__Boxed * __this, PlayableHandle target));
IL2CPP_REGISTER_METHOD(0x00217090, void, SetSourceOutputPort, (PlayableOutputHandle__Boxed * __this, int32_t port));
IL2CPP_REGISTER_METHOD(0x02967110, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x029671A0, bool, IsValid_Injected, (PlayableOutputHandle * _unity_self));
IL2CPP_REGISTER_METHOD(0x029671F0, Type *, GetPlayableOutputType_Injected, (PlayableOutputHandle * _unity_self));
IL2CPP_REGISTER_METHOD(0x02967240, void, SetSourcePlayable_Injected, (PlayableOutputHandle * _unity_self, PlayableHandle * target));
IL2CPP_REGISTER_METHOD(0x029672A0, void, SetSourceOutputPort_Injected, (PlayableOutputHandle * _unity_self, int32_t port));
IL2CPP_REGISTER_METHOD(0x0012D5F0, bool, IsPlayableOutputOfType, (PlayableOutputHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012D6B0, bool, IsPlayableOutputOfType, (PlayableOutputHandle__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04712C48, PlayableOutputHandle_IsPlayableOutputOfType_1__MethodInfo);
}
