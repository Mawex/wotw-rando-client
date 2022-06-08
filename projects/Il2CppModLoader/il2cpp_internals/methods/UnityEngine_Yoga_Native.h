using namespace app;

namespace app::methods::UnityEngine::Yoga::Native {
IL2CPP_REGISTER_METHOD(0x031BE3F0, void, YGNodeFree, (void * ygNode));
IL2CPP_REGISTER_METHOD(0x031BE4B0, void, YGNodeFreeInternal, (void * ygNode));
IL2CPP_REGISTER_METHOD(0x031BE500, void, YGNodeMeasureInvoke, (YogaNode * node, float width, YogaMeasureMode__Enum widthMode, float height, YogaMeasureMode__Enum heightMode, void * returnValueAddress));
IL2CPP_REGISTER_METHOD(0x031BE640, void, YGNodeBaselineInvoke, (YogaNode * node, float width, float height, void * returnValueAddress));
}
