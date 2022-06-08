#include <interception_macros.h>

namespace app::methods::CharacterPlugin {
IL2CPP_REGISTER_METHOD(0x013139C0, void, Awake, (CharacterPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (CharacterPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x01313A80, void, RecordCycle, (CharacterPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x01313BD0, void, Exit, (CharacterPlugin * __this));
IL2CPP_REGISTER_METHOD(0x01313C70, List_1_UnityEngine_Vector3_ *, ExtractDataFromRecorder, (RecorderData * recorderData));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CharacterPlugin * __this));
}
