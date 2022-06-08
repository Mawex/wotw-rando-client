using namespace app;

namespace app::methods::Moon::SceneLoadingTest {
IL2CPP_REGISTER_METHOD(0x00EC6950, SceneLoadingTest_RunState__Enum, get_State, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EC6A90, void, Start, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04722F88, SceneLoadingTest_Start__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EC6DA0, void, Stop, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EC6ED0, Task *, LoadEmptyScene, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EC71C0, IEnumerator *, LoadEmptySceneCoroutine, (TaskCompletionSource_1_System_Object_ * tcs));
IL2CPP_REGISTER_METHOD(0x00EC7310, Task *, Execute, (CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x00EC7420, Task *, LoadAndUnloadScene, (SceneLoadingTest_Context * ctx, int32_t buildIndex, String * sceneName));
IL2CPP_REGISTER_METHOD(0x00EC7540, Task *, ExtraDelay, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EC7630, Task *, AsyncOperationToTask, (AsyncOperation_1 * op));
IL2CPP_REGISTER_METHOD(0x00EC7A30, void, WriteOutputHeader, (SceneLoadingTest_Context * ctx));
IL2CPP_REGISTER_METHOD(0x00EC7CC0, void, WriteStats, (SceneLoadingTest_Context * ctx, SceneLoadingTest_Stats * stats));
IL2CPP_REGISTER_METHOD(0x00EC7E90, bool, IsResumingRun, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EC7F60, List_1_System_String_ *, GetAlreadyTestedScenes, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EC84B0, List_1_System_ValueTuple_2__2 *, GetGameSceneList, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EC88F0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01550DE0, void, ShuffleList, (List_1_System_Object_ * list));
IL2CPP_REGISTER_METHOD(0x01586670, Object__Array *, DuplicateList, (List_1_System_Object_ * list, int32_t copies));
IL2CPP_REGISTER_METHOD(0x01586670, ValueTuple_2_Int32_String___Array *, DuplicateList, (List_1_System_ValueTuple_2__2 * list, int32_t copies));
IL2CPP_REGISTER_METHODINFO(0x04704FA0, SceneLoadingTest_DuplicateList_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01551050, void, ShuffleList, (List_1_System_ValueTuple_2__2 * list));
IL2CPP_REGISTER_METHODINFO(0x047858B0, SceneLoadingTest_ShuffleList_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01551050, void, ShuffleList, (List_1_System_ValueTuple_2__3 * list));
IL2CPP_REGISTER_METHOD(0x01586670, ValueTuple_2_Int32_Object___Array *, DuplicateList, (List_1_System_ValueTuple_2__3 * list, int32_t copies));
}
