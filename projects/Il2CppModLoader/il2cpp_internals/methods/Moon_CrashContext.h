using namespace app;

namespace app::methods::Moon::CrashContext {
IL2CPP_REGISTER_METHOD(0x00CCE450, bool, get_IsDoingCleanup, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00CCE4D0, void, set_IsDoingCleanup, (bool value));
IL2CPP_REGISTER_METHOD(0x00CCE5D0, void, SetTelemetrySessionID, (Guid guid));
IL2CPP_REGISTER_METHOD(0x00CCE680, void, Initialize, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00CCE9E0, Vector2, GetPosition, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00CCEC40, CrashContext_Data, GetData, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00CCEEF0, void, UpdateMemoryRegionUnsafe, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00CCEFF0, void, UpdateMemoryRegion, (MethodInfo * method));
}
