#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::TerrainOffset {
IL2CPP_REGISTER_METHOD(0x02046BD0, void, LateUpdate, (TerrainOffset * __this));
IL2CPP_REGISTER_METHOD(0x020471C0, Vector3, GetGroundHeightOffset, (TerrainOffset * __this, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x020475F0, void, __ctor, (TerrainOffset * __this));
}
