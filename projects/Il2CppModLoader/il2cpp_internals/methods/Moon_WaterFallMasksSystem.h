using namespace app;

namespace app::methods::Moon::WaterFallMasksSystem {
IL2CPP_REGISTER_METHOD(0x00F28AF0, bool, ForceDisableWaterFallObjects, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x0474FD60, WaterFallMasksSystem_ForceDisableWaterFallObjects__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F28D30, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F28E00, WaterFallMasksSystem *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00F28FF0, void, __ctor, (WaterFallMasksSystem * __this));
IL2CPP_REGISTER_METHOD(0x00F29400, void, RegisterWaterFall, (WaterFallMasksSystem * __this, WaterFallMask * waterfallMask));
IL2CPP_REGISTER_METHOD(0x00F29590, void, UnregisterWaterFall, (WaterFallMasksSystem * __this, WaterFallMask * waterFallMask));
IL2CPP_REGISTER_METHOD(0x00F296D0, void, RegisterInteractionAgent, (WaterFallMasksSystem * __this, IWaterfallInteractionAgent * agent));
IL2CPP_REGISTER_METHOD(0x00F29770, void, UnregisterInteractionAgent, (WaterFallMasksSystem * __this, IWaterfallInteractionAgent * agent));
IL2CPP_REGISTER_METHOD(0x00F29810, void, OnPauseDrivable, (WaterFallMasksSystem * __this));
IL2CPP_REGISTER_METHOD(0x00F29980, void, OnResumeDrivable, (WaterFallMasksSystem * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, UpdateType__Enum, get_UpdateType, (WaterFallMasksSystem * __this));
IL2CPP_REGISTER_METHOD(0x00F29AF0, void, OnUpdate, (WaterFallMasksSystem * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00F29D70, void, InitWaterfall, (WaterFallMasksSystem * __this, WaterFallMask * waterFall));
IL2CPP_REGISTER_METHOD(0x00F29ED0, void, StartTimeslicedInit, (WaterFallMasksSystem * __this));
IL2CPP_REGISTER_METHOD(0x00F2A2E0, IEnumerator *, TimeslicedInit, (WaterFallMasksSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, GetTimesliceContextualDebugData, (WaterFallMasksSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x047854A0, WaterFallMasksSystem_GetTimesliceContextualDebugData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
