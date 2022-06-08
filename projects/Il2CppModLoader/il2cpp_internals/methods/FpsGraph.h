#include <interception_macros.h>

namespace app::methods::FpsGraph {
IL2CPP_REGISTER_METHOD(0x00653FB0, int32_t, get_FrameIndex, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01634470, void, set_FrameIndex, (FpsGraph * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01634490, FrameInfo *, get_CurrentFrame, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x016344D0, void, Awake, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01634630, void, Start, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x016346E0, void, OnEnable, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x016348B0, void, OnDisable, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01634A80, void, Update, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01634D90, void, LateUpdate, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01634E20, void, OnPostRender, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01634EB0, void, OnGUI, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01635060, void, OnEndOfFrame, (FpsGraph * __this));
IL2CPP_REGISTER_METHODINFO(0x047723C8, FpsGraph_OnEndOfFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01635070, void, Reset, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01635440, void, CreateLineMaterial, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x016355E0, float, FrameTimeToGraphY, (FpsGraph * __this, float t));
IL2CPP_REGISTER_METHOD(0x01635610, float, ToXCoordinate, (FpsGraph * __this, float x));
IL2CPP_REGISTER_METHOD(0x016356E0, float, ToYCoordinate, (FpsGraph * __this, float y));
IL2CPP_REGISTER_METHOD(0x016357B0, void, Draw, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01635A90, void, DrawFrames, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01635C40, float, DrawFrameData, (FpsGraph * __this, int32_t graphXIndex, float t, Color color));
IL2CPP_REGISTER_METHOD(0x01635E40, void, DrawGarbageCollection, (FpsGraph * __this, int32_t graphXIndex, FrameInfo * frame));
IL2CPP_REGISTER_METHOD(0x01635F70, void, DrawGraphShadow, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01636080, void, DrawFPSMarkers, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x007458F0, void, DrawRect, (FpsGraph * __this, float x1, float y1, float x2, float y2));
IL2CPP_REGISTER_METHOD(0x01636790, void, DrawNumber, (FpsGraph * __this, int32_t x, int32_t y, int32_t num, bool isLeading));
IL2CPP_REGISTER_METHOD(0x01636A20, void, __ctor, (FpsGraph * __this));
IL2CPP_REGISTER_METHOD(0x01636B80, void, __cctor, ());
}
