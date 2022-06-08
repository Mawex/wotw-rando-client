#include <interception_macros.h>

namespace app::methods::CageEdgeMetaData_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x019D8900, void, OnEnable, (CageEdgeMetaData_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x019D9060, void, OnDisable, (CageEdgeMetaData_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAddEdge, (CageEdgeMetaData_1_System_Object_ * __this, CageStructureTool_Edge * edge));
IL2CPP_REGISTER_METHOD(0x019D9790, void, OnRemoveEdge, (CageEdgeMetaData_1_System_Object_ * __this, CageStructureTool_Edge * edge));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSplitEdge, (CageEdgeMetaData_1_System_Object_ * __this, CageStructureTool_Edge * edge, CageStructureTool_Edge * newEdgeA, CageStructureTool_Edge * newEdgeB));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnMergeEdge, (CageEdgeMetaData_1_System_Object_ * __this, CageStructureTool_Edge * edgeA, CageStructureTool_Edge * edgeB, CageStructureTool_Edge * newEdge));
IL2CPP_REGISTER_METHOD(0x019D97D0, Object *, GetMetaData, (CageEdgeMetaData_1_System_Object_ * __this, CageStructureTool_Edge * edge));
IL2CPP_REGISTER_METHOD(0x019D98F0, void, CompleteMetadata, (CageEdgeMetaData_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x019D9BE0, void, __ctor, (CageEdgeMetaData_1_System_Object_ * __this));
}
