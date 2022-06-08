using namespace app;

namespace app::methods::Moon::Timeline::UberShaderAnimatorStrategyExperimental {
IL2CPP_REGISTER_METHOD(0x00D124C0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00D12AD0, void, SubmitColorInternal, (UberShaderAnimatorStrategyExperimental * __this, Renderer * targetRenderer, UberShaderProperty_Color__Enum property, Color value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D12CF0, void, SubmitVector4Internal, (UberShaderAnimatorStrategyExperimental * __this, Renderer * targetRenderer, UberShaderProperty_Vector__Enum property, Vector4 value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D12EA0, void, SubmitFloatInternal, (UberShaderAnimatorStrategyExperimental * __this, Renderer * targetRenderer, UberShaderProperty_Float__Enum property, float value, float weight, bool persist));
IL2CPP_REGISTER_METHOD(0x00D13050, void, Initialize, (UberShaderAnimatorStrategyExperimental * __this));
IL2CPP_REGISTER_METHOD(0x00D13220, void, ClearColorRequests, (UberShaderAnimatorStrategyExperimental * __this, Renderer__Array * targetRenderers));
IL2CPP_REGISTER_METHOD(0x00D13470, void, ClearVector4Requests, (UberShaderAnimatorStrategyExperimental * __this, Renderer__Array * targetRenderers));
IL2CPP_REGISTER_METHOD(0x00D136C0, void, ClearFloatRequests, (UberShaderAnimatorStrategyExperimental * __this, Renderer__Array * targetRenderers));
IL2CPP_REGISTER_METHOD(0x00D138F0, Vector4, GetStaticVector, (UberShaderAnimatorStrategyExperimental * __this, Renderer * targetRenderer, UberShaderProperty_Vector__Enum property));
IL2CPP_REGISTER_METHOD(0x00D13A20, void, OnUpdate, (UberShaderAnimatorStrategyExperimental * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00D13C40, void, UpdateColorRequests, (UberShaderAnimatorStrategyExperimental * __this, UberShaderAnimatorStrategyExperimental_RendererState * state));
IL2CPP_REGISTER_METHOD(0x00D14150, void, UpdateFloatRequests, (UberShaderAnimatorStrategyExperimental * __this, UberShaderAnimatorStrategyExperimental_RendererState * state));
IL2CPP_REGISTER_METHOD(0x00D14600, void, UpdateVector4Requests, (UberShaderAnimatorStrategyExperimental * __this, UberShaderAnimatorStrategyExperimental_RendererState * state));
IL2CPP_REGISTER_METHOD(0x00D14B40, void, RemoveState, (UberShaderAnimatorStrategyExperimental * __this, UberShaderAnimatorStrategyExperimental_RendererState * state));
IL2CPP_REGISTER_METHOD(0x00D14C30, UberShaderAnimatorStrategyExperimental_RendererState *, GetState, (UberShaderAnimatorStrategyExperimental * __this, Renderer * targetRenderer, bool create));
IL2CPP_REGISTER_METHOD(0x00D14DF0, UberShaderAnimatorStrategyExperimental_RendererState *, AllocateState, (UberShaderAnimatorStrategyExperimental * __this));
IL2CPP_REGISTER_METHOD(0x00D14F70, void, __ctor, (UberShaderAnimatorStrategyExperimental * __this));
}
