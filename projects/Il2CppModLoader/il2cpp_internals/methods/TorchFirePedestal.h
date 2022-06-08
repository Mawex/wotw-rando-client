using namespace app;

namespace app::methods::TorchFirePedestal {
IL2CPP_REGISTER_METHOD(0x00AFEE70, void, Awake, (TorchFirePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00AFF040, void, OnDestroy, (TorchFirePedestal * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (TorchFirePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00AFF210, void, Apply, (TorchFirePedestal * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00AFF400, IUberState__Array *, get_AffectingUberStates, (TorchFirePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00AFF480, List_1_UnityEngine_GameObject_ *, get_AllTargets, (TorchFirePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00AFF6F0, void, OnFlammableStateChange, (TorchFirePedestal * __this, Flammable * flammable));
IL2CPP_REGISTER_METHODINFO(0x04737BD8, TorchFirePedestal_OnFlammableStateChange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AFF9D0, bool, CanCharacterInteractModifier, (TorchFirePedestal * __this, ICharacter * arg));
IL2CPP_REGISTER_METHOD(0x00AFFA00, void, UpdateStickSpawnerProperties, (TorchFirePedestal * __this));
IL2CPP_REGISTER_METHOD(0x00AFFB00, void, __ctor, (TorchFirePedestal * __this));
}
