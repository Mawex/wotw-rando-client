#include <interception_macros.h>

namespace app::methods::UnityEngine::Playables::PlayableBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayableBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGraphStart, (PlayableBehaviour * __this, Playable playable));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGraphStop, (PlayableBehaviour * __this, Playable playable));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlayableCreate, (PlayableBehaviour * __this, Playable playable));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlayableDestroy, (PlayableBehaviour * __this, Playable playable));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBehaviourPlay, (PlayableBehaviour * __this, Playable playable, FrameData info));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBehaviourPause, (PlayableBehaviour * __this, Playable playable, FrameData info));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrepareFrame, (PlayableBehaviour * __this, Playable playable, FrameData info));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ProcessFrame, (PlayableBehaviour * __this, Playable playable, FrameData info, Object * playerData));
IL2CPP_REGISTER_METHOD(0x02964310, Object *, Clone, (PlayableBehaviour * __this));
}
