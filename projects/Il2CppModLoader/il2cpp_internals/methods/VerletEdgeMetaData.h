#include <interception_macros.h>

namespace app::methods::VerletEdgeMetaData {
IL2CPP_REGISTER_METHOD(0x013C4400, void, OnAddEdge, (VerletEdgeMetaData * __this, CageStructureTool_Edge * edge));
IL2CPP_REGISTER_METHOD(0x013C4580, void, OnMergeEdge, (VerletEdgeMetaData * __this, CageStructureTool_Edge * edgeA, CageStructureTool_Edge * edgeB, CageStructureTool_Edge * newEdge));
IL2CPP_REGISTER_METHOD(0x013C4820, void, OnSplitEdge, (VerletEdgeMetaData * __this, CageStructureTool_Edge * edge, CageStructureTool_Edge * newEdgeA, CageStructureTool_Edge * newEdgeB));
IL2CPP_REGISTER_METHOD(0x013C4B00, void, __ctor, (VerletEdgeMetaData * __this));
}
