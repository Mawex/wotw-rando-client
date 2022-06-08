using namespace app;

namespace app::methods::Core::Music_Layer {
IL2CPP_REGISTER_METHOD(0x00DAD8C0, bool, UsesGivenSoundProvider, (Music_Layer * __this, SoundProvider * soundProvider));
IL2CPP_REGISTER_METHOD(0x00DADA90, void, __ctor, (Music_Layer * __this, SoundProvider * soundProvider, float fadeInDuration, float fadeOutDuration));
IL2CPP_REGISTER_METHOD(0x00DADCF0, void, Enter, (Music_Layer * __this));
IL2CPP_REGISTER_METHOD(0x00DADF10, void, Exit, (Music_Layer * __this));
IL2CPP_REGISTER_METHOD(0x00DAE0C0, void, Update, (Music_Layer * __this));
}
