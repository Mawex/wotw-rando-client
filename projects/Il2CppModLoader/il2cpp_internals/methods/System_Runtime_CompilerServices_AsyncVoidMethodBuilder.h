using namespace app;

namespace app::methods::System::Runtime::CompilerServices::AsyncVoidMethodBuilder {
IL2CPP_REGISTER_METHOD(0x01A91D60, AsyncVoidMethodBuilder, Create, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0018EE20, void, SetStateMachine, (AsyncVoidMethodBuilder__Boxed * __this, IAsyncStateMachine * stateMachine));
IL2CPP_REGISTER_METHOD(0x0018EE30, void, SetResult, (AsyncVoidMethodBuilder__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0018EE40, void, SetException, (AsyncVoidMethodBuilder__Boxed * __this, Exception * exception));
IL2CPP_REGISTER_METHODINFO(0x0473D378, AsyncVoidMethodBuilder_SetException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0018EE50, void, NotifySynchronizationContextOfCompletion, (AsyncVoidMethodBuilder__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0018EE60, Task *, get_Task, (AsyncVoidMethodBuilder__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012E5F0, void, Start, (AsyncVoidMethodBuilder__Boxed * __this, Object * * stateMachine));
IL2CPP_REGISTER_METHODINFO(0x047769F0, AsyncVoidMethodBuilder_Start__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012E5D0, void, AwaitUnsafeOnCompleted, (AsyncVoidMethodBuilder__Boxed * __this, Object * * awaiter, Object * * stateMachine));
IL2CPP_REGISTER_METHOD(0x0012E600, void, Start, (AsyncVoidMethodBuilder__Boxed * __this, PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d * stateMachine));
IL2CPP_REGISTER_METHODINFO(0x0477F8B0, AsyncVoidMethodBuilder_Start_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012E5E0, void, AwaitUnsafeOnCompleted, (AsyncVoidMethodBuilder__Boxed * __this, TaskAwaiter_1_SystemIntegration_Races_RaceRequestResult_ * awaiter, PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d * stateMachine));
IL2CPP_REGISTER_METHODINFO(0x04714918, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012E5E0, void, AwaitUnsafeOnCompleted, (AsyncVoidMethodBuilder__Boxed * __this, TaskAwaiter_1_System_Object_ * awaiter, PlayFabRaceServiceProvider_c_DisplayClass10_0_GetRaceData_b_0_d * stateMachine));
}
