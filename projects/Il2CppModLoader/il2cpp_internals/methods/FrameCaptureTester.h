using namespace app;

namespace app::methods::FrameCaptureTester {
IL2CPP_REGISTER_METHOD(0x016375D0, bool, get_EnableObjectProfiling, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01637670, void, set_EnableObjectProfiling, (bool value));
IL2CPP_REGISTER_METHOD(0x01637720, bool, get_FlushedThisFrame, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x016377C0, void, set_FlushedThisFrame, (bool value));
IL2CPP_REGISTER_METHOD(0x01637870, FrameCaptureTester *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x003FF8B0, FrameCaptureTester_FrameCaptureTestType__Enum, get_TestType, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_TestType, (FrameCaptureTester * __this, FrameCaptureTester_FrameCaptureTestType__Enum value));
IL2CPP_REGISTER_METHOD(0x01637910, void, Pause, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x01637920, void, Resume, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x01637930, void, __ctor, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x01638070, void, OnEnable, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x016383C0, void, OnDisable, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x016384E0, void, OnDestroy, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x016387C0, void, Awake, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x01638A90, void, SetupTest, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHODINFO(0x047178D8, FrameCaptureTester_SetupTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0163BA80, void, OnTestFinished, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHODINFO(0x0475B7D8, FrameCaptureTester_OnTestFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0163BC90, void, PreparePrependData, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x0163C3F0, void, FixedUpdate, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x0163C5E0, void, Update, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHOD(0x0163C7D0, void, OnEndOfFrame, (FrameCaptureTester * __this));
IL2CPP_REGISTER_METHODINFO(0x04700988, FrameCaptureTester_OnEndOfFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0163CFF0, String *, ArrayToCSV, (String__Array * entries, String * separator, bool separatorOnTheLastEntry));
IL2CPP_REGISTER_METHOD(0x0163D3E0, void, ArrayToCSVBuilder, (String__Array * entries, String * separator, bool separatorOnTheLastEntry, StringBuilder * output));
IL2CPP_REGISTER_METHOD(0x0163D5B0, bool, get_RecordManualTest, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0163D680, void, set_RecordManualTest, (bool value));
IL2CPP_REGISTER_METHOD(0x0163D740, bool, StartManualRecording, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0163DB50, bool, StopManualRecording, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0163DD40, void, __cctor, (MethodInfo * method));
}
