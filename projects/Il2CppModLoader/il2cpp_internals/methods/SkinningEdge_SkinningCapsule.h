using namespace app;

namespace app::methods::SkinningEdge_SkinningCapsule {
IL2CPP_REGISTER_METHOD(0x006BE9E0, void, Set, (SkinningEdge_SkinningCapsule * __this, SkinningEdge_SkinningCapsule * cap));
IL2CPP_REGISTER_METHOD(0x006BEA20, float, get_outerRadius1, (SkinningEdge_SkinningCapsule * __this));
IL2CPP_REGISTER_METHOD(0x006BEA30, void, set_outerRadius1, (SkinningEdge_SkinningCapsule * __this, float value));
IL2CPP_REGISTER_METHOD(0x006BEB00, float, get_outerRadius2, (SkinningEdge_SkinningCapsule * __this));
IL2CPP_REGISTER_METHOD(0x006BEB10, void, set_outerRadius2, (SkinningEdge_SkinningCapsule * __this, float value));
IL2CPP_REGISTER_METHOD(0x006BEBE0, float, FaloffWeight2D, (SkinningEdge_SkinningCapsule * __this, Vector3 point1, Vector3 point2, Vector3 point));
IL2CPP_REGISTER_METHOD(0x006BEC40, float, FaloffWeight, (SkinningEdge_SkinningCapsule * __this, Vector3 point1, Vector3 point2, Vector3 point));
IL2CPP_REGISTER_METHOD(0x006BF170, void, __ctor, (SkinningEdge_SkinningCapsule * __this));
}
