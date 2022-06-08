using namespace app;

namespace app::methods::ReferenceTester {
IL2CPP_REGISTER_METHOD(0x02F9C010, void, Start, (ReferenceTester * __this));
IL2CPP_REGISTER_METHOD(0x02F9C0E0, void, Update, (ReferenceTester * __this));
IL2CPP_REGISTER_METHOD(0x02F9C1E0, void, OnGUI, (ReferenceTester * __this));
IL2CPP_REGISTER_METHOD(0x02F9C760, String *, GetGUITextForMoonIntListTestValues, (ReferenceTester * __this, List_1_Moon_MoonInt_ * list));
IL2CPP_REGISTER_METHOD(0x02F9C900, void, LogValues, (ReferenceTester * __this));
IL2CPP_REGISTER_METHOD(0x02F9CC80, void, UpdatePerfValues, (ReferenceTester * __this, int32_t iterationCount));
IL2CPP_REGISTER_METHOD(0x02F9D070, void, __ctor, (ReferenceTester * __this));
IL2CPP_REGISTER_METHOD(0x01540100, String *, GetGUITextForTestValues, (ReferenceTester * __this, Object * normalValue, IMoonType_1_System_Object_ * staticValue, IMoonType_1_System_Object_ * dynamicDataValue));
IL2CPP_REGISTER_METHOD(0x0153FB50, String *, GetGUITextForMoonReferenceListTestValues, (ReferenceTester * __this, List_1_Moon_MoonReference_1__17 * list));
IL2CPP_REGISTER_METHOD(0x01540E60, String *, TimeTestValues, (ReferenceTester * __this, Object * normalValue, IMoonType_1_System_Object_ * staticValue, IMoonType_1_System_Object_ * dynamicDataValue, Stopwatch * stopWatch, int32_t iterationCount));
IL2CPP_REGISTER_METHOD(0x0153FD70, String *, GetGUITextForTestValues, (ReferenceTester * __this, int32_t normalValue, IMoonType_1_System_Int32_ * staticValue, IMoonType_1_System_Int32_ * dynamicDataValue));
IL2CPP_REGISTER_METHODINFO(0x04768298, ReferenceTester_GetGUITextForTestValues_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01540100, String *, GetGUITextForTestValues, (ReferenceTester * __this, String * normalValue, IMoonType_1_System_String_ * staticValue, IMoonType_1_System_String_ * dynamicDataValue));
IL2CPP_REGISTER_METHODINFO(0x047689A8, ReferenceTester_GetGUITextForTestValues_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015404C0, String *, GetGUITextForTestValues, (ReferenceTester * __this, Vector3 normalValue, IMoonType_1_UnityEngine_Vector3_ * staticValue, IMoonType_1_UnityEngine_Vector3_ * dynamicDataValue));
IL2CPP_REGISTER_METHODINFO(0x0470CD50, ReferenceTester_GetGUITextForTestValues_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01540100, String *, GetGUITextForTestValues, (ReferenceTester * __this, GameObject * normalValue, IMoonType_1_UnityEngine_GameObject_ * staticValue, IMoonType_1_UnityEngine_GameObject_ * dynamicDataValue));
IL2CPP_REGISTER_METHODINFO(0x0475B098, ReferenceTester_GetGUITextForTestValues_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01540100, String *, GetGUITextForTestValues, (ReferenceTester * __this, ITestInterface * normalValue, IMoonType_1_ITestInterface_ * staticValue, IMoonType_1_ITestInterface_ * dynamicDataValue));
IL2CPP_REGISTER_METHODINFO(0x0470A658, ReferenceTester_GetGUITextForTestValues_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0153FB50, String *, GetGUITextForMoonReferenceListTestValues, (ReferenceTester * __this, List_1_Moon_MoonReference_1_ * list));
IL2CPP_REGISTER_METHODINFO(0x0472F5F0, ReferenceTester_GetGUITextForMoonReferenceListTestValues_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01540850, String *, TimeTestValues, (ReferenceTester * __this, int32_t normalValue, IMoonType_1_System_Int32_ * staticValue, IMoonType_1_System_Int32_ * dynamicDataValue, Stopwatch * stopWatch, int32_t iterationCount));
IL2CPP_REGISTER_METHODINFO(0x047366C0, ReferenceTester_TimeTestValues_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01540E60, String *, TimeTestValues, (ReferenceTester * __this, String * normalValue, IMoonType_1_System_String_ * staticValue, IMoonType_1_System_String_ * dynamicDataValue, Stopwatch * stopWatch, int32_t iterationCount));
IL2CPP_REGISTER_METHODINFO(0x0473A440, ReferenceTester_TimeTestValues_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01541430, String *, TimeTestValues, (ReferenceTester * __this, Vector3 normalValue, IMoonType_1_UnityEngine_Vector3_ * staticValue, IMoonType_1_UnityEngine_Vector3_ * dynamicDataValue, Stopwatch * stopWatch, int32_t iterationCount));
IL2CPP_REGISTER_METHODINFO(0x04702BE8, ReferenceTester_TimeTestValues_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01540E60, String *, TimeTestValues, (ReferenceTester * __this, GameObject * normalValue, IMoonType_1_UnityEngine_GameObject_ * staticValue, IMoonType_1_UnityEngine_GameObject_ * dynamicDataValue, Stopwatch * stopWatch, int32_t iterationCount));
IL2CPP_REGISTER_METHODINFO(0x0477EB50, ReferenceTester_TimeTestValues_4__MethodInfo);
}
