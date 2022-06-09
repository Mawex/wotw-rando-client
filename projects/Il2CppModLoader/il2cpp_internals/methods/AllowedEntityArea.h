#include <interception_macros.h>

namespace app::methods::AllowedEntityArea {
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Forgotten, (app::AllowedEntityArea * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Forgotten, (app::AllowedEntityArea * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x002FA280, List_1_UnityEngine_Rect_ *, get_BoundRects, (app::AllowedEntityArea * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_BoundRects, (app::AllowedEntityArea * this_ptr, app::List_1_UnityEngine_Rect_ * value));
IL2CPP_REGISTER_METHOD(0x004F4D00, Rect, CalculateOverlapMasterRect, (app::AllowedEntityArea * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F4F90, Vector2, GetRandomPositionInside, (app::AllowedEntityArea * this_ptr, app::Vector3 current_position, float border));
IL2CPP_REGISTER_METHOD(0x004F5130, bool, IsPositionInside, (app::AllowedEntityArea * this_ptr, app::Vector3 position));
IL2CPP_REGISTER_METHOD(0x004F5250, Vector3, get_Center, (app::AllowedEntityArea * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F5350, bool, IsPositionInsideOrNoBounds, (app::AllowedEntityArea * this_ptr, app::Vector3 position));
IL2CPP_REGISTER_METHOD(0x004F53B0, bool, NoBounds, (app::AllowedEntityArea * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F5450, Vector3, RightGroundPointPoint, (app::AllowedEntityArea * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F55A0, Vector3, LeftGroundPointPoint, (app::AllowedEntityArea * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F56F0, Vector3, ClampPointToRect, (app::AllowedEntityArea * this_ptr, app::Vector3 point, app::Rect rect, bool only_on_x, float border));
IL2CPP_REGISTER_METHOD(0x004F5880, Vector3, ClampPointToArea, (app::AllowedEntityArea * this_ptr, app::Vector3 point, bool only_on_x, float border));
IL2CPP_REGISTER_METHOD(0x004F5D70, void, __ctor, (app::AllowedEntityArea * this_ptr));
}
