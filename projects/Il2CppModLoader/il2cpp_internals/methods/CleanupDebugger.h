using namespace app;

namespace app::methods::CleanupDebugger {
IL2CPP_REGISTER_METHOD(0x01324D40, GUIStyle *, get_LabelStyle, (CleanupDebugger * __this));
IL2CPP_REGISTER_METHOD(0x013250B0, CleanupDebugger *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01325130, bool, get_Enabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013251E0, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x01325380, void, EnsureImgui, (CleanupDebugger * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x01325470, void, Awake, (CleanupDebugger * __this));
IL2CPP_REGISTER_METHOD(0x013254D0, void, OnDestroy, (CleanupDebugger * __this));
IL2CPP_REGISTER_METHOD(0x013254E0, void, OnRunGC, (CleanupDebugger * __this));
IL2CPP_REGISTER_METHOD(0x013255C0, void, OnRunPanic, (CleanupDebugger * __this));
IL2CPP_REGISTER_METHOD(0x013256A0, void, OnRunProactive, (CleanupDebugger * __this));
IL2CPP_REGISTER_METHOD(0x01325730, void, OnBlockProactive, (CleanupDebugger * __this, String * reason));
IL2CPP_REGISTER_METHOD(0x013257D0, void, OnHintPanic, (CleanupDebugger * __this, String * reason));
IL2CPP_REGISTER_METHOD(0x01325870, void, OnTeleporter, (CleanupDebugger * __this));
IL2CPP_REGISTER_METHOD(0x01325900, void, OnFader, (CleanupDebugger * __this));
IL2CPP_REGISTER_METHOD(0x01325990, void, OnCleanupResults, (CleanupDebugger * __this, String * results, bool isBad));
IL2CPP_REGISTER_METHOD(0x01325C20, void, UpdateAvailableMem, (CleanupDebugger * __this, float availableMegs));
IL2CPP_REGISTER_METHOD(0x01325CE0, void, AddEvent, (CleanupDebugger * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01325EC0, void, Update, (CleanupDebugger * __this));
IL2CPP_REGISTER_METHOD(0x01326440, void, OnGUI, (CleanupDebugger * __this));
IL2CPP_REGISTER_METHOD(0x01326720, void, __ctor, (CleanupDebugger * __this));
}
