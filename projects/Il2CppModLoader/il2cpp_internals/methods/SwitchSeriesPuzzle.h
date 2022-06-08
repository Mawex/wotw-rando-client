using namespace app;

namespace app::methods::SwitchSeriesPuzzle {
IL2CPP_REGISTER_METHOD(0x01834490, void, Awake, (SwitchSeriesPuzzle * __this));
IL2CPP_REGISTER_METHOD(0x01834740, void, CacheValues, (SwitchSeriesPuzzle * __this));
IL2CPP_REGISTER_METHOD(0x01834910, void, OnEnable, (SwitchSeriesPuzzle * __this));
IL2CPP_REGISTER_METHOD(0x018349C0, void, OnDisable, (SwitchSeriesPuzzle * __this));
IL2CPP_REGISTER_METHOD(0x01834A60, IGenericUberState *, GetChangedState, (SwitchSeriesPuzzle * __this));
IL2CPP_REGISTER_METHOD(0x01834C50, void, Apply, (SwitchSeriesPuzzle * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (SwitchSeriesPuzzle * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, IUberState__Array *, get_AffectingUberStates, (SwitchSeriesPuzzle * __this));
IL2CPP_REGISTER_METHOD(0x01835080, List_1_UnityEngine_GameObject_ *, get_AllTargets, (SwitchSeriesPuzzle * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SwitchSeriesPuzzle * __this));
}
