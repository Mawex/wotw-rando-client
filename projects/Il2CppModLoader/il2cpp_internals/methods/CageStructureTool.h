using namespace app;

namespace app::methods::CageStructureTool {
IL2CPP_REGISTER_METHOD(0x00824770, void, add_OnAddVertex, (CageStructureTool * __this, Action_1_CageStructureTool_Vertex_ * value));
IL2CPP_REGISTER_METHOD(0x00824860, void, remove_OnAddVertex, (CageStructureTool * __this, Action_1_CageStructureTool_Vertex_ * value));
IL2CPP_REGISTER_METHOD(0x00824950, void, add_OnRemoveVertex, (CageStructureTool * __this, Action_1_CageStructureTool_Vertex_ * value));
IL2CPP_REGISTER_METHOD(0x00824A40, void, remove_OnRemoveVertex, (CageStructureTool * __this, Action_1_CageStructureTool_Vertex_ * value));
IL2CPP_REGISTER_METHOD(0x00824B30, void, add_OnAddEdge, (CageStructureTool * __this, Action_1_CageStructureTool_Edge_ * value));
IL2CPP_REGISTER_METHOD(0x00824C20, void, remove_OnAddEdge, (CageStructureTool * __this, Action_1_CageStructureTool_Edge_ * value));
IL2CPP_REGISTER_METHOD(0x00824D10, void, add_OnRemoveEdge, (CageStructureTool * __this, Action_1_CageStructureTool_Edge_ * value));
IL2CPP_REGISTER_METHOD(0x00824E00, void, remove_OnRemoveEdge, (CageStructureTool * __this, Action_1_CageStructureTool_Edge_ * value));
IL2CPP_REGISTER_METHOD(0x00824EF0, void, add_OnSplitEdge, (CageStructureTool * __this, Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_ * value));
IL2CPP_REGISTER_METHOD(0x00824FE0, void, remove_OnSplitEdge, (CageStructureTool * __this, Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_ * value));
IL2CPP_REGISTER_METHOD(0x008250D0, void, add_OnMergeEdge, (CageStructureTool * __this, Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_ * value));
IL2CPP_REGISTER_METHOD(0x008251C0, void, remove_OnMergeEdge, (CageStructureTool * __this, Action_3_CageStructureTool_Edge_CageStructureTool_Edge_CageStructureTool_Edge_ * value));
IL2CPP_REGISTER_METHOD(0x008252B0, void, add_OnAddFace, (CageStructureTool * __this, Action_1_CageStructureTool_Face_ * value));
IL2CPP_REGISTER_METHOD(0x008253A0, void, remove_OnAddFace, (CageStructureTool * __this, Action_1_CageStructureTool_Face_ * value));
IL2CPP_REGISTER_METHOD(0x00825490, void, add_OnRemoveFace, (CageStructureTool * __this, Action_1_CageStructureTool_Face_ * value));
IL2CPP_REGISTER_METHOD(0x00825580, void, remove_OnRemoveFace, (CageStructureTool * __this, Action_1_CageStructureTool_Face_ * value));
IL2CPP_REGISTER_METHOD(0x00660430, List_1_CageStructureTool_Vertex_ *, get_SelectedVertices, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00660440, void, set_SelectedVertices, (CageStructureTool * __this, List_1_CageStructureTool_Vertex_ * value));
IL2CPP_REGISTER_METHOD(0x00825670, Transform *, get_Transform, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00825740, bool, get_HaveTextureMapData, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00825760, void, Awake, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00825860, CageStructureTool_Vertex *, VertexByIndex, (CageStructureTool * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00825930, CageStructureTool_Vertex *, VertexByID, (CageStructureTool * __this, int32_t ID));
IL2CPP_REGISTER_METHOD(0x00825B80, void, RemoveVertex, (CageStructureTool * __this, CageStructureTool_Vertex * vertex, bool sendModified, bool updateFace));
IL2CPP_REGISTER_METHOD(0x008260E0, void, DisconnectVertexFromEdges, (CageStructureTool * __this, int32_t vertexIndex));
IL2CPP_REGISTER_METHOD(0x00826550, CageStructureTool_Edge *, EdgeByID, (CageStructureTool * __this, int32_t ID));
IL2CPP_REGISTER_METHOD(0x008267A0, CageStructureTool_Edge *, AddEdge, (CageStructureTool * __this, CageStructureTool_Vertex * vertexA, CageStructureTool_Vertex * vertexB, bool sendModified));
IL2CPP_REGISTER_METHOD(0x00826810, CageStructureTool_Edge *, AddEdge, (CageStructureTool * __this, int32_t vertexA, int32_t vertexB, bool sendModified));
IL2CPP_REGISTER_METHOD(0x008269E0, void, EdgeWasSplit, (CageStructureTool * __this, CageStructureTool_Edge * edge, CageStructureTool_Edge * newEdgeA, CageStructureTool_Edge * newEdgeB));
IL2CPP_REGISTER_METHOD(0x00826AB0, void, EdgesWereMerged, (CageStructureTool * __this, CageStructureTool_Edge * edgeA, CageStructureTool_Edge * edgeB, CageStructureTool_Edge * newEdge));
IL2CPP_REGISTER_METHOD(0x00826B80, bool, HasEdge, (CageStructureTool * __this, CageStructureTool_Vertex * vertexA, CageStructureTool_Vertex * vertexB));
IL2CPP_REGISTER_METHOD(0x00826D60, bool, RemoveEdge, (CageStructureTool * __this, CageStructureTool_Vertex * vertexA, CageStructureTool_Vertex * vertexB, bool sendModified));
IL2CPP_REGISTER_METHOD(0x00827020, void, RemoveEdge, (CageStructureTool * __this, CageStructureTool_Edge * edge, bool sendModified, bool autoFace));
IL2CPP_REGISTER_METHOD(0x00827080, void, RemoveEdgeAtIndex, (CageStructureTool * __this, int32_t edgeIndex, bool sendModified, bool autoFace));
IL2CPP_REGISTER_METHOD(0x008278E0, int32_t, FindVertexIndex, (CageStructureTool * __this, CageStructureTool_Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x00827B40, int32_t, FindEdgeIndex, (CageStructureTool * __this, CageStructureTool_Edge * edge));
IL2CPP_REGISTER_METHOD(0x00827DA0, CageStructureTool_Vertex *, AddVertex, (CageStructureTool * __this, Vector3 position, bool sendModified));
IL2CPP_REGISTER_METHOD(0x00827F80, void, MergeVertex, (CageStructureTool * __this, CageStructureTool_Vertex * vertex, CageStructureTool_Vertex * selectedVertex));
IL2CPP_REGISTER_METHOD(0x00828320, void, AddFace, (CageStructureTool * __this, List_1_System_Int32_ * verts, bool updateTriangles, bool sendModified));
IL2CPP_REGISTER_METHOD(0x00828830, bool, IsFaceIdUsed, (CageStructureTool * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x00828920, void, RemoveFace, (CageStructureTool * __this, CageStructureTool_Face * face));
IL2CPP_REGISTER_METHOD(0x00828B50, void, RemoveFaceAt, (CageStructureTool * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00828C00, void, Register, (CageStructureTool * __this, ICageMetaData * cageMetaData));
IL2CPP_REGISTER_METHOD(0x00828CA0, void, Unregister, (CageStructureTool * __this, ICageMetaData * cageMetaData));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateFaceTriangulation, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00828D40, Rect__Array *, get_FacesAsRectangles, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00829260, CageStructureTool_Face *, FindFaceAtPositionFaster, (CageStructureTool * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00829690, CageStructureTool_Face *, FindFaceAtPosition, (CageStructureTool * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00829A90, List_1_CageStructureTool_Face_ *, FindFacesAtPosition, (CageStructureTool * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00829F70, CageStructureTool_Face *, FindClosestFaceToPosition, (CageStructureTool * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0082A400, Vector3, FindClosestVertexToPoint, (CageStructureTool * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x0082A920, CageStructureTool_Face *, FaceByID, (CageStructureTool * __this, int32_t ID));
IL2CPP_REGISTER_METHOD(0x0082AB70, void, UpdateConnections, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x0082B010, void, FindLoop, (CageStructureTool * __this, int32_t start, int32_t goal));
IL2CPP_REGISTER_METHOD(0x0082C550, List_1_CageStructureTool_Vertex_ *, FindVerticesFromEdges, (CageStructureTool * __this, List_1_CageStructureTool_Edge_ * edges));
IL2CPP_REGISTER_METHOD(0x0082C840, List_1_CageStructureTool_Edge_ *, FindEdgesFromVertices, (CageStructureTool * __this, List_1_CageStructureTool_Vertex_ * vertices));
IL2CPP_REGISTER_METHOD(0x0082CC30, List_1_CageStructureTool_Edge_ *, FindEdgesContainingVertex, (CageStructureTool * __this, CageStructureTool_Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x0082CF00, CageStructureTool_Edge *, FindEdgeFromVertices, (CageStructureTool * __this, int32_t vertexa, int32_t vertexb));
IL2CPP_REGISTER_METHOD(0x0082D0C0, List_1_CageStructureTool_Edge_ *, FindEdgesFromVertices, (CageStructureTool * __this, List_1_System_Int32_ * vertices));
IL2CPP_REGISTER_METHOD(0x0082D4B0, void, GenerateMesh, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x0082D710, void, GenerateMesh, (Mesh * mesh, CageStructureTool * cageStructureTool));
IL2CPP_REGISTER_METHOD(0x0082EA20, void, FromMesh, (CageStructureTool * __this, Mesh * mesh, Transform * meshTransform));
IL2CPP_REGISTER_METHOD(0x0082EEA0, void, AppendMesh, (CageStructureTool * __this, Mesh * mesh, Transform * meshTransform));
IL2CPP_REGISTER_METHOD(0x0082F390, void, Simplify, (CageStructureTool * __this, float radius));
IL2CPP_REGISTER_METHOD(0x0082FAB0, void, FindAllLoops, (CageStructureTool * __this, List_1_List_1_System_Int32_ * loops));
IL2CPP_REGISTER_METHOD(0x008302F0, void, AddFaceFromEdgePath, (CageStructureTool * __this, List_1_System_Int32_ * path));
IL2CPP_REGISTER_METHOD(0x00830B10, bool, HasDuplicateEdge, (CageStructureTool * __this, List_1_System_Int32_ * path));
IL2CPP_REGISTER_METHOD(0x00830D70, void, AutoFaceForEdge, (CageStructureTool * __this, CageStructureTool_Edge * e));
IL2CPP_REGISTER_METHOD(0x00831290, void, AutoFace, (CageStructureTool * __this, CageStructureTool_Edge * e, bool wide));
IL2CPP_REGISTER_METHOD(0x00831D50, CageStructureTool_Vertex *, SplitVertexConnection, (CageStructureTool * __this, int32_t baseVertex, int32_t skipConnection, Vector2 dir, float traceDir));
IL2CPP_REGISTER_METHOD(0x00832190, void, SplitAtEdge, (CageStructureTool * __this, CageStructureTool_Edge * e, bool autoFace));
IL2CPP_REGISTER_METHOD(0x00832650, bool, TraceFaceInDir, (CageStructureTool * __this, CageStructureTool_Vertex * vertexStart, int32_t prevVertex, CageStructureTool_Edge * edge, List_1_System_Int32_ * path, float traceDir, float * totalAngle));
IL2CPP_REGISTER_METHOD(0x00832E00, void, SortPathPoints, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x008333A0, void, BuildOrderedPointsVector, (CageStructureTool * __this, CageStructureTool_Vertex * currentVertex, HashSet_1_CageStructureTool_Vertex_ * * analyzedVertices, List_1_CageStructureTool_Vertex_ * orderedPoints));
IL2CPP_REGISTER_METHOD(0x008336C0, void, FlipPathDirection, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00833950, float, GetWalkAngle, (Vector3 dir, Vector3 walkDir));
IL2CPP_REGISTER_METHOD(0x00833B20, void, Clear, (CageStructureTool * __this, bool sendModified));
IL2CPP_REGISTER_METHOD(0x00833C70, void, GenerateSequentialVertices, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00834440, void, DebugDrawPoly, (CageStructureTool * __this, Color color));
IL2CPP_REGISTER_METHOD(0x00834790, float, CalculatePolySDF, (CageStructureTool * __this, Vector3 circleCenterLocal, float circleRadius));
IL2CPP_REGISTER_METHOD(0x00834BE0, bool, IsCircleOverlappingPolygon, (CageStructureTool * __this, Vector3 circleCenterLocal, float circleRadius));
IL2CPP_REGISTER_METHOD(0x00834D20, bool, IsCircleOverlapping, (CageStructureTool * __this, Vector3 circleCenterWorld, float circleRadius));
IL2CPP_REGISTER_METHOD(0x008354E0, bool, IsCircleOverlappingTriangles, (CageStructureTool * __this, Vector3 circleCenterLocal, float circleRadius));
IL2CPP_REGISTER_METHOD(0x00835C80, bool, IsPointInside, (CageStructureTool * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x008362B0, uint8_t, GetMapValue, (CageStructureTool * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00836300, void, SetMapValue, (CageStructureTool * __this, int32_t x, int32_t y, uint8_t value));
IL2CPP_REGISTER_METHOD(0x00836340, Vector3, CalculateCenterOfMass, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x008365F0, List_1_List_1_System_Int32_ *, FindAllBorderLoops, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00837160, void, RemoveDuplicateEdges, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00837330, List_1_CageStructureTool_Edge_ *, FindBorderEdges, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x008375C0, bool, DoesEdgeBelongToFace, (CageStructureTool * __this, CageStructureTool_Edge * edge, CageStructureTool_Face * face));
IL2CPP_REGISTER_METHOD(0x002FA000, void, MarkDirty, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x008378C0, bool, DoStrip, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00837CF0, void, OnBeforeStrip, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00837EB0, Bounds, get_Bounds, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00837FF0, void, RefreshBounds, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x00838240, Bounds, CalculateBoundsFromFaces, (CageStructureTool * __this, List_1_CageStructureTool_Face_ * faces));
IL2CPP_REGISTER_METHOD(0x008383B0, Bounds, CalculateBoundsFromFace, (CageStructureTool * __this, CageStructureTool_Face * face));
IL2CPP_REGISTER_METHOD(0x008389C0, int32_t, GetHashForVerticeList, (List_1_System_Int32_ * verts));
IL2CPP_REGISTER_METHOD(0x00838B90, void, __ctor, (CageStructureTool * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02654810, int32_t, GetSequenceHashCode, (IList_1_System_Object_ * sequence));
IL2CPP_REGISTER_METHOD(0x02654810, int32_t, GetSequenceHashCode, (IList_1_System_Int32_ * sequence));
IL2CPP_REGISTER_METHODINFO(0x047459D0, CageStructureTool_GetSequenceHashCode_1__MethodInfo);
}
