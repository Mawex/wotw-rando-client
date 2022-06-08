using namespace app;

namespace app::methods::DestroyManager_CountAndCallback {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Count, (DestroyManager_CountAndCallback * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Count, (DestroyManager_CountAndCallback * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB930, Action *, get_Callback, (DestroyManager_CountAndCallback * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Callback, (DestroyManager_CountAndCallback * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00B8BE80, bool, get_IsDone, (DestroyManager_CountAndCallback * __this));
IL2CPP_REGISTER_METHOD(0x0091DD30, void, Reset, (DestroyManager_CountAndCallback * __this, int32_t count, Action * callback));
IL2CPP_REGISTER_METHOD(0x00B8BE90, void, DecrementCount, (DestroyManager_CountAndCallback * __this));
IL2CPP_REGISTER_METHOD(0x00B8BEC0, void, FireCallback, (DestroyManager_CountAndCallback * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DestroyManager_CountAndCallback * __this));
}
