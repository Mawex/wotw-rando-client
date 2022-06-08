#include <interception_macros.h>

namespace app::methods::DigZone {
IL2CPP_REGISTER_METHOD(0x00B92F40, Collider *, get_CageCollider, (DigZone * __this));
IL2CPP_REGISTER_METHOD(0x00B93010, CageStructureTool *, get_CageStructure, (DigZone * __this));
IL2CPP_REGISTER_METHOD(0x00B930B0, bool, get_ContainsEntranceConstraint, (DigZone * __this));
IL2CPP_REGISTER_METHOD(0x00B930C0, void, Awake, (DigZone * __this));
IL2CPP_REGISTER_METHOD(0x00B932F0, void, OnDestroy, (DigZone * __this));
IL2CPP_REGISTER_METHOD(0x00911620, void, OnDigStartedInZone, (DigZone * __this));
IL2CPP_REGISTER_METHOD(0x00B933B0, bool, IsPointInside, (DigZone * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00B93400, bool, IsCircleOverlapping, (DigZone * __this, Vector3 center, float radius));
IL2CPP_REGISTER_METHOD(0x00910BD0, NavigationType__Enum, AreaType, (DigZone * __this));
IL2CPP_REGISTER_METHOD(0x00B93460, bool, ContainsPoint, (DigZone * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x00B935C0, float, GetDistanceToNearestPoint, (DigZone * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00B93870, Vector2, GetVelocityAtPoint, (DigZone * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x00B93900, void, __ctor, (DigZone * __this));
}
