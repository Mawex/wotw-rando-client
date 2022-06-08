using namespace app;

namespace app::methods::FixedRandom {
IL2CPP_REGISTER_METHOD(0x02552D90, int32_t, GetSafeIndex, (int32_t index));
IL2CPP_REGISTER_METHOD(0x02552E60, float, GetValue, (int32_t index));
IL2CPP_REGISTER_METHOD(0x02552E60, float, ValueFromPosition, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x02552E60, float, ValueFromInt, (int32_t index));
IL2CPP_REGISTER_METHOD(0x02552EB0, Vector2, InsideUnitCircleValuesFromPosition, (Vector3 position, int32_t offset));
IL2CPP_REGISTER_METHOD(0x02552F10, Vector2, InsideUnitCircleValueFromInt, (int32_t index));
IL2CPP_REGISTER_METHOD(0x02552F70, Vector3, InsideUnitSphereValuesFromPosition, (Vector3 position, int32_t offset));
IL2CPP_REGISTER_METHOD(0x02552F70, Vector3, InsideUnitSphereValueFromInt, (int32_t index));
IL2CPP_REGISTER_METHOD(0x02552FF0, int32_t, Range, (int32_t min, int32_t max, int32_t valuesIndex, int32_t offset));
IL2CPP_REGISTER_METHOD(0x02552FF0, int32_t, Range, (int32_t min, int32_t max, Vector3 position, int32_t offset));
IL2CPP_REGISTER_METHOD(0x02553050, float, Range, (float min, float max, int32_t valuesIndex, int32_t offset));
IL2CPP_REGISTER_METHOD(0x02553050, float, Range, (float min, float max, Vector3 position, int32_t offset));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, IndexFromPosition, (Vector3 position, int32_t offset));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateValues, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02553060, void, SetFixedUpdateIndex, (int32_t index));
IL2CPP_REGISTER_METHOD(0x02552E60, float, get_NondeterministicValue, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (FixedRandom * __this));
IL2CPP_REGISTER_METHOD(0x02553110, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015E83F0, Object *, GetRandomListItem, (List_1_System_Object_ * list, int32_t valuesIndex));
IL2CPP_REGISTER_METHOD(0x015E83F0, Object *, GetRandomListItem, (List_1_System_Object_ * list, Vector3 position));
IL2CPP_REGISTER_METHOD(0x015E8360, Object *, GetRandomArrayItem, (Object__Array * list, int32_t valuesIndex));
IL2CPP_REGISTER_METHOD(0x015E8360, Object *, GetRandomArrayItem, (Object__Array * list, Vector3 position));
IL2CPP_REGISTER_METHOD(0x015E8360, TextureAnimationWithTransitions *, GetRandomArrayItem, (TextureAnimationWithTransitions__Array * list, int32_t valuesIndex));
IL2CPP_REGISTER_METHODINFO(0x0472FD00, FixedRandom_GetRandomArrayItem_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E83F0, GameObject *, GetRandomListItem, (List_1_UnityEngine_GameObject_ * list, Vector3 position));
IL2CPP_REGISTER_METHODINFO(0x0477BA10, FixedRandom_GetRandomListItem_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E83F0, TargetSpheres_Sphere *, GetRandomListItem, (List_1_TargetSpheres_Sphere_ * list, int32_t valuesIndex));
IL2CPP_REGISTER_METHODINFO(0x047674A0, FixedRandom_GetRandomListItem_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E8360, WormHole *, GetRandomArrayItem, (WormHole__Array * list, int32_t valuesIndex));
IL2CPP_REGISTER_METHODINFO(0x04734608, FixedRandom_GetRandomArrayItem_3__MethodInfo);
}
