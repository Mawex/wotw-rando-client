#include <interception_macros.h>

namespace app::methods::Moon::Rendering::InterleavedRenderingSettings {
IL2CPP_REGISTER_METHOD(0x0078D270, void, __ctor, (InterleavedRenderingSettings * __this));
IL2CPP_REGISTER_METHOD(0x0078D6F0, bool, SetFocusLayer, (InterleavedRenderingSettings * __this, int32_t focusLayerIndex, int32_t sceneSliceCount));
IL2CPP_REGISTER_METHOD(0x0078D820, bool, ShouldStoreSlice, (InterleavedRenderingSettings * __this, int32_t sliceIndex, int32_t * writeIdx));
IL2CPP_REGISTER_METHOD(0x0078D8C0, bool, ShouldReuseSlice, (InterleavedRenderingSettings * __this, int32_t sliceIndex, int32_t * readIdx));
IL2CPP_REGISTER_METHOD(0x0078D960, void, Advance, (InterleavedRenderingSettings * __this));
}
