#include <interception_macros.h>

namespace app::methods::Moon::Trail {
IL2CPP_REGISTER_METHOD(0x02567670, float, GetLenght, (Trail * __this, List_1_Moon_Trail_Point_ * input));
IL2CPP_REGISTER_METHOD(0x025677F0, void, Clear, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x025678D0, void, Awake, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x02567960, void, OnValidate, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x02567A20, void, OnEnable, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x02567A30, void, OnDisable, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x02567AD0, void, LateUpdate, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x02568090, void, CreateMesh, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x02568210, void, Simulate, (Trail * __this, float deltaTime, bool externalSimulation));
IL2CPP_REGISTER_METHOD(0x025692D0, void, EmitPoint, (Trail * __this, Trail_Point point));
IL2CPP_REGISTER_METHOD(0x025693A0, void, UpdatePointsLifecycle, (Trail * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02569880, void, UpdateRenderablePointsLifecycle, (Trail * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02569B30, void, ClearMeshData, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x02569D70, void, CommitMeshData, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x02569F10, List_1_Moon_Trail_Point_ *, UpdatedRenderablePoints, (Trail * __this, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x0256AA20, List_1_Moon_Trail_Point_ *, GetRenderablePoints, (Trail * __this, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x0256B340, void, UpdateTrailMesh, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x0256B650, Trail_CurveFrame, InitializeCurveFrame, (Trail * __this, Vector3 point, Vector3 nextPoint));
IL2CPP_REGISTER_METHOD(0x0256BAF0, void, UpdateSegmentMesh, (Trail * __this, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x0256CD00, void, OnDrawGizmos, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x0256D3E0, void, __ctor, (Trail * __this));
IL2CPP_REGISTER_METHOD(0x0256E450, void, __cctor, ());
}
