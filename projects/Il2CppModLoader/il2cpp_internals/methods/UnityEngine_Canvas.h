#include <interception_macros.h>

namespace app::methods::UnityEngine::Canvas {
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A5510, void, add_willRenderCanvases, (Canvas_WillRenderCanvases * value));
IL2CPP_REGISTER_METHOD(0x031A5610, void, remove_willRenderCanvases, (Canvas_WillRenderCanvases * value));
IL2CPP_REGISTER_METHOD(0x031A5710, RenderMode__Enum, get_renderMode, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A5760, bool, get_isRootCanvas, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A57B0, float, get_scaleFactor, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A5800, void, set_scaleFactor, (Canvas * __this, float value));
IL2CPP_REGISTER_METHOD(0x031A5860, float, get_referencePixelsPerUnit, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A58B0, void, set_referencePixelsPerUnit, (Canvas * __this, float value));
IL2CPP_REGISTER_METHOD(0x031A5910, bool, get_pixelPerfect, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A5960, int32_t, get_renderOrder, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A59B0, bool, get_overrideSorting, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A5A00, void, set_overrideSorting, (Canvas * __this, bool value));
IL2CPP_REGISTER_METHOD(0x031A5A60, int32_t, get_sortingOrder, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A5AB0, void, set_sortingOrder, (Canvas * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x031A5B10, int32_t, get_targetDisplay, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A5B60, int32_t, get_sortingLayerID, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A5BB0, void, set_sortingLayerID, (Canvas * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x031A5C10, Canvas *, get_rootCanvas, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A5C60, Camera *, get_worldCamera, (Canvas * __this));
IL2CPP_REGISTER_METHOD(0x031A5CB0, void, set_worldCamera, (Canvas * __this, Camera * value));
IL2CPP_REGISTER_METHOD(0x031A5D10, Material *, GetDefaultCanvasMaterial, ());
IL2CPP_REGISTER_METHOD(0x031A5D60, Material *, GetETC1SupportedCanvasMaterial, ());
IL2CPP_REGISTER_METHOD(0x031A5DB0, void, ForceUpdateCanvases, ());
IL2CPP_REGISTER_METHOD(0x031A5DB0, void, SendWillRenderCanvases, ());
}
