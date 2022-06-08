using namespace app;

namespace app::methods::OptionsScreenTextsManager {
IL2CPP_REGISTER_METHOD(0x006193E0, void, UpdateItems, (OptionsScreenTextsManager * __this));
IL2CPP_REGISTER_METHOD(0x0061A620, void, UpdateHDRStateLabel, (OptionsScreenTextsManager * __this));
IL2CPP_REGISTER_METHOD(0x0061A890, void, UpdateFullscreenLabel, (OptionsScreenTextsManager * __this));
IL2CPP_REGISTER_METHOD(0x0061AB70, void, FixedUpdate, (OptionsScreenTextsManager * __this));
IL2CPP_REGISTER_METHOD(0x0061ACD0, void, Start, (OptionsScreenTextsManager * __this));
IL2CPP_REGISTER_METHOD(0x0061AD60, MessageProvider *, GetAudioAPIMessageProvider, (OptionsScreenTextsManager * __this, AkAudioAPI__Enum audioAPI));
IL2CPP_REGISTER_METHOD(0x0061ADC0, TranslatedMessageProvider *, GetLanguageMessageProvider, (OptionsScreenTextsManager * __this, Language__Enum lang));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (OptionsScreenTextsManager * __this));
}
