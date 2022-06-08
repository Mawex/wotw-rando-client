#include <interception_macros.h>

namespace app::methods::LineOfSight {
IL2CPP_REGISTER_METHOD(0x00FA7080, bool, IsRayOccluded, (Vector3 origin, Vector3 dir, RaycastHit * hit, float dist, LayerMask mask, QueryTriggerInteraction__Enum trigger));
IL2CPP_REGISTER_METHOD(0x00FA71E0, bool, IsRayOccluded, (Vector3 origin, Vector3 dir, float dist, LayerMask mask, QueryTriggerInteraction__Enum trigger));
IL2CPP_REGISTER_METHOD(0x00FA7340, bool, IsRayOccluded, (Ray ray, float dist, LayerMask mask, QueryTriggerInteraction__Enum trigger));
IL2CPP_REGISTER_METHOD(0x00FA7390, bool, IsLineOccluded, (Vector3 from, Vector3 to, LayerMask mask));
IL2CPP_REGISTER_METHOD(0x00FA7440, bool, IsLineOccluded, (Vector3 from, Vector3 to, RaycastHit * hit, LayerMask mask));
}
