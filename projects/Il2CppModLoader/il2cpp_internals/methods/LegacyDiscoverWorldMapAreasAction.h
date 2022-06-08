#include <interception_macros.h>

namespace app::methods::LegacyDiscoverWorldMapAreasAction {
IL2CPP_REGISTER_METHOD(0x00A18BA0, void, Perform, (LegacyDiscoverWorldMapAreasAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00A18D00, IEnumerator *, ShowWorldMap, (LegacyDiscoverWorldMapAreasAction * __this));
IL2CPP_REGISTER_METHOD(0x00A18E50, IEnumerator *, ReleaseTexture, (LegacyDiscoverWorldMapAreasAction * __this, AreaMapCanvas * canvas));
IL2CPP_REGISTER_METHOD(0x00A18FA0, void, __ctor, (LegacyDiscoverWorldMapAreasAction * __this));
}
