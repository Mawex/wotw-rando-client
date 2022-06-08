#include <interception_macros.h>

namespace app::methods::UberInteractionManagerAccelerator {
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_CellSize, (UberInteractionManagerAccelerator * __this));
IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_InvCellSize, (UberInteractionManagerAccelerator * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, UberInteractionManagerAccelerator_Cell__Array *, get_Cells, (UberInteractionManagerAccelerator * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, UberInteractionManagerAccelerator_CellInteractionData__Array *, get_DynamicObjects, (UberInteractionManagerAccelerator * __this));
IL2CPP_REGISTER_METHOD(0x00FCB540, void, __ctor, (UberInteractionManagerAccelerator * __this, float cellSize, int32_t splitCount));
IL2CPP_REGISTER_METHOD(0x00FCB870, Vector3Int, GetCellCoordinates, (UberInteractionManagerAccelerator * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00FCB8C0, UberInteractionManagerAccelerator_Cell *, GetCell, (UberInteractionManagerAccelerator * __this, int32_t x, int32_t y, int32_t z));
IL2CPP_REGISTER_METHOD(0x00FCB930, void, Clear, (UberInteractionManagerAccelerator * __this));
}
