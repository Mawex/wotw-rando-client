using namespace app;

namespace app::methods::UberPoolAnalyze {
IL2CPP_REGISTER_METHOD(0x00FD0010, FieldInfo_1__Array *, GetFields, (Type * t));
IL2CPP_REGISTER_METHOD(0x00FD01D0, bool, FieldIsSafe, (FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x00FD03B0, bool, TypeIsSafe, (Type * t));
IL2CPP_REGISTER_METHOD(0x00FD05B0, void, CompareObject, (Object * o1, Object * o2, String * path, HashSet_1_System_Object_ * visited, HashSet_1_UnityEngine_GameObject_ * total, int32_t depth));
IL2CPP_REGISTER_METHOD(0x00FD11E0, void, CompareGameObject, (GameObject * go1, GameObject * go2, HashSet_1_System_Object_ * visited, HashSet_1_UnityEngine_GameObject_ * total, String * path));
IL2CPP_REGISTER_METHOD(0x00FD1840, void, CompareFullHierarchies, (GameObject * a, GameObject * b, HashSet_1_System_Object_ * visited, String * path));
IL2CPP_REGISTER_METHOD(0x00FD2220, void, AddRecursive, (GameObject * gameObject, HashSet_1_UnityEngine_GameObject_ * total));
IL2CPP_REGISTER_METHOD(0x00FD24E0, void, Analyze, (GameObject * pooledObj, GameObject * original));
IL2CPP_REGISTER_METHOD(0x00FD2890, void, __cctor, (MethodInfo * method));
}
