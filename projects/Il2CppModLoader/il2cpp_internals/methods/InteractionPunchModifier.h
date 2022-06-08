using namespace app;

namespace app::methods::InteractionPunchModifier {
IL2CPP_REGISTER_METHOD(0x005E8360, float, get_OverrideDifficulty, (InteractionPunchModifier * __this));
IL2CPP_REGISTER_METHOD(0x00638F50, void, ApplyMultipliers, (InteractionPunchModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x00638F70, String *, get_InteractionName, (InteractionPunchModifier * __this));
IL2CPP_REGISTER_METHOD(0x00639010, UberInteractionManager_PropertyIDCache *, get_PropertyCache, (InteractionPunchModifier * __this));
IL2CPP_REGISTER_METHOD(0x006390F0, IEnumerable_1_System_String_ *, GetKeywordsForShader, (InteractionPunchModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (InteractionPunchModifier * __this));
IL2CPP_REGISTER_METHOD(0x00639280, float, GetStrength, (InteractionPunchModifier * __this, Vector3 velocity, Vector4 strengthVal));
IL2CPP_REGISTER_METHOD(0x006393C0, void, SetProperties, (InteractionPunchModifier * __this));
IL2CPP_REGISTER_METHOD(0x006394D0, void, __ctor, (InteractionPunchModifier * __this));
IL2CPP_REGISTER_METHOD(0x00639750, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006389E0, IEnumerable_1_System_String_ *, __n__0, (InteractionPunchModifier * __this));
}
