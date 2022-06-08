using namespace app;

namespace app::methods::System::Runtime::CompilerServices::AsyncMethodBuilderCore {
IL2CPP_REGISTER_METHOD(0x0018ED60, void, SetStateMachine, (AsyncMethodBuilderCore__Boxed * __this, IAsyncStateMachine * stateMachine));
IL2CPP_REGISTER_METHODINFO(0x047848E8, AsyncMethodBuilderCore_SetStateMachine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0018ED70, Action *, GetCompletionAction, (AsyncMethodBuilderCore__Boxed * __this, Task * taskForTracing, AsyncMethodBuilderCore_MoveNextRunner * * runnerToInitialize));
IL2CPP_REGISTER_METHOD(0x0018ED80, Action *, OutputAsyncCausalityEvents, (AsyncMethodBuilderCore__Boxed * __this, Task * innerTask, Action * continuation));
IL2CPP_REGISTER_METHOD(0x0018ED90, void, PostBoxInitialization, (AsyncMethodBuilderCore__Boxed * __this, IAsyncStateMachine * stateMachine, AsyncMethodBuilderCore_MoveNextRunner * runner, Task * builtTask));
IL2CPP_REGISTER_METHOD(0x01A90650, void, ThrowAsync, (Exception * exception, SynchronizationContext * targetContext));
IL2CPP_REGISTER_METHOD(0x01A90B00, Action *, CreateContinuationWrapper, (Action * continuation, Action * invokeAction, Task * innerTask));
IL2CPP_REGISTER_METHOD(0x01A90DF0, Task *, TryGetContinuationTask, (Action * action));
}
