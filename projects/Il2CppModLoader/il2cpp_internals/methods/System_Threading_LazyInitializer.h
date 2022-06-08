using namespace app;

namespace app::methods::System::Threading::LazyInitializer {
IL2CPP_REGISTER_METHOD(0x0157AA30, Object *, EnsureInitialized, (Object * * target, Func_1_Object_ * valueFactory));
IL2CPP_REGISTER_METHOD(0x0157AA60, Object *, EnsureInitializedCore, (Object * * target, Func_1_Object_ * valueFactory));
IL2CPP_REGISTER_METHODINFO(0x04755080, LazyInitializer_EnsureInitializedCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157AA30, SemaphoreSlim *, EnsureInitialized, (SemaphoreSlim * * target, Func_1_System_Threading_SemaphoreSlim_ * valueFactory));
IL2CPP_REGISTER_METHODINFO(0x04780648, LazyInitializer_EnsureInitialized_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157AA30, ManualResetEvent *, EnsureInitialized, (ManualResetEvent * * target, Func_1_System_Threading_ManualResetEvent_ * valueFactory));
IL2CPP_REGISTER_METHODINFO(0x047657C8, LazyInitializer_EnsureInitialized_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157AA30, Task_ContingentProperties *, EnsureInitialized, (Task_ContingentProperties * * target, Func_1_System_Threading_Tasks_Task_ContingentProperties_ * valueFactory));
IL2CPP_REGISTER_METHODINFO(0x04779198, LazyInitializer_EnsureInitialized_3__MethodInfo);
}
