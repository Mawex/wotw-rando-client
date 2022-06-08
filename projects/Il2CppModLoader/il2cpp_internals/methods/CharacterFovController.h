using namespace app;

namespace app::methods::CharacterFovController {
IL2CPP_REGISTER_METHOD(0x01050A40, void, GetTargets, (CharacterFovController * __this, SeinCharacter * character, float * offset, float * factor));
IL2CPP_REGISTER_METHOD(0x01050D20, float, get_CurrentOffset, (CharacterFovController * __this));
IL2CPP_REGISTER_METHOD(0x008682A0, float, get_TargetZ, (CharacterFovController * __this));
IL2CPP_REGISTER_METHOD(0x01050D30, void, NoUpdate, (CharacterFovController * __this));
IL2CPP_REGISTER_METHOD(0x01050EA0, void, OnGUI, (CharacterFovController * __this));
IL2CPP_REGISTER_METHOD(0x010510B0, void, __ctor, (CharacterFovController * __this));
}
