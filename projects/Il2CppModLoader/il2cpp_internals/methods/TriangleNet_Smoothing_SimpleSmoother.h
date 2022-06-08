using namespace app;

namespace app::methods::TriangleNet::Smoothing::SimpleSmoother {
IL2CPP_REGISTER_METHOD(0x02A91950, void, __ctor, (SimpleSmoother * __this));
IL2CPP_REGISTER_METHOD(0x02A91AA0, void, __ctor, (SimpleSmoother * __this, IVoronoiFactory * factory));
IL2CPP_REGISTER_METHOD(0x02A91FA0, void, __ctor, (SimpleSmoother * __this, IVoronoiFactory * factory, Configuration_1 * config));
IL2CPP_REGISTER_METHOD(0x02A92100, void, Smooth, (SimpleSmoother * __this, IMesh * mesh));
IL2CPP_REGISTER_METHOD(0x02A92110, void, Smooth, (SimpleSmoother * __this, IMesh * mesh, int32_t limit));
IL2CPP_REGISTER_METHOD(0x02A92660, void, Step, (SimpleSmoother * __this, Mesh_1 * mesh, IVoronoiFactory * factory, IPredicates * predicates));
IL2CPP_REGISTER_METHOD(0x02A92920, void, Centroid, (SimpleSmoother * __this, Face * face, double * x, double * y));
IL2CPP_REGISTER_METHOD(0x02A92A50, Polygon *, Rebuild, (SimpleSmoother * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02A92E00, TrianglePool *, __ctor_b__5_1, (SimpleSmoother * __this));
IL2CPP_REGISTER_METHODINFO(0x047942E8, SimpleSmoother___ctor_b__5_1__MethodInfo);
}
