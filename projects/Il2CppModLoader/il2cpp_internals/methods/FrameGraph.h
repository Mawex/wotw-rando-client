using namespace app;

namespace app::methods::FrameGraph {
IL2CPP_REGISTER_METHOD(0x0163ED70, void, Awake, (FrameGraph * __this));
IL2CPP_REGISTER_METHOD(0x0163EE70, void, InitResolution, (FrameGraph * __this));
IL2CPP_REGISTER_METHOD(0x0163EF90, void, OnEnable, (FrameGraph * __this));
IL2CPP_REGISTER_METHOD(0x0163F180, void, OnDisable, (FrameGraph * __this));
IL2CPP_REGISTER_METHOD(0x0163F370, void, OnEndOfFrame, (FrameGraph * __this));
IL2CPP_REGISTER_METHODINFO(0x0472EA80, FrameGraph_OnEndOfFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0163F4B0, void, CreateLineMaterial, (FrameGraph * __this));
IL2CPP_REGISTER_METHOD(0x0163F650, int32_t, NsOffsetToXCoordinate, (FrameGraph * __this, int64_t nsOffset));
IL2CPP_REGISTER_METHOD(0x0163F740, int32_t, DrawSampleSummary, (FrameGraph * __this, int64_t nsStartOffset, int64_t nsEndOffset, float msValue, Color color, int32_t xStart, String * name));
IL2CPP_REGISTER_METHOD(0x0163F8C0, void, DrawSampleBar, (FrameGraph * __this, int64_t nsStartOffset, int64_t nsEndOffset, float msValue, Color color));
IL2CPP_REGISTER_METHOD(0x0163FAF0, void, Update, (FrameGraph * __this));
IL2CPP_REGISTER_METHOD(0x0163FB90, void, Draw, (FrameGraph * __this));
IL2CPP_REGISTER_METHOD(0x016408A0, void, __ctor, (FrameGraph * __this));
IL2CPP_REGISTER_METHOD(0x016408C0, void, __cctor, (MethodInfo * method));
}
