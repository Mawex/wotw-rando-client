using namespace app;

namespace app::methods::SeinWorldState {
IL2CPP_REGISTER_METHOD(0x00AB4DA0, void, Awake, (SeinWorldState * __this));
IL2CPP_REGISTER_METHOD(0x00AB52E0, void, OnEnable, (SeinWorldState * __this));
IL2CPP_REGISTER_METHOD(0x00AB5380, void, OnDisable, (SeinWorldState * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (SeinWorldState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (SeinWorldState * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x005B0220, IUberState__Array *, get_AffectingUberStates, (SeinWorldState * __this));
IL2CPP_REGISTER_METHOD(0x00AB5420, List_1_UnityEngine_GameObject_ *, get_AllTargets, (SeinWorldState * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SeinWorldState * __this));
}
