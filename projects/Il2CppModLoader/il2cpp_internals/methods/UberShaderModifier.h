#include <interception_macros.h>

namespace app::methods::UberShaderModifier {
IL2CPP_REGISTER_METHOD(0x019130E0, RuntimeTypeHandle, get_TypeId, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x01913190, UberShaderBlock *, get_AttachedToShaderBlock, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x01913210, bool, get_HasCageMesh, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x019132B0, Renderer *, get_Renderer, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x01913380, MeshFilter *, get_Filter, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x01913450, Material *, get_BindMaterial, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x01913560, bool, IsModifierSupported, (UberShaderComponent * comp, Type * modifierType));
IL2CPP_REGISTER_METHOD(0x019136D0, bool, get_IsSupported, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x01913880, float, RangeRandom, (UberShaderModifier * __this, float b, float mag));
IL2CPP_REGISTER_METHOD(0x019139A0, void, RandomizeScrolling, (UberShaderModifier * __this, UberShaderTexture * tex));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsProcedural, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Randomize, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String__Array *, GetRandomizeOptions, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UberShaderEditorUpdate, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (UberShaderModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPresetCreation, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetQuadExpandSize, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, NeedsMipMap, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ImplementsAlphaMasking, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, IEnumerable_1_System_String_ *, GetKeywordsForShader, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x01913B50, IEnumerable_1_System_String_ *, GetBaseVertexTextureNames, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x01913CD0, String *, GetBaseShaderProperties, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x01913D50, String *, ShaderlabString, (UberShaderModifier * __this, String * bind, String * type, String * def));
IL2CPP_REGISTER_METHOD(0x019140F0, String *, NicifyVariableName, (UberShaderModifier * __this, String * name));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresNormals, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresTangent, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresVertexColor, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresUv2, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresUv3, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresUv4, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresUv5, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresUv6, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, DoesChangeShape, (UberShaderModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SaveCustomMesh, (UberShaderModifier * __this, Mesh * mesh));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (UberShaderModifier * __this));
}
