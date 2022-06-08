using namespace app;

namespace app::methods::AkPositionArray {
IL2CPP_REGISTER_METHOD(0x0188F550, void, __ctor, (AkPositionArray * __this, uint32_t in_Count));
IL2CPP_REGISTER_METHOD(0x00529E80, uint32_t, get_Count, (AkPositionArray * __this));
IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Count, (AkPositionArray * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x0188F610, void, Dispose, (AkPositionArray * __this));
IL2CPP_REGISTER_METHOD(0x0188F6D0, void, Finalize, (AkPositionArray * __this));
IL2CPP_REGISTER_METHOD(0x0188F7E0, void, Reset, (AkPositionArray * __this));
IL2CPP_REGISTER_METHOD(0x0188F7F0, void, Add, (AkPositionArray * __this, Vector3 in_Pos, Vector3 in_Forward, Vector3 in_Top));
IL2CPP_REGISTER_METHODINFO(0x047885A0, AkPositionArray_Add__MethodInfo);
}
