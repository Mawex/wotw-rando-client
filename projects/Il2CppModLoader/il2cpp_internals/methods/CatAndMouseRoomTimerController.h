using namespace app;

namespace app::methods::CatAndMouseRoomTimerController {
IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_Active, (CatAndMouseRoomTimerController * __this));
IL2CPP_REGISTER_METHOD(0x0102D320, float, get_TimeNormalized, (CatAndMouseRoomTimerController * __this));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (CatAndMouseRoomTimerController * __this));
IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (CatAndMouseRoomTimerController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0102D340, void, Start, (CatAndMouseRoomTimerController * __this));
IL2CPP_REGISTER_METHOD(0x0102D4E0, void, OnDestroy, (CatAndMouseRoomTimerController * __this));
IL2CPP_REGISTER_METHOD(0x0102D690, void, OnRestoreCheckpoint, (CatAndMouseRoomTimerController * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E918, CatAndMouseRoomTimerController_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0102D8D0, void, FixedUpdate, (CatAndMouseRoomTimerController * __this));
IL2CPP_REGISTER_METHOD(0x0102DBA0, void, Enter, (CatAndMouseRoomTimerController * __this));
IL2CPP_REGISTER_METHOD(0x0102DD10, void, Exit, (CatAndMouseRoomTimerController * __this));
IL2CPP_REGISTER_METHOD(0x0102E020, void, __ctor, (CatAndMouseRoomTimerController * __this));
}
