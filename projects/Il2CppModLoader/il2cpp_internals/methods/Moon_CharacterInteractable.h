#include <interception_macros.h>

namespace app::methods::Moon::CharacterInteractable {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (CharacterInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (CharacterInteractable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC830, CharacterInteractableType__Enum, get_InteractableType, (CharacterInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00CC3B80, bool, CanInteractWithCharacter, (CharacterInteractable * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInteractionStart, (CharacterInteractable * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InteractionUpdate, (CharacterInteractable * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInteractionEnd, (CharacterInteractable * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldFinishInteraction, (CharacterInteractable * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00420EE0, CharacterInteractableActivationMode__Enum, get_ActivationMode, (CharacterInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00CC3D00, Input_InputButtonProcessor *, get_ActivationButton, (CharacterInteractable * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, MessageProvider *, get_InteractionMessageHint, (CharacterInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00CC3DA0, void, OnEnable, (CharacterInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00CC3E40, void, OnDisable, (CharacterInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (CharacterInteractable * __this));
}
