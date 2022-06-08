#include <interception_macros.h>

namespace app::methods::CharacterSpriteMirror {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CharacterSpriteMirror * __this));
IL2CPP_REGISTER_METHOD(0x00736620, int32_t, get_Lock, (CharacterSpriteMirror * __this));
IL2CPP_REGISTER_METHOD(0x01313FA0, void, set_Lock, (CharacterSpriteMirror * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01313FB0, void, set_FaceLeft, (CharacterSpriteMirror * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057A580, bool, get_FaceLeft, (CharacterSpriteMirror * __this));
IL2CPP_REGISTER_METHOD(0x01313FD0, void, ToggleFacingDirection, (CharacterSpriteMirror * __this, bool force));
IL2CPP_REGISTER_METHOD(0x01314000, void, OnAwake, (CharacterSpriteMirror * __this));
IL2CPP_REGISTER_METHOD(0x013141F0, void, OnDestroy, (CharacterSpriteMirror * __this));
IL2CPP_REGISTER_METHOD(0x013143A0, void, UpdateMaterial, (CharacterSpriteMirror * __this));
IL2CPP_REGISTER_METHOD(0x01314660, void, Serialize, (CharacterSpriteMirror * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x006E35F0, void, OnRestoreCheckpoint, (CharacterSpriteMirror * __this));
IL2CPP_REGISTER_METHODINFO(0x0477FAF0, CharacterSpriteMirror_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (CharacterSpriteMirror * __this));
}
