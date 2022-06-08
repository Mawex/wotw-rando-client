#include <interception_macros.h>

namespace app::methods::Moon::Timeline::UberShaderAnimatorStrategyStandard {
IL2CPP_REGISTER_METHOD(0x00D16130, void, ClearColorRequests, (UberShaderAnimatorStrategyStandard * __this, Renderer__Array * targetRenderers));
IL2CPP_REGISTER_METHOD(0x00D163B0, void, ClearVector4Requests, (UberShaderAnimatorStrategyStandard * __this, Renderer__Array * targetRenderers));
IL2CPP_REGISTER_METHOD(0x00D16630, void, ClearFloatRequests, (UberShaderAnimatorStrategyStandard * __this, Renderer__Array * targetRenderers));
IL2CPP_REGISTER_METHOD(0x00D16890, Vector4, GetStaticVector, (UberShaderAnimatorStrategyStandard * __this, Renderer * targetRenderer, UberShaderProperty_Vector__Enum property));
IL2CPP_REGISTER_METHOD(0x00D16A50, void, OnUpdate, (UberShaderAnimatorStrategyStandard * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00D16CC0, void, RemoveFromTrackingStates, (UberShaderAnimatorStrategyStandard * __this, UberShaderAnimatorStrategyStandard_RendererState * state));
IL2CPP_REGISTER_METHOD(0x00D16E60, void, SubmitColorInternal, (UberShaderAnimatorStrategyStandard * __this, Renderer * targetRenderer, UberShaderProperty_Color__Enum property, Color value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D17080, void, SubmitVector4Internal, (UberShaderAnimatorStrategyStandard * __this, Renderer * targetRenderer, UberShaderProperty_Vector__Enum property, Vector4 value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D17230, void, SubmitFloatInternal, (UberShaderAnimatorStrategyStandard * __this, Renderer * targetRenderer, UberShaderProperty_Float__Enum property, float value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D173E0, void, UpdateColorRequests, (UberShaderAnimatorStrategyStandard * __this, UberShaderAnimatorStrategyStandard_RendererState * rendererState));
IL2CPP_REGISTER_METHOD(0x00D177E0, void, UpdateVector4Requests, (UberShaderAnimatorStrategyStandard * __this, UberShaderAnimatorStrategyStandard_RendererState * rendererState));
IL2CPP_REGISTER_METHOD(0x00D17C50, void, UpdateFloatRequests, (UberShaderAnimatorStrategyStandard * __this, UberShaderAnimatorStrategyStandard_RendererState * rendererState));
IL2CPP_REGISTER_METHOD(0x00D18020, UberShaderAnimatorStrategyStandard_RendererState *, GetRendererState, (UberShaderAnimatorStrategyStandard * __this, Renderer * targetRenderer, bool create));
IL2CPP_REGISTER_METHOD(0x00D181E0, UberShaderAnimatorStrategyStandard_RendererState *, GetStateFromPool, (UberShaderAnimatorStrategyStandard * __this));
IL2CPP_REGISTER_METHOD(0x00D18360, void, ReturnStateToPool, (UberShaderAnimatorStrategyStandard * __this, UberShaderAnimatorStrategyStandard_RendererState * state));
IL2CPP_REGISTER_METHOD(0x00D18470, void, Initialize, (UberShaderAnimatorStrategyStandard * __this));
IL2CPP_REGISTER_METHOD(0x00D18640, void, __ctor, (UberShaderAnimatorStrategyStandard * __this));
IL2CPP_REGISTER_METHOD(0x018F0340, UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_System_Object_ *, GetUberShaderAnimationInstance, ());
IL2CPP_REGISTER_METHOD(0x018F0340, UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_UnityEngine_Color_ *, GetUberShaderAnimationInstance, ());
IL2CPP_REGISTER_METHODINFO(0x0478CA80, UberShaderAnimatorStrategyStandard_GetUberShaderAnimationInstance_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018F0340, UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_UnityEngine_Vector4_ *, GetUberShaderAnimationInstance, ());
IL2CPP_REGISTER_METHODINFO(0x04776080, UberShaderAnimatorStrategyStandard_GetUberShaderAnimationInstance_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018F0340, UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_System_Single_ *, GetUberShaderAnimationInstance, ());
IL2CPP_REGISTER_METHODINFO(0x0473DCA0, UberShaderAnimatorStrategyStandard_GetUberShaderAnimationInstance_3__MethodInfo);
}
