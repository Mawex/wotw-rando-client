using namespace app;

namespace app::methods::UnityEngine::Playables::PlayableAsset {
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (PlayableAsset * __this));
IL2CPP_REGISTER_METHOD(0x02964070, double, get_duration, (PlayableAsset * __this));
IL2CPP_REGISTER_METHOD(0x02964110, IEnumerable_1_UnityEngine_Playables_PlayableBinding_ *, get_outputs, (PlayableAsset * __this));
IL2CPP_REGISTER_METHOD(0x029641B0, void, Internal_CreatePlayable, (PlayableAsset * asset, PlayableGraph graph, GameObject * go, void * ptr));
IL2CPP_REGISTER_METHOD(0x029642E0, void, Internal_GetPlayableAssetDuration, (PlayableAsset * asset, void * ptrToDouble));
}
