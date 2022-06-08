using namespace app;

namespace app::methods::Moon::MoonAnimator_Layer {
IL2CPP_REGISTER_METHOD(0x02117030, void, AssureActiveAnimationBufferInitialized, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02117340, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021173E0, int32_t, get_ActiveAnimationBufferSize, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02117490, int32_t, get_ActiveAnimationAllocationCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02117530, void, set_ActiveAnimationAllocationCount, (int32_t value));
IL2CPP_REGISTER_METHOD(0x021175E0, MoonAnimator_ActiveAnimation *, AllocateActiveAnimation, (MoonAnimator_Layer * __this, IAnimation * animation, int32_t priority, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x021179A0, void, DeallocateActiveAnimation, (MoonAnimator_Layer * __this, MoonAnimator_ActiveAnimation * activeAnimation));
IL2CPP_REGISTER_METHOD(0x02117BF0, String *, get_Name, (MoonAnimator_Layer * __this));
IL2CPP_REGISTER_METHOD(0x02117C90, MoonAnimatorLayerDefinition, get_Definition, (MoonAnimator_Layer * __this));
IL2CPP_REGISTER_METHOD(0x02117CB0, float, get_Weight, (MoonAnimator_Layer * __this));
IL2CPP_REGISTER_METHOD(0x02117D60, bool, get_HasAnimationsPlaying, (MoonAnimator_Layer * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, MoonAnimator_AnimationInstance *, get_RootAnimationInstance, (MoonAnimator_Layer * __this));
IL2CPP_REGISTER_METHOD(0x02117DF0, void, __ctor, (MoonAnimator_Layer * __this, MoonAnimator * animator, MoonAnimatorLayerDefinition definition));
IL2CPP_REGISTER_METHOD(0x02118030, ActiveAnimationHandle, Play, (MoonAnimator_Layer * __this, IAnimation * animation, int32_t priority, Func_1_Boolean_ * continueCondition, Action * onStoppedPlaying));
IL2CPP_REGISTER_METHOD(0x02118210, void, UpdateLayer, (MoonAnimator_Layer * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x021182A0, ActiveAnimationHandle, GetActiveAnimation, (MoonAnimator_Layer * __this, IAnimation * animation));
IL2CPP_REGISTER_METHOD(0x021183D0, void, HandleCurrentAnimationState, (MoonAnimator_Layer * __this));
IL2CPP_REGISTER_METHOD(0x021184D0, Playable, GetRootPlayable, (MoonAnimator_Layer * __this));
IL2CPP_REGISTER_METHOD(0x021185B0, void, Clear, (MoonAnimator_Layer * __this));
IL2CPP_REGISTER_METHOD(0x02118750, void, UpdateActiveAnimations, (MoonAnimator_Layer * __this));
IL2CPP_REGISTER_METHOD(0x02118E60, IActiveAnimation *, FindAndRemoveActiveAnimation, (MoonAnimator_Layer * __this, IAnimation * animation, int32_t priority));
IL2CPP_REGISTER_METHOD(0x02118FB0, void, Play, (MoonAnimator_Layer * __this, MoonAnimator_ActiveAnimation * newActiveAnimation));
IL2CPP_REGISTER_METHOD(0x021191A0, void, RemoveAnimationAt, (MoonAnimator_Layer * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02119240, void, StartAnimation, (MoonAnimator_Layer * __this, MoonAnimator_ActiveAnimation * animation));
IL2CPP_REGISTER_METHOD(0x02119270, void, StopAnimation, (MoonAnimator_Layer * __this, MoonAnimator_ActiveAnimation * animation));
IL2CPP_REGISTER_METHOD(0x021192D0, void, __cctor, (MethodInfo * method));
}
