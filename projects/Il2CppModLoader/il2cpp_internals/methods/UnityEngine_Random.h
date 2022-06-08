using namespace app;

namespace app::methods::UnityEngine::Random {
IL2CPP_REGISTER_METHOD(0x0296D100, float, Range, (float min, float max));
IL2CPP_REGISTER_METHOD(0x02552FF0, int32_t, Range, (int32_t min, int32_t max));
IL2CPP_REGISTER_METHOD(0x02552FF0, int32_t, RandomRangeInt, (int32_t min, int32_t max));
IL2CPP_REGISTER_METHOD(0x02552E60, float, get_value, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02552F70, Vector3, get_insideUnitSphere, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0296D170, void, GetRandomUnitCircle, (Vector2 * output));
IL2CPP_REGISTER_METHOD(0x0296D1C0, Vector2, get_insideUnitCircle, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0296D220, Quaternion, get_rotationUniform, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0296D290, void, get_insideUnitSphere_Injected, (Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x0296D2E0, void, get_rotationUniform_Injected, (Quaternion * ret));
}
