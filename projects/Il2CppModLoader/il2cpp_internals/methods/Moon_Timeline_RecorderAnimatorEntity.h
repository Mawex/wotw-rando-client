using namespace app;

namespace app::methods::Moon::Timeline::RecorderAnimatorEntity {
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (RecorderAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077CB40, RecorderData *, get_RecorderData, (RecorderAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077CD60, void, OnStartPlayback, (RecorderAnimatorEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0077CE50, void, OnStopPlayback, (RecorderAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077CF00, void, StartRecording, (RecorderAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077D1D0, void, LoadScenes, (RecorderAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077D790, IEnumerable_1_SceneMetaData_ *, GetSceneListFromAsset, (RecorderData * data));
IL2CPP_REGISTER_METHOD(0x0077D8E0, void, OnUpdateEntity, (RecorderAnimatorEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0077DC00, void, LoadAllScenes, (RecorderAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077E0C0, void, SceneEnabled, (RecorderAnimatorEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04765438, RecorderAnimatorEntity_SceneEnabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0077E170, void, WaitForShaderRuntimeUpdate, (RecorderAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077E2E0, void, SampleValue, (RecorderAnimatorEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x0077E420, RecorderFrame *, GetFrame, (RecorderAnimatorEntity * __this, float value));
IL2CPP_REGISTER_METHOD(0x0077E5F0, Vector3, GetCharacterPositionFromFirstFrame, (RecorderAnimatorEntity * __this));
IL2CPP_REGISTER_METHOD(0x0077E810, bool, HasFinished, (RecorderAnimatorEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x0077E830, void, __ctor, (RecorderAnimatorEntity * __this));
}
