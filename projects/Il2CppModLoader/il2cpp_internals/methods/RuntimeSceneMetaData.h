#include <interception_macros.h>

namespace app::methods::RuntimeSceneMetaData {
IL2CPP_REGISTER_METHOD(0x0137B160, void, __ctor, (RuntimeSceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x0137BD00, void, __ctor, (RuntimeSceneMetaData * __this, SceneMetaData * sceneMetaData));
IL2CPP_REGISTER_METHOD(0x0137C570, Dictionary_2_MoonGuid_NearbySceneData_ *, get_NearbyReachableScenes, (RuntimeSceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x0137C6F0, Rect, get_SceneBounds, (RuntimeSceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x0137C970, Rect, get_TotalBounds, (RuntimeSceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x0137C9B0, float, get_PaddingWidthExtension, ());
IL2CPP_REGISTER_METHOD(0x0137CA40, Rect, Encapsulate, (RuntimeSceneMetaData * __this, Rect original, Rect add));
IL2CPP_REGISTER_METHOD(0x0137CBA0, void, DoTotal, (RuntimeSceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x0137D1B0, bool, IsInTotal, (RuntimeSceneMetaData * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0137D230, bool, IsInTotal, (RuntimeSceneMetaData * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x0137C970, Rect, GetRect, (RuntimeSceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x0137D2C0, Rect, ApplyWidthExtension, (RuntimeSceneMetaData * __this, Rect rect, float r));
IL2CPP_REGISTER_METHOD(0x0137D380, Rect, PositionToRect, (RuntimeSceneMetaData * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x0137D3B0, bool, IsInsideSceneLoadingZone, (RuntimeSceneMetaData * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x0137D3F0, bool, IsInsideScenePaddingBounds, (RuntimeSceneMetaData * __this, Vector3 position, Rect currentSceneBounds));
IL2CPP_REGISTER_METHOD(0x0137D500, void, InitializedIsInsideCaches, (RuntimeSceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x0137D5E0, void, ClearIsInsideCaches, (RuntimeSceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x0137D620, bool, IsInsideScenePaddingBounds, (RuntimeSceneMetaData * __this, Vector3 position, RuntimeSceneMetaData_PositionTypes__Enum type));
IL2CPP_REGISTER_METHOD(0x0137D8A0, bool, IsInsideSceneBounds, (RuntimeSceneMetaData * __this, Vector3 position, RuntimeSceneMetaData_PositionTypes__Enum type));
IL2CPP_REGISTER_METHOD(0x0137DB20, bool, IsInsideScenePaddingBounds, (RuntimeSceneMetaData * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0137DC00, bool, IsInsideSceneBounds, (RuntimeSceneMetaData * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0137DCE0, bool, IsInsideScenePaddingBoundsExpanded, (RuntimeSceneMetaData * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x0137DD80, bool, IsInsideSceneBounds, (RuntimeSceneMetaData * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x0137DEE0, bool, IsInsideSceneLoadingZone, (RuntimeSceneMetaData * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x0137E040, bool, IsInsideScenePaddingBounds, (RuntimeSceneMetaData * __this, Rect rect, Rect currentSceneBounds));
IL2CPP_REGISTER_METHOD(0x0137E330, bool, IsInsideScenePaddingBounds, (RuntimeSceneMetaData * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x0137E490, float, DistanceToBounds, (RuntimeSceneMetaData * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x0137E650, float, DistanceToPaddingBounds, (RuntimeSceneMetaData * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x0137E810, Rect, ClosestBounds, (RuntimeSceneMetaData * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x0137EB60, void, ClosestBoundsTwoPoints, (RuntimeSceneMetaData * __this, Vector3 point1, Vector3 point2, Rect * result1, Rect * result2, float * dist1, float * dist2));
IL2CPP_REGISTER_METHOD(0x0137F300, bool, get_CanBeLoaded, (RuntimeSceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x0137F3E0, bool, Equals, (RuntimeSceneMetaData * __this, RuntimeSceneMetaData * other));
IL2CPP_REGISTER_METHOD(0x0137F4D0, bool, IEquatable_RuntimeSceneMetaData__Equals, (RuntimeSceneMetaData * __this, RuntimeSceneMetaData * other));
IL2CPP_REGISTER_METHOD(0x0137F4E0, bool, Equals, (RuntimeSceneMetaData * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0137F5E0, int32_t, GetHashCode, (RuntimeSceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x0137F6C0, bool, Equals, (RuntimeSceneMetaData * __this, RuntimeSceneMetaData * x, RuntimeSceneMetaData * y));
IL2CPP_REGISTER_METHOD(0x0137F7E0, int32_t, GetHashCode, (RuntimeSceneMetaData * __this, RuntimeSceneMetaData * obj));
IL2CPP_REGISTER_METHOD(0x0137F8C0, bool, operator___, (RuntimeSceneMetaData * a, RuntimeSceneMetaData * b));
IL2CPP_REGISTER_METHOD(0x0137F9C0, bool, operator___, (RuntimeSceneMetaData * a, RuntimeSceneMetaData * b));
}
