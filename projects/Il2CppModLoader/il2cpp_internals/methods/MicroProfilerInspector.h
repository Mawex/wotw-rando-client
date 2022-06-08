#include <interception_macros.h>

namespace app::methods::MicroProfilerInspector {
IL2CPP_REGISTER_METHOD(0x015ACB80, void, InitializeMetricPresets, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015AE910, void, ApplyMetricPreset, (MicroProfilerInspector * __this, MicroProfilerInspector_MetricPreset * preset));
IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, get_FrameInspectorIndex, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015AEA40, void, set_FrameInspectorIndex, (MicroProfilerInspector * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x015AEB30, void, RegisterImGUIClient, ());
IL2CPP_REGISTER_METHOD(0x015AEC20, void, UnregisterImGUIClient, ());
IL2CPP_REGISTER_METHOD(0x015AED10, void, Awake, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015AEE30, String *, _getStringForMSValue, (MicroProfilerInspector * __this, double ms));
IL2CPP_REGISTER_METHOD(0x015AEFD0, String *, _getStatName, (MicroProfilerInspector * __this, Metric__Enum metric));
IL2CPP_REGISTER_METHOD(0x015AF0A0, void, InitializeCaches, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015AFC40, void, OnEnable, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015B0040, void, InitStyles, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015B1C60, void, OnDisable, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015B2040, void, Update, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015B20A0, void, UpdateMetricData, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015B21C0, void, UpdateMetricPeaksAndAverages, (MicroProfilerInspector * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x015B2510, void, UpdateMetricCache, (MicroProfilerInspector * __this, int32_t frame, MicroProfilerInspector_MetricData * data));
IL2CPP_REGISTER_METHOD(0x015B26E0, void, OnGUI, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015B4A60, void, ResetFrameNavigationTimers, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015B4A70, void, HandleFrameInspectorNavigation, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015B4FC0, void, SerializeFrameRangeToDisk, (MicroProfilerInspector * __this, int32_t startFrame, int32_t endFrame, String * fileName));
IL2CPP_REGISTER_METHOD(0x015B5550, void, SuspendGameplay, ());
IL2CPP_REGISTER_METHOD(0x015B5690, void, ResumeGameplay, ());
IL2CPP_REGISTER_METHOD(0x015B57D0, void, __ctor, (MicroProfilerInspector * __this));
IL2CPP_REGISTER_METHOD(0x015B5ED0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x015B6840, String *, _OnGUI_b__64_5, (MicroProfilerInspector * __this, MicroProfilerInspector_MetricData x));
IL2CPP_REGISTER_METHODINFO(0x04737D10, MicroProfilerInspector__OnGUI_b__64_5__MethodInfo);
}
