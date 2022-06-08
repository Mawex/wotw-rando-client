#include <interception_macros.h>

namespace app::methods::PhysicsEdgeMetaData {
IL2CPP_REGISTER_METHOD(0x014FEE30, void, OnAddEdge, (PhysicsEdgeMetaData * __this, CageStructureTool_Edge * edge));
IL2CPP_REGISTER_METHOD(0x014FEFA0, void, OnMergeEdge, (PhysicsEdgeMetaData * __this, CageStructureTool_Edge * edgeA, CageStructureTool_Edge * edgeB, CageStructureTool_Edge * newEdge));
IL2CPP_REGISTER_METHOD(0x014FF260, void, OnSplitEdge, (PhysicsEdgeMetaData * __this, CageStructureTool_Edge * edge, CageStructureTool_Edge * newEdgeA, CageStructureTool_Edge * newEdgeB));
IL2CPP_REGISTER_METHOD(0x014FF530, void, __ctor, (PhysicsEdgeMetaData * __this));
}
