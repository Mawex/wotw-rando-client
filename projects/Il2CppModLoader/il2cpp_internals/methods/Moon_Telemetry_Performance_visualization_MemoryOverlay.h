using namespace app;

namespace app::methods::Moon::Telemetry::Performance::visualization::MemoryOverlay {
IL2CPP_REGISTER_METHOD(0x010A5BE0, void, CreateLineMaterial, (MemoryOverlay * __this));
IL2CPP_REGISTER_METHOD(0x010A5D80, void, OnEndOfFrame, (MemoryOverlay * __this));
IL2CPP_REGISTER_METHODINFO(0x0478F178, MemoryOverlay_OnEndOfFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010A5D90, void, EnsureImguiRegistered, (MemoryOverlay * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x010A5E90, void, Awake, (MemoryOverlay * __this));
IL2CPP_REGISTER_METHOD(0x010A6000, void, OnDestroy, (MemoryOverlay * __this));
IL2CPP_REGISTER_METHOD(0x010A60E0, void, OnEnable, (MemoryOverlay * __this));
IL2CPP_REGISTER_METHOD(0x010A6350, void, Update, (MemoryOverlay * __this));
IL2CPP_REGISTER_METHOD(0x010A6430, void, OnDisable, (MemoryOverlay * __this));
IL2CPP_REGISTER_METHOD(0x010A6660, String *, FormatMemory, (MemoryOverlay * __this, String * format, Func_1_Int64_ * memory));
IL2CPP_REGISTER_METHOD(0x010A67C0, String *, FormatMemoryUInt, (MemoryOverlay * __this, String * format, Func_1_UInt32_ * memory));
IL2CPP_REGISTER_METHOD(0x010A6910, void, DrawMemoryStat, (MemoryOverlay * __this, String * name, uint64_t bytes));
IL2CPP_REGISTER_METHOD(0x010A6A60, void, DrawStringWithInt, (MemoryOverlay * __this, String * name, int32_t value));
IL2CPP_REGISTER_METHOD(0x010A6B90, void, DrawMemoryPair, (MemoryOverlay * __this, String * name, uint64_t minBytes, uint64_t maxBytes));
IL2CPP_REGISTER_METHOD(0x010A6D70, void, DrawMemoryTriplet, (MemoryOverlay * __this, String * name, uint64_t minBytes, uint64_t maxBytes, int32_t someCount));
IL2CPP_REGISTER_METHOD(0x010A6FA0, void, DrawDebug, (MemoryOverlay * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGUI, (MemoryOverlay * __this));
IL2CPP_REGISTER_METHOD(0x004C8610, void, __ctor, (MemoryOverlay * __this));
}
