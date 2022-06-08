using namespace app;

namespace app::methods::AllowedEntityArea {
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Forgotten, (AllowedEntityArea * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Forgotten, (AllowedEntityArea * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA280, List_1_UnityEngine_Rect_ *, get_BoundRects, (AllowedEntityArea * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_BoundRects, (AllowedEntityArea * __this, List_1_UnityEngine_Rect_ * value));
IL2CPP_REGISTER_METHOD(0x004F4D00, Rect, CalculateOverlapMasterRect, (AllowedEntityArea * __this));
IL2CPP_REGISTER_METHOD(0x004F4F90, Vector2, GetRandomPositionInside, (AllowedEntityArea * __this, Vector3 currentPosition, float border));
IL2CPP_REGISTER_METHOD(0x004F5130, bool, IsPositionInside, (AllowedEntityArea * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x004F5250, Vector3, get_Center, (AllowedEntityArea * __this));
IL2CPP_REGISTER_METHOD(0x004F5350, bool, IsPositionInsideOrNoBounds, (AllowedEntityArea * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x004F53B0, bool, NoBounds, (AllowedEntityArea * __this));
IL2CPP_REGISTER_METHOD(0x004F5450, Vector3, RightGroundPointPoint, (AllowedEntityArea * __this));
IL2CPP_REGISTER_METHOD(0x004F55A0, Vector3, LeftGroundPointPoint, (AllowedEntityArea * __this));
IL2CPP_REGISTER_METHOD(0x004F56F0, Vector3, ClampPointToRect, (AllowedEntityArea * __this, Vector3 point, Rect rect, bool onlyOnX, float border));
IL2CPP_REGISTER_METHOD(0x004F5880, Vector3, ClampPointToArea, (AllowedEntityArea * __this, Vector3 point, bool onlyOnX, float border));
IL2CPP_REGISTER_METHOD(0x004F5D70, void, __ctor, (AllowedEntityArea * __this));
}
