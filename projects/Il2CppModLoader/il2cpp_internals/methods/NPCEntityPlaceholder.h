#include <interception_macros.h>

namespace app::methods::NPCEntityPlaceholder {
IL2CPP_REGISTER_METHOD(0x0087F600, ICharacterInteractable *, get_CharacterInteractable, (NPCEntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0087F690, NPCEntity *, get_CurrentInstance, (NPCEntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0087F780, GameObject *, get_CurrentInstanceRig, (NPCEntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0087F8A0, bool, ShowNPCInteractionSettings, (NPCEntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0087F8B0, bool, AttachToTransformSettings, (NPCEntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0087F8C0, bool, ShowOffset, (NPCEntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0087F8D0, void, OnDestroy, (NPCEntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0087F8F0, void, Finalize, (NPCEntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0087F980, void, MoonCleanup, (NPCEntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0087FA60, void, InstantiateFromPooledObj, (NPCEntityPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00880020, void, __ctor, (NPCEntityPlaceholder * __this));
}
