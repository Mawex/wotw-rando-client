#include <interception_macros.h>

namespace app::methods::TriangleNet::Meshing::QualityMesher {
IL2CPP_REGISTER_METHOD(0x02B13200, void, __ctor, (QualityMesher * __this, Mesh_1 * mesh, Configuration_1 * config));
IL2CPP_REGISTER_METHOD(0x02B13840, void, Apply, (QualityMesher * __this, QualityOptions * quality, bool delaunay));
IL2CPP_REGISTER_METHOD(0x02B13A80, void, AddBadSubseg, (QualityMesher * __this, BadSubseg * badseg));
IL2CPP_REGISTER_METHOD(0x02B13B20, int32_t, CheckSeg4Encroach, (QualityMesher * __this, Osub * testsubseg));
IL2CPP_REGISTER_METHOD(0x02B140F0, void, TestTriangle, (QualityMesher * __this, Otri * testtri));
IL2CPP_REGISTER_METHOD(0x02B14A50, void, TallyEncs, (QualityMesher * __this));
IL2CPP_REGISTER_METHOD(0x02B14BE0, void, SplitEncSegs, (QualityMesher * __this, bool triflaws));
IL2CPP_REGISTER_METHODINFO(0x0470E150, QualityMesher_SplitEncSegs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B15AD0, void, TallyFaces, (QualityMesher * __this));
IL2CPP_REGISTER_METHOD(0x02B15CA0, void, SplitTriangle, (QualityMesher * __this, BadTriangle * badtri));
IL2CPP_REGISTER_METHODINFO(0x047303C0, QualityMesher_SplitTriangle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B16450, void, EnforceQuality, (QualityMesher * __this));
}
