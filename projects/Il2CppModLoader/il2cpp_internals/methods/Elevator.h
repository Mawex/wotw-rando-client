using namespace app;

namespace app::methods::Elevator {
IL2CPP_REGISTER_METHOD(0x00BF99D0, bool, get_GoingUp, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BF99F0, bool, get_GoingDown, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BF9A10, uint8_t, get_CurrentStopIndex, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BF9A30, void, set_CurrentStopIndex, (Elevator * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x00BF9A50, Elevator_ElevatorStop *, get_CurrentStop, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BF9B10, void, OnEnable, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BF9FD0, void, OnDisable, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BFA490, void, FixedUpdate, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BFA860, void, StopMoving, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BFA980, void, OnRestoreCheckpoint, (Elevator * __this));
IL2CPP_REGISTER_METHODINFO(0x047042D0, Elevator_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BFA9D0, void, GoDown, (Elevator * __this));
IL2CPP_REGISTER_METHODINFO(0x047269F8, Elevator_GoDown__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BFAC10, void, GoUp, (Elevator * __this));
IL2CPP_REGISTER_METHODINFO(0x0470A2C0, Elevator_GoUp__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00BFAE40, void, SetDesiredStop, (Elevator * __this, uint8_t stopIndex));
IL2CPP_REGISTER_METHOD(0x00BFA980, void, StopTimelines, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BFB1D0, bool, IsAnyTimelinePlaying, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BFB220, void, Apply, (Elevator * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BFB3D0, IUberState__Array *, get_AffectingUberStates, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BFB460, List_1_UnityEngine_GameObject_ *, get_AllTargets, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BFB530, void, OnDrawGizmos, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BFB7E0, float, GetTweenNormalizedValue, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x0065B580, SuspendableMask__Enum, get_Mask, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x00BFB9C0, void, set_Mask, (Elevator * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsSuspended, (Elevator * __this));
IL2CPP_REGISTER_METHOD(0x0063D080, void, set_IsSuspended, (Elevator * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00BFB9D0, void, __ctor, (Elevator * __this));
}
