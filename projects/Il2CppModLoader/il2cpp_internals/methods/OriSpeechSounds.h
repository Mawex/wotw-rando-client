using namespace app;

namespace app::methods::OriSpeechSounds {
IL2CPP_REGISTER_METHOD(0x00440050, void, Awake, (OriSpeechSounds * __this));
IL2CPP_REGISTER_METHOD(0x004402E0, void, Start, (OriSpeechSounds * __this));
IL2CPP_REGISTER_METHOD(0x004402E0, void, OnNextMessage, (OriSpeechSounds * __this));
IL2CPP_REGISTER_METHODINFO(0x0474C188, OriSpeechSounds_OnNextMessage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004402F0, void, OnMessageScreenHide, (OriSpeechSounds * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x04783050, OriSpeechSounds_OnMessageScreenHide__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00440300, void, PlayOriSpeech, (OriSpeechSounds * __this));
IL2CPP_REGISTER_METHOD(0x00440720, void, StopOriSpeech, (OriSpeechSounds * __this));
IL2CPP_REGISTER_METHOD(0x00440A20, OriSpeechSounds_EmotionSounds *, GetSoundSetForEmotion, (OriSpeechSounds * __this, EmotionType__Enum emotion));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (OriSpeechSounds * __this));
}
