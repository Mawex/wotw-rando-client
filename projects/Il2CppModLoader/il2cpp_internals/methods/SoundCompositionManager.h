using namespace app;

namespace app::methods::SoundCompositionManager {
IL2CPP_REGISTER_METHOD(0x00EE5E50, void, Awake, (SoundCompositionManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (SoundCompositionManager * __this));
IL2CPP_REGISTER_METHOD(0x00EE5EE0, void, PlaySound, (SoundCompositionManager * __this, SoundComposition * soundComposition, SoundCompositionTransition * transition));
IL2CPP_REGISTER_METHOD(0x00EE6140, void, StopMusic, (SoundCompositionManager * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SoundCompositionManager * __this));
}
