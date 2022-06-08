using namespace app;

namespace app::methods::TriangleNet::IO::TriangleReader {
IL2CPP_REGISTER_METHOD(0x02622160, bool, TryReadLine, (TriangleReader * __this, StreamReader * reader, String__Array * * token));
IL2CPP_REGISTER_METHOD(0x02622430, void, ReadVertex, (TriangleReader * __this, List_1_TriangleNet_Geometry_Vertex_ * data, int32_t index, String__Array * line, int32_t attributes, int32_t marks));
IL2CPP_REGISTER_METHOD(0x026226F0, void, Read, (TriangleReader * __this, String * filename, Polygon * * polygon));
IL2CPP_REGISTER_METHOD(0x02622830, void, Read, (TriangleReader * __this, String * filename, Polygon * * geometry, List_1_TriangleNet_Geometry_ITriangle_ * * triangles));
IL2CPP_REGISTER_METHOD(0x02622940, IPolygon *, Read, (TriangleReader * __this, String * filename));
IL2CPP_REGISTER_METHOD(0x02622970, Polygon *, ReadNodeFile, (TriangleReader * __this, String * nodefilename));
IL2CPP_REGISTER_METHOD(0x02622980, Polygon *, ReadNodeFile, (TriangleReader * __this, String * nodefilename, bool readElements));
IL2CPP_REGISTER_METHODINFO(0x04792498, TriangleReader_ReadNodeFile_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02622FE0, Polygon *, ReadPolyFile, (TriangleReader * __this, String * polyfilename));
IL2CPP_REGISTER_METHOD(0x02623000, Polygon *, ReadPolyFile, (TriangleReader * __this, String * polyfilename, bool readElements));
IL2CPP_REGISTER_METHOD(0x02623020, Polygon *, ReadPolyFile, (TriangleReader * __this, String * polyfilename, bool readElements, bool readArea));
IL2CPP_REGISTER_METHODINFO(0x047544F0, TriangleReader_ReadPolyFile_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02624310, List_1_TriangleNet_Geometry_ITriangle_ *, ReadEleFile, (TriangleReader * __this, String * elefilename));
IL2CPP_REGISTER_METHOD(0x02624320, List_1_TriangleNet_Geometry_ITriangle_ *, ReadEleFile, (TriangleReader * __this, String * elefilename, bool readArea));
IL2CPP_REGISTER_METHODINFO(0x0476F078, TriangleReader_ReadEleFile_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02624AA0, Double__Array *, ReadAreaFile, (TriangleReader * __this, String * areafilename, int32_t intriangles));
IL2CPP_REGISTER_METHODINFO(0x04762AF8, TriangleReader_ReadAreaFile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02624F30, List_1_TriangleNet_Geometry_Edge_ *, ReadEdgeFile, (TriangleReader * __this, String * edgeFile, int32_t invertices));
IL2CPP_REGISTER_METHODINFO(0x04770D90, TriangleReader_ReadEdgeFile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02625690, bool, IsStringNullOrWhiteSpace, (TriangleReader * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TriangleReader * __this));
IL2CPP_REGISTER_METHOD(0x02625770, void, __cctor, (MethodInfo * method));
}
