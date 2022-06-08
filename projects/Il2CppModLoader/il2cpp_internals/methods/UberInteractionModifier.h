#include <interception_macros.h>

namespace app::methods::UberInteractionModifier {
IL2CPP_REGISTER_METHOD(0x00FCBA80, Bounds, get_Bounds, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsStatic, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCBAD0, void, CacheBounds, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCBBD0, float, get_CurrentTimeA, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCBCD0, float, GetCurrentTimeA, (UberInteractionModifier * __this, float currentTime));
IL2CPP_REGISTER_METHOD(0x00FCBD90, float, get_CurrentTimeB, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCBE90, float, GetCurrentTimeB, (UberInteractionModifier * __this, float currentTime));
IL2CPP_REGISTER_METHOD(0x00FCBF50, void, PlayA, (UberInteractionModifier * __this, float time, Vector2 pos, Vector2 velocity, float strength, float radius, int32_t flip));
IL2CPP_REGISTER_METHOD(0x00FCC3F0, void, PlayB, (UberInteractionModifier * __this, float time, Vector2 pos, Vector2 velocity, float strength, float radius, int32_t flip));
IL2CPP_REGISTER_METHOD(0x00FCC890, void, RemoveInteraction, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCC950, Vector2, TransformVelocity, (UberInteractionModifier * __this, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x00FCCAF0, bool, CheckProperties, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCCBC0, bool, ShouldOverrideA, (UberInteractionModifier * __this, float calcStr, float difficulty, float currentTime));
IL2CPP_REGISTER_METHOD(0x00FCCD20, bool, ShouldOverrideB, (UberInteractionModifier * __this, float calcStr, float difficulty, float currentTime));
IL2CPP_REGISTER_METHOD(0x0065B580, int32_t, get_Index, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00BFB9C0, void, set_Index, (UberInteractionModifier * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsRegistered, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x0063D080, void, set_IsRegistered, (UberInteractionModifier * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00FCCE80, bool, get_WantsToRegister, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCCE90, void, set_WantsToRegister, (UberInteractionModifier * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00FCCEA0, String *, get_InteractionName, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCCF20, void, OnDisable, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCD050, float, get_Duration, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCD140, IEnumerable_1_System_String_ *, GetBaseVertexTextureNames, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCD2D0, IEnumerable_1_System_String_ *, GetKeywordsForShader, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417FF0, float, GetStrength, (UberInteractionModifier * __this, Vector3 velocity, Vector4 strengthVal));
IL2CPP_REGISTER_METHOD(0x00FCD460, void, OnEnable, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCD590, void, OnRegistered, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_OverrideDifficulty, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCD6F0, void, SetInteraction, (UberInteractionModifier * __this, float time, Vector3 pos, Vector3 prevPos, Vector4 strength, Vector3 velocity, float radius, bool explosion, bool forcePlay, UberInteractionActor * actor));
IL2CPP_REGISTER_METHOD(0x00FCDEF0, int32_t, RandomSign, (UberInteractionModifier * __this, float val));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, GetFlip, (UberInteractionModifier * __this, Vector3 pos, bool explode));
IL2CPP_REGISTER_METHOD(0x00FCDF70, void, SetBounds, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B32900, float, MaxRadius, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCE400, bool, DoesOverlap, (UberInteractionModifier * __this, Vector3 position, Vector3 velocity, float radius, float zScale));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsWater, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCE7A0, Vector3, GetPosition, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCE7C0, Vector3, GetExplodePoint, (UberInteractionModifier * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlay, (UberInteractionModifier * __this, float strength, bool explosion));
IL2CPP_REGISTER_METHOD(0x00FCE910, void, InitializeMaterialParametersShadowCopy, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCEB20, void, __ctor, (UberInteractionModifier * __this));
IL2CPP_REGISTER_METHOD(0x00FCEB40, void, __cctor, ());
}
