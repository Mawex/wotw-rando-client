using namespace app;

namespace app::methods::Moon::Timeline::TransformAnimatorSystem {
IL2CPP_REGISTER_METHOD(0x0311C670, TransformAnimatorSystem *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0311C820, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0311C8A0, TransformAnimatorSystem_PositionModification, CreatePositionModification, (TransformAnimatorSystem * __this, Transform * t, Vector3 position, Space__Enum space));
IL2CPP_REGISTER_METHOD(0x0311CB50, void, SubmitDynamicPosition, (TransformAnimatorSystem * __this, Transform * t, Vector3 position, Space__Enum space, HandoverMode__Enum handoverMode, UpdateCategory__Enum category));
IL2CPP_REGISTER_METHOD(0x0311CE70, void, SubmitStaticPosition, (TransformAnimatorSystem * __this, Transform * t, Vector3 position, Space__Enum space, UpdateCategory__Enum category, bool immediatelyApply));
IL2CPP_REGISTER_METHOD(0x0311D030, void, SubmitDynamicScale, (TransformAnimatorSystem * __this, Transform * t, Vector3 scale, HandoverMode__Enum handoverMode, UpdateCategory__Enum category));
IL2CPP_REGISTER_METHOD(0x0311D270, void, SubmitStaticScale, (TransformAnimatorSystem * __this, Transform * t, Vector3 scale, UpdateCategory__Enum category));
IL2CPP_REGISTER_METHOD(0x0311D390, void, SubmitDynamicRotation, (TransformAnimatorSystem * __this, Transform * t, Quaternion rotation, HandoverMode__Enum handoverMode, UpdateCategory__Enum category, Space__Enum space));
IL2CPP_REGISTER_METHOD(0x0311D5F0, void, SubmitStaticRotation, (TransformAnimatorSystem * __this, Transform * t, Quaternion rotation, UpdateCategory__Enum category, Space__Enum space, bool immediatelyApply));
IL2CPP_REGISTER_METHOD(0x0311D760, TransformAnimatorSystem_ObjectState *, GetObjectState, (TransformAnimatorSystem * __this, Transform * t, UpdateCategory__Enum category, bool forceUpdate));
IL2CPP_REGISTER_METHOD(0x0311DCA0, Vector3, GetStaticPosition, (TransformAnimatorSystem * __this, Transform * t, Space__Enum space));
IL2CPP_REGISTER_METHOD(0x0311DE80, Vector3, GetStaticScale, (TransformAnimatorSystem * __this, Transform * t));
IL2CPP_REGISTER_METHOD(0x0311DFC0, Quaternion, GetStaticRotation, (TransformAnimatorSystem * __this, Transform * t));
IL2CPP_REGISTER_METHOD(0x0311E0F0, bool, GetHandoverPosition, (TransformAnimatorSystem * __this, Transform * t, Vector3 * value, Space__Enum space));
IL2CPP_REGISTER_METHOD(0x0311E240, bool, GetHandoverScale, (TransformAnimatorSystem * __this, Transform * t, Vector3 * value));
IL2CPP_REGISTER_METHOD(0x0311E350, bool, GetHandoverRotation, (TransformAnimatorSystem * __this, Transform * t, Quaternion * value));
IL2CPP_REGISTER_METHOD(0x0311E460, void, ApplyObjectState, (TransformAnimatorSystem * __this, TransformAnimatorSystem_ObjectState * objectState, bool forceApply));
IL2CPP_REGISTER_METHOD(0x0311E490, void, ApplyObjectState, (TransformAnimatorSystem * __this, TransformAnimatorSystem_ObjectState * objectState, bool * stateCanBeRemoved, bool forceApply));
IL2CPP_REGISTER_METHOD(0x0311E7F0, void, ClearStatesFor, (TransformAnimatorSystem * __this, List_1_System_Int32_ * objects));
IL2CPP_REGISTER_METHOD(0x0311E8E0, void, ClearAllStates, (TransformAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0311E9F0, void, RestoreStateFor, (TransformAnimatorSystem * __this, Transform * target));
IL2CPP_REGISTER_METHOD(0x0311ECC0, void, ClearState, (TransformAnimatorSystem * __this, TransformAnimatorSystem_ObjectState * objectState));
IL2CPP_REGISTER_METHOD(0x0311EE90, void, UpdateTrackedObjects, (TransformAnimatorSystem * __this, List_1_System_Int32_ * objects, bool clearStateHolders));
IL2CPP_REGISTER_METHOD(0x0311F1C0, void, OnFixedUpdate, (TransformAnimatorSystem * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0311F1D0, void, OnUpdate, (TransformAnimatorSystem * __this, float delta));
IL2CPP_REGISTER_METHOD(0x0311F1E0, TransformAnimatorSystem_ObjectState *, AcquireObjectStateFromPool, (TransformAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0311F400, void, ReturnObjectStateToPool, (TransformAnimatorSystem * __this, TransformAnimatorSystem_ObjectState * os));
IL2CPP_REGISTER_METHOD(0x0311F4A0, void, __ctor, (TransformAnimatorSystem * __this));
}
