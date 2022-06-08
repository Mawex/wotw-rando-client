using namespace app;

namespace app::methods::InteractionRotationModifier {
IL2CPP_REGISTER_METHOD(0x00639CE0, void, ApplyMultipliers, (InteractionRotationModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x00639D00, void, Randomize, (InteractionRotationModifier * __this));
IL2CPP_REGISTER_METHOD(0x00639D70, String *, get_InteractionName, (InteractionRotationModifier * __this));
IL2CPP_REGISTER_METHOD(0x00639E10, UberInteractionManager_PropertyIDCache *, get_PropertyCache, (InteractionRotationModifier * __this));
IL2CPP_REGISTER_METHOD(0x00639EF0, IEnumerable_1_System_String_ *, GetKeywordsForShader, (InteractionRotationModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (InteractionRotationModifier * __this));
IL2CPP_REGISTER_METHOD(0x0063A080, void, WarmUpResource, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0063A340, void, OnPlay, (InteractionRotationModifier * __this, float strength, bool explosion));
IL2CPP_REGISTER_METHODINFO(0x0470E9E0, InteractionRotationModifier_OnPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0063A6E0, int32_t, GetFlip, (InteractionRotationModifier * __this, Vector3 pos, bool explode));
IL2CPP_REGISTER_METHOD(0x0063A9F0, Vector2, Rotate, (Vector2 v, float degrees));
IL2CPP_REGISTER_METHOD(0x0063AAF0, float, GetStrength, (InteractionRotationModifier * __this, Vector3 velocity, Vector4 strengthVal));
IL2CPP_REGISTER_METHOD(0x0063AEA0, void, SetProperties, (InteractionRotationModifier * __this));
IL2CPP_REGISTER_METHOD(0x0063B010, void, __ctor, (InteractionRotationModifier * __this));
IL2CPP_REGISTER_METHOD(0x0063B380, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006389E0, IEnumerable_1_System_String_ *, __n__0, (InteractionRotationModifier * __this));
}
