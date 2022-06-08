#include <interception_macros.h>

namespace app::methods::SmoothCurve {
IL2CPP_REGISTER_METHOD(0x006D1790, void, Start, (SmoothCurve * __this));
IL2CPP_REGISTER_METHOD(0x006D17A0, void, AutoSmoothNodes, (SmoothCurve * __this));
IL2CPP_REGISTER_METHOD(0x006D1B00, void, AutoSmoothNode, (SmoothCurve * __this, int32_t nodeIndex));
IL2CPP_REGISTER_METHOD(0x006D1C30, void, AutoSmoothNode, (SmoothCurve * __this, SmoothCurve_PathNode * node, Vector2 previousPosition, Vector2 nextPosition));
IL2CPP_REGISTER_METHOD(0x006D1E70, void, ApplyMesh, (SmoothCurve * __this));
IL2CPP_REGISTER_METHOD(0x006D2120, void, GenerateMesh, (SmoothCurve * __this, Mesh * mesh));
IL2CPP_REGISTER_METHOD(0x006D26A0, SmoothCurve_PathNode *, GetNodeWrapped, (SmoothCurve * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x006D27A0, SmoothCurve_PathNode *, GetNode, (SmoothCurve * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x006D2850, int32_t, get_NodeCount, (SmoothCurve * __this));
IL2CPP_REGISTER_METHOD(0x006D28E0, void, __ctor, (SmoothCurve * __this));
}
