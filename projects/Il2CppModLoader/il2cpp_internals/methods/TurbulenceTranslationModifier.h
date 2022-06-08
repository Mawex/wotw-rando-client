using namespace app;

namespace app::methods::TurbulenceTranslationModifier {
IL2CPP_REGISTER_METHOD(0x013D6150, void, OnPresetCreation, (TurbulenceTranslationModifier * __this));
IL2CPP_REGISTER_METHOD(0x013D6310, void, ApplyMultipliers, (TurbulenceTranslationModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x013D64E0, float, RangeRandom, (TurbulenceTranslationModifier * __this, float mag));
IL2CPP_REGISTER_METHOD(0x013D6540, IEnumerable_1_System_String_ *, GetBaseVertexTextureNames, (TurbulenceTranslationModifier * __this));
IL2CPP_REGISTER_METHOD(0x013D66C0, IEnumerable_1_System_String_ *, GetKeywordsForShader, (TurbulenceTranslationModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (TurbulenceTranslationModifier * __this));
IL2CPP_REGISTER_METHOD(0x013D6850, void, Randomize, (TurbulenceTranslationModifier * __this));
IL2CPP_REGISTER_METHOD(0x013D69C0, void, SetProperties, (TurbulenceTranslationModifier * __this));
IL2CPP_REGISTER_METHOD(0x013D6B40, void, __ctor, (TurbulenceTranslationModifier * __this));
}
