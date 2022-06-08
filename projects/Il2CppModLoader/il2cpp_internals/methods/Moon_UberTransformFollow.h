using namespace app;

namespace app::methods::Moon::UberTransformFollow {
IL2CPP_REGISTER_METHOD(0x0256FF30, int32_t, get_TargetCount, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x0256FFC0, Transform *, GetTarget, (UberTransformFollow * __this, int32_t idx));
IL2CPP_REGISTER_METHOD(0x02570090, void, ClearNullTargetsRuntime, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x025701C0, void, OnEnable, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x025703F0, void, OnDisable, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x025704B0, void, Awake, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x025708C0, void, AddTarget, (UberTransformFollow * __this, Transform * target));
IL2CPP_REGISTER_METHOD(0x02570B40, void, ClearTargets, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x02570C20, ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3_, DoPositionAndRotation, (UberTransformFollow * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x025712B0, Vector3, DoPosition, (UberTransformFollow * __this, float deltaTime, Vector3 myPosition, Vector3 avgPosition));
IL2CPP_REGISTER_METHOD(0x02571F30, Vector3, DoRotation, (UberTransformFollow * __this, float deltaTime, Vector3 myPosition, Vector3 myRotation, Vector3 avgPosition, Vector3 avgRotation));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EditorUpdate, (UberTransformFollow * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02572720, void, RuntimeUpdate, (UberTransformFollow * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02572800, float, HighestX, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x02572950, float, LowestX, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x02572AA0, float, HighestY, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x02572BF0, float, LowestY, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x02572D40, float, HighestZ, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x02572E90, float, LowestZ, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x02572FE0, float, ComputeLookRotation2D, (UberTransformFollow * __this, Vector3 from, Vector3 to));
IL2CPP_REGISTER_METHOD(0x02573100, Vector3, ComputeLookRotation3D, (UberTransformFollow * __this, Vector3 from, Vector3 to));
IL2CPP_REGISTER_METHOD(0x02573260, float, LinearRegressionBasedRotation2D, (UberTransformFollow * __this, Vector2 average));
IL2CPP_REGISTER_METHOD(0x02573700, void, __ctor, (UberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x02573870, void, __cctor, (MethodInfo * method));
}
