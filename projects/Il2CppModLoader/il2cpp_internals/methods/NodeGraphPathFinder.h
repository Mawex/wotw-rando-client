#include <interception_macros.h>

namespace app::methods::NodeGraphPathFinder {
IL2CPP_REGISTER_METHOD(0x0060AA00, bool, GeneratePathUsingDijkstra, (NodeGraphPathFinder * __this, Segment_1 * startSegment, Vector3 startPosition, Segment_1 * goalSegment, Vector3 endPosition));
IL2CPP_REGISTER_METHOD(0x0060B5E0, float, Length, (NodeGraphPathFinder * __this, Link * start, Link * end));
IL2CPP_REGISTER_METHOD(0x0060B7E0, void, __ctor, (NodeGraphPathFinder * __this));
}
