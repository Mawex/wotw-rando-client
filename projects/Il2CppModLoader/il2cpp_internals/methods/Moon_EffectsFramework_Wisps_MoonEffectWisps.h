using namespace app;

namespace app::methods::Moon::EffectsFramework::Wisps::MoonEffectWisps {
IL2CPP_REGISTER_METHOD(0x002FB930, GameObject *, get_Prefab, (MoonEffectWisps * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsDirty, (MoonEffectWisps * __this));
IL2CPP_REGISTER_METHOD(0x0120C4B0, List_1_Moon_EffectsFramework_MoonEffectVariationModifier_ *, get_Modifiers, (MoonEffectWisps * __this));
IL2CPP_REGISTER_METHOD(0x0120C6D0, GameObject *, Resolve, (MoonEffectWisps * __this, Vector3 position, Quaternion rotation, bool record));
IL2CPP_REGISTER_METHOD(0x0120C7E0, GameObject *, Resolve, (MoonEffectWisps * __this, IInstantiationHandler * instantiationHandler, Vector3 position, Quaternion rotation, bool record));
IL2CPP_REGISTER_METHOD(0x0052C650, void, SetDirty, (MoonEffectWisps * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonEffectWisps * __this));
IL2CPP_REGISTER_METHOD(0x0120C9E0, void, __cctor, (MethodInfo * method));
}
