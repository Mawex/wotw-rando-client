using namespace app;

namespace app::methods::TargetBreadcrumbsTracker {
IL2CPP_REGISTER_METHOD(0x002FBBC0, Transform *, get_FollowedTarget, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_FollowedTarget, (TargetBreadcrumbsTracker * __this, Transform * value));
IL2CPP_REGISTER_METHOD(0x00CE0950, bool, get_IsFollowing, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x00B32900, float, get_ForcedRecordInterval, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x00CE09F0, void, set_ForcedRecordInterval, (TargetBreadcrumbsTracker * __this, float value));
IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_MinDistanceBetweenPointsSqr, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x00CE0A00, void, Awake, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x00CE0B70, void, SetForcedRecordInterval, (TargetBreadcrumbsTracker * __this, float interval));
IL2CPP_REGISTER_METHOD(0x00CE0C10, void, SetMinDistanceBetweenBreadcrumbs, (TargetBreadcrumbsTracker * __this, float distance));
IL2CPP_REGISTER_METHOD(0x00CE0C20, void, StartTracking, (TargetBreadcrumbsTracker * __this, Transform * followTarget));
IL2CPP_REGISTER_METHOD(0x00CE0D40, void, StartTracking, (TargetBreadcrumbsTracker * __this, Transform * followTarget, Vector3 firstTrackedPoint));
IL2CPP_REGISTER_METHOD(0x00CE0E10, void, StopTracking, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x00CE0E20, bool, GetNextTrackedPosition, (TargetBreadcrumbsTracker * __this, Vector3 * breadcrumbPosition));
IL2CPP_REGISTER_METHOD(0x00CE1050, bool, IterateToNextPoint, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, SetCheckClearanceFunction, (TargetBreadcrumbsTracker * __this, Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_ * clearanceBetweenPointsFunc));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, SetProcessAddedPointFunction, (TargetBreadcrumbsTracker * __this, Func_2_UnityEngine_Vector3_UnityEngine_Vector3_ * processAddedPointFunction));
IL2CPP_REGISTER_METHOD(0x00CE11D0, void, SetDefaultCheckClearanceFunction, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x00CE1330, void, SetDefaultProcessAddedPointFunction, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x00CE1490, void, UpdateTracking, (TargetBreadcrumbsTracker * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00CE16E0, void, TrimPath, (TargetBreadcrumbsTracker * __this, Vector3 currentFollowerPosition));
IL2CPP_REGISTER_METHOD(0x00CE1980, void, ClearTrackingData, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x00CE1A30, void, AddPoint, (TargetBreadcrumbsTracker * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00CE1B20, Vector3, NewestPoint, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x00CE1BE0, Vector3, OldestPoint, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x00CE1CA0, bool, DefaultClearanceBetweenPointsFunction, (TargetBreadcrumbsTracker * __this, Vector3 point1, Vector3 point2));
IL2CPP_REGISTER_METHODINFO(0x047545C8, TargetBreadcrumbsTracker_DefaultClearanceBetweenPointsFunction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, DefaultProcessAddedPointFunction, (TargetBreadcrumbsTracker * __this, Vector3 point));
IL2CPP_REGISTER_METHODINFO(0x0473CB28, TargetBreadcrumbsTracker_DefaultProcessAddedPointFunction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CE1DE0, void, OnDrawGizmos, (TargetBreadcrumbsTracker * __this));
IL2CPP_REGISTER_METHOD(0x00CE1FD0, void, __ctor, (TargetBreadcrumbsTracker * __this));
}
