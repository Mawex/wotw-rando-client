using namespace app;

namespace app::methods::GhostLineRendererPlugin {
IL2CPP_REGISTER_METHOD(0x00E21430, void, StartTracking, (LineRenderer * lineRenderer));
IL2CPP_REGISTER_METHOD(0x00E214F0, void, StopTracking, (LineRenderer * lineRenderer));
IL2CPP_REGISTER_METHOD(0x00E216F0, void, __ctor, (GhostLineRendererPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (GhostLineRendererPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x00E21890, void, RecordCycle, (GhostLineRendererPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostLineRendererPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00E21BD0, void, __cctor, (MethodInfo * method));
}
