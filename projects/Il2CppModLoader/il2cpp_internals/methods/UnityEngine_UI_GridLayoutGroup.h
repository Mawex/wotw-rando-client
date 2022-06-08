using namespace app;

namespace app::methods::UnityEngine::UI::GridLayoutGroup {
IL2CPP_REGISTER_METHOD(0x024B4F90, void, __ctor, (GridLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5080, GridLayoutGroup_Corner__Enum, get_startCorner, (GridLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5090, void, set_startCorner, (GridLayoutGroup * __this, GridLayoutGroup_Corner__Enum value));
IL2CPP_REGISTER_METHOD(0x024B5130, GridLayoutGroup_Axis__Enum, get_startAxis, (GridLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5140, void, set_startAxis, (GridLayoutGroup * __this, GridLayoutGroup_Axis__Enum value));
IL2CPP_REGISTER_METHOD(0x024B51E0, Vector2, get_cellSize, (GridLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5200, void, set_cellSize, (GridLayoutGroup * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x024B5290, Vector2, get_spacing, (GridLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B52B0, void, set_spacing, (GridLayoutGroup * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x024B5350, GridLayoutGroup_Constraint__Enum, get_constraint, (GridLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5360, void, set_constraint, (GridLayoutGroup * __this, GridLayoutGroup_Constraint__Enum value));
IL2CPP_REGISTER_METHOD(0x024B5400, int32_t, get_constraintCount, (GridLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5410, void, set_constraintCount, (GridLayoutGroup * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x024B5530, void, CalculateLayoutInputHorizontal, (GridLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5810, void, CalculateLayoutInputVertical, (GridLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5B30, void, SetLayoutHorizontal, (GridLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5B40, void, SetLayoutVertical, (GridLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B5B50, void, SetCellsAlongAxis, (GridLayoutGroup * __this, int32_t axis));
}
