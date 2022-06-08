using namespace app;

namespace app::methods::Segment {
IL2CPP_REGISTER_METHOD(0x0106EB50, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0106EC30, void, OnEnable, (Segment_1 * __this));
IL2CPP_REGISTER_METHOD(0x0106ECF0, void, OnDisable, (Segment_1 * __this));
IL2CPP_REGISTER_METHOD(0x0106EDB0, Segment_1 *, FindClosestSegment, (Vector3 position, float minDistance));
IL2CPP_REGISTER_METHOD(0x0106EFB0, Segment_1 *, FindClosestSegmentDown, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x0106F1D0, float, Distance, (Segment_1 * __this, Vector3 start, Vector3 end));
IL2CPP_REGISTER_METHOD(0x0106F2B0, float, Distance, (Segment_1 * __this, Link * start, Vector3 end));
IL2CPP_REGISTER_METHOD(0x0106F3A0, float, Distance, (Segment_1 * __this, Vector3 start, Link * end));
IL2CPP_REGISTER_METHOD(0x0106F490, float, Distance, (Segment_1 * __this, Link * start, Link * end));
IL2CPP_REGISTER_METHOD(0x0106F5A0, void, __ctor, (Segment_1 * __this));
IL2CPP_REGISTER_METHOD(0x0106F700, void, __cctor, (MethodInfo * method));
}
