using namespace app;

namespace app::methods::usedStandaloneScripts::DeltaTimeManagers::DeltaTimeManager {
IL2CPP_REGISTER_METHOD(0x03123160, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03123200, void, InitializeController, (DeltaTimeManager * __this, DeltaTimeManager_ControllerType__Enum type));
IL2CPP_REGISTER_METHOD(0x006410F0, DeltaTimeManager_ControllerType__Enum, get_Controller, (DeltaTimeManager * __this));
IL2CPP_REGISTER_METHOD(0x03123880, void, set_Controller, (DeltaTimeManager * __this, DeltaTimeManager_ControllerType__Enum value));
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_Enabled, (DeltaTimeManager * __this));
IL2CPP_REGISTER_METHOD(0x031238C0, void, set_Enabled, (DeltaTimeManager * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03123930, void, Awake, (DeltaTimeManager * __this));
IL2CPP_REGISTER_METHOD(0x03123CC0, void, OnDestroy, (DeltaTimeManager * __this));
IL2CPP_REGISTER_METHOD(0x03123DA0, void, Reset, (DeltaTimeManager * __this));
IL2CPP_REGISTER_METHOD(0x03123EF0, void, Enable, (DeltaTimeManager * __this));
IL2CPP_REGISTER_METHOD(0x03123F30, void, Disable, (DeltaTimeManager * __this));
IL2CPP_REGISTER_METHOD(0x03123F60, void, BeforeTimeManagerCallback, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04797560, DeltaTimeManager_BeforeTimeManagerCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031240B0, void, AfterTimeManagerCallback, (MethodInfo * method));
IL2CPP_REGISTER_METHODINFO(0x04746B78, DeltaTimeManager_AfterTimeManagerCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03124200, void, InjectToPlayerLoop, (PlayerLoopSystem * loop));
IL2CPP_REGISTER_METHOD(0x03124480, void, Insert, (List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_ * list, PlayerLoopSystem system, DeltaTimeManager_InsertionMode__Enum insertionMode, String * insertionPoint));
IL2CPP_REGISTER_METHODINFO(0x0476CB78, DeltaTimeManager_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03124640, DeltaTimeManager_DeltaTimeFrameHistory *, GetHistoricFrame, (DeltaTimeManager * __this, int32_t framesInPast));
IL2CPP_REGISTER_METHOD(0x03124770, bool, GetHistoricFrameRange, (DeltaTimeManager * __this, int32_t offset, int32_t frameCount, DeltaTimeManager_DeltaTimeFrameHistory__Array * * outArray));
IL2CPP_REGISTER_METHOD(0x03124A90, void, OnBeforeTimeManager, (DeltaTimeManager * __this));
IL2CPP_REGISTER_METHOD(0x03124D80, void, OnAfterTimeManager, (DeltaTimeManager * __this));
IL2CPP_REGISTER_METHOD(0x03124F30, void, __ctor, (DeltaTimeManager * __this));
IL2CPP_REGISTER_METHOD(0x031250D0, void, __cctor, (MethodInfo * method));
}
