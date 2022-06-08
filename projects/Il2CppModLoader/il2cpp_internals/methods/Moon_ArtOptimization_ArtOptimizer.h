using namespace app;

namespace app::methods::Moon::ArtOptimization::ArtOptimizer {
IL2CPP_REGISTER_METHOD(0x01341260, void, add_OnEnterGettingReady, (ArtOptimizer * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x01341350, void, remove_OnEnterGettingReady, (ArtOptimizer * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x01341440, void, add_OnEnterMoving, (ArtOptimizer * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x01341530, void, remove_OnEnterMoving, (ArtOptimizer * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x01341620, void, add_OnEnterDone, (ArtOptimizer * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x01341710, void, remove_OnEnterDone, (ArtOptimizer * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x01341800, void, Initialize, (String * sceneGuid, IList_1_UberShaderComponent_ * uberShaders));
IL2CPP_REGISTER_METHOD(0x01341A10, bool, get_IsStopped, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01341AB0, void, set_IsStopped, (bool value));
IL2CPP_REGISTER_METHOD(0x01341B60, bool, get_IsRunning, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01341C00, void, Stop, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01341C90, void, StartTask, (ArtOptimizer * __this, String * sceneGuid, IList_1_UberShaderComponent_ * uberShaders));
IL2CPP_REGISTER_METHOD(0x01341CA0, void, StartTask, (ArtOptimizer * __this, String * sceneGuid));
IL2CPP_REGISTER_METHOD(0x01341F80, void, ChangeState, (ArtOptimizer * __this, ArtOptimizer_OptimizerState__Enum newState));
IL2CPP_REGISTER_METHOD(0x01342080, void, Update, (ArtOptimizer * __this));
IL2CPP_REGISTER_METHOD(0x01342310, void, UpdateState, (ArtOptimizer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateIdle, (ArtOptimizer * __this));
IL2CPP_REGISTER_METHOD(0x01342400, void, UpdateDone, (ArtOptimizer * __this));
IL2CPP_REGISTER_METHOD(0x013424A0, void, UpdatePrepareSamples, (ArtOptimizer * __this));
IL2CPP_REGISTER_METHOD(0x01342750, void, UpdateProcessing, (ArtOptimizer * __this));
IL2CPP_REGISTER_METHOD(0x013429B0, void, UpdateGettingReady, (ArtOptimizer * __this));
IL2CPP_REGISTER_METHOD(0x01344850, void, __ctor, (ArtOptimizer * __this));
IL2CPP_REGISTER_METHOD(0x01344E50, void, __cctor, (MethodInfo * method));
}
