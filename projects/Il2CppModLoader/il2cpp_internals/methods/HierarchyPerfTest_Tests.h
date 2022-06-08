using namespace app;

namespace app::methods::HierarchyPerfTest::Tests {
IL2CPP_REGISTER_METHOD(0x019776A0, IEnumerator *, RunTests, (String * sceneName));
IL2CPP_REGISTER_METHOD(0x019777F0, List_1_UnityEngine_GameObject_ *, GetAllLeafNodes, (List_1_UnityEngine_GameObject_ * allnodes));
IL2CPP_REGISTER_METHOD(0x01977A10, List_1_UnityEngine_Transform_ *, GetAllChildTransforms, (List_1_UnityEngine_Transform_ * transforms));
IL2CPP_REGISTER_METHOD(0x01977C20, void, PopulateLeafNodesRecursive, (Transform * current, List_1_UnityEngine_GameObject_ * leafNodesList));
IL2CPP_REGISTER_METHOD(0x01977E40, float, GetRandomPosAwayFromZero, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01977F10, IEnumerator *, DoLevelLoadUnloadTestTests, (String * sceneName));
IL2CPP_REGISTER_METHOD(0x01978060, IEnumerator *, DoBasicFrameTimeTests, (List_1_UnityEngine_GameObject_ * rootObjects));
IL2CPP_REGISTER_METHOD(0x019781B0, IEnumerator *, DoComponentUpdateTests, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x019782F0, IEnumerator *, DoEnableDisableTest, (String * baseTestName, List_1_UnityEngine_GameObject_ * objectsShuffled));
IL2CPP_REGISTER_METHOD(0x01978450, IEnumerator *, DoMovementTests, (String * baseTestName, List_1_UnityEngine_Transform_ * transformsToMove, List_1_UnityEngine_Vector3_ * positions, List_1_UnityEngine_Quaternion_ * rotations, List_1_UnityEngine_Vector3_ * scales));
IL2CPP_REGISTER_METHOD(0x019785D0, IEnumerator *, SetupPosition, (List_1_UnityEngine_Transform_ * transformsToMove, List_1_UnityEngine_Vector3_ * positions, List_1_UnityEngine_Quaternion_ * rotations, List_1_UnityEngine_Vector3_ * scales));
IL2CPP_REGISTER_METHOD(0x01978740, IEnumerator *, DoReparentTest, (String * baseTestName, List_1_UnityEngine_Transform_ * transformsToReparent, List_1_UnityEngine_Transform_ * newParents));
IL2CPP_REGISTER_METHOD(0x019788B0, IEnumerator *, DoReparentAndTransformTest, (String * baseTestName, List_1_UnityEngine_Transform_ * transformsToReparent, List_1_UnityEngine_Transform_ * newParents, List_1_UnityEngine_Vector3_ * positions, List_1_UnityEngine_Quaternion_ * rotations, List_1_UnityEngine_Vector3_ * scales));
IL2CPP_REGISTER_METHOD(0x01978A40, IEnumerator *, WaitForNSeconds, (float seconds));
IL2CPP_REGISTER_METHOD(0x01978BA0, void, OnFirstLastRunnerFunctionCalled, (Tests_CompoentRunnerID__Enum runnerID, Tests_UnityFunctionID__Enum function));
IL2CPP_REGISTER_METHODINFO(0x047352D0, Tests_OnFirstLastRunnerFunctionCalled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01978D10, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01549CA0, void, ShuffleList, (List_1_System_Object_ * list));
IL2CPP_REGISTER_METHOD(0x01549CA0, void, ShuffleList, (List_1_UnityEngine_GameObject_ * list));
IL2CPP_REGISTER_METHODINFO(0x0478E588, Tests_ShuffleList_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01549CA0, void, ShuffleList, (List_1_UnityEngine_Transform_ * list));
IL2CPP_REGISTER_METHODINFO(0x047017E8, Tests_ShuffleList_2__MethodInfo);
}
