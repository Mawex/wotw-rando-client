using namespace app;

namespace app::methods::TriangleNet::NewLocation {
IL2CPP_REGISTER_METHOD(0x02B16840, void, __ctor, (NewLocation * __this, Mesh_1 * mesh, IPredicates * predicates));
IL2CPP_REGISTER_METHOD(0x02B169D0, Point *, FindLocation, (NewLocation * __this, Vertex * org, Vertex * dest, Vertex * apex, double * xi, double * eta, bool offcenter, Otri badotri));
IL2CPP_REGISTER_METHOD(0x02B16A90, Point *, FindNewLocationWithoutMaxAngle, (NewLocation * __this, Vertex * torg, Vertex * tdest, Vertex * tapex, double * xi, double * eta, bool offcenter, Otri badotri));
IL2CPP_REGISTER_METHOD(0x02B18EB0, Point *, FindNewLocation, (NewLocation * __this, Vertex * torg, Vertex * tdest, Vertex * tapex, double * xi, double * eta, bool offcenter, Otri badotri));
IL2CPP_REGISTER_METHOD(0x02B1DB90, int32_t, LongestShortestEdge, (NewLocation * __this, double aodist, double dadist, double dodist));
IL2CPP_REGISTER_METHOD(0x02B1DBE0, int32_t, DoSmoothing, (NewLocation * __this, Otri badotri, Vertex * torg, Vertex * tdest, Vertex * tapex, Double__Array * * newloc));
IL2CPP_REGISTER_METHOD(0x02B1E3F0, int32_t, GetStarPoints, (NewLocation * __this, Otri badotri, Vertex * p, Vertex * q, Vertex * r, int32_t whichPoint, Double__Array * * points));
IL2CPP_REGISTER_METHOD(0x02B1E970, bool, GetNeighborsVertex, (NewLocation * __this, Otri badotri, double first_x, double first_y, double second_x, double second_y, Double__Array * * thirdpoint, Otri * neighotri));
IL2CPP_REGISTER_METHOD(0x02B1F2D0, bool, GetWedgeIntersectionWithoutMaxAngle, (NewLocation * __this, int32_t numpoints, Double__Array * points, Double__Array * * newloc));
IL2CPP_REGISTER_METHOD(0x02B20A60, bool, GetWedgeIntersection, (NewLocation * __this, int32_t numpoints, Double__Array * points, Double__Array * * newloc));
IL2CPP_REGISTER_METHOD(0x02B24290, bool, ValidPolygonAngles, (NewLocation * __this, int32_t numpoints, Double__Array * points));
IL2CPP_REGISTER_METHOD(0x02B245E0, bool, IsBadPolygonAngle, (NewLocation * __this, double x1, double y1, double x2, double y2, double x3, double y3));
IL2CPP_REGISTER_METHOD(0x02B247A0, void, LineLineIntersection, (NewLocation * __this, double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, Double__Array * * p));
IL2CPP_REGISTER_METHOD(0x02B24B20, int32_t, HalfPlaneIntersection, (NewLocation * __this, int32_t numvertices, Double__Array * * convexPoly, double x1, double y1, double x2, double y2));
IL2CPP_REGISTER_METHOD(0x02B24FB0, int32_t, SplitConvexPolygon, (NewLocation * __this, int32_t numvertices, Double__Array * convexPoly, double x1, double y1, double x2, double y2, Double__Array__Array * polys));
IL2CPP_REGISTER_METHOD(0x02B26140, int32_t, LinePointLocation, (NewLocation * __this, double x1, double y1, double x2, double y2, double x, double y));
IL2CPP_REGISTER_METHOD(0x02B26390, void, LineLineSegmentIntersection, (NewLocation * __this, double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, Double__Array * * p));
IL2CPP_REGISTER_METHOD(0x02B26740, void, FindPolyCentroid, (NewLocation * __this, int32_t numpoints, Double__Array * points, Double__Array * * centroid));
IL2CPP_REGISTER_METHOD(0x02B26950, void, CircleLineIntersection, (NewLocation * __this, double x1, double y1, double x2, double y2, double x3, double y3, double r, Double__Array * * p));
IL2CPP_REGISTER_METHOD(0x02B26E60, bool, ChooseCorrectPoint, (NewLocation * __this, double x1, double y1, double x2, double y2, double x3, double y3, bool isObtuse));
IL2CPP_REGISTER_METHOD(0x02B26EB0, void, PointBetweenPoints, (NewLocation * __this, double x1, double y1, double x2, double y2, double x, double y, Double__Array * * p));
IL2CPP_REGISTER_METHOD(0x02B27100, bool, IsBadTriangleAngle, (NewLocation * __this, double x1, double y1, double x2, double y2, double x3, double y3));
IL2CPP_REGISTER_METHOD(0x02B273A0, double, MinDistanceToNeighbor, (NewLocation * __this, double newlocX, double newlocY, Otri * searchtri));
}
