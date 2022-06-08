using namespace app;

namespace app::methods::MoonMath_Rectangle {
IL2CPP_REGISTER_METHOD(0x025796D0, bool, GetIntersection, (Rect rect, Vector2 p1, Vector2 p2, Vector2 * intersection));
IL2CPP_REGISTER_METHOD(0x02579840, Rect, Absolute, (Rect rect));
IL2CPP_REGISTER_METHOD(0x02579960, Rect, IncapsulatePoint, (Rect rect, Vector2 point, float r));
IL2CPP_REGISTER_METHOD(0x02579A20, Vector2, ShortestPathFromPointToRectangle, (Vector2 point, Rect rect));
IL2CPP_REGISTER_METHOD(0x02579BF0, float, DistanceFromPointToRectangle, (Vector2 point, Rect rect));
IL2CPP_REGISTER_METHOD(0x02579D90, float, DistanceSquaredFromPointToRectangle, (Vector2 point, Rect rect, bool * shouldSqrt));
}
