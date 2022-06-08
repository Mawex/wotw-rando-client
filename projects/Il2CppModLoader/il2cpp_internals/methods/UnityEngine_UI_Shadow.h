#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::Shadow {
IL2CPP_REGISTER_METHOD(0x02662FD0, void, __ctor, (Shadow * __this));
IL2CPP_REGISTER_METHOD(0x024AE370, Color, get_effectColor, (Shadow * __this));
IL2CPP_REGISTER_METHOD(0x02674F80, void, set_effectColor, (Shadow * __this, Color value));
IL2CPP_REGISTER_METHOD(0x02675070, Vector2, get_effectDistance, (Shadow * __this));
IL2CPP_REGISTER_METHOD(0x02675090, void, set_effectDistance, (Shadow * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x02675240, bool, get_useGraphicAlpha, (Shadow * __this));
IL2CPP_REGISTER_METHOD(0x02675250, void, set_useGraphicAlpha, (Shadow * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02675340, void, ApplyShadowZeroAlloc, (Shadow * __this, List_1_UnityEngine_UIVertex_ * verts, Color32 color, int32_t start, int32_t end, float x, float y));
IL2CPP_REGISTER_METHOD(0x02675800, void, ApplyShadow, (Shadow * __this, List_1_UnityEngine_UIVertex_ * verts, Color32 color, int32_t start, int32_t end, float x, float y));
IL2CPP_REGISTER_METHOD(0x02675810, void, ModifyMesh, (Shadow * __this, VertexHelper * vh));
}
