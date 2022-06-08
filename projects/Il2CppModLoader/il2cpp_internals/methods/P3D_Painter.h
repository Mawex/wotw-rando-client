#include <interception_macros.h>

namespace app::methods::P3D_Painter {
IL2CPP_REGISTER_METHOD(0x030961C0, P3D_Painter *, get_TempInstance, ());
IL2CPP_REGISTER_METHOD(0x030963C0, bool, get_IsReady, (P3D_Painter * __this));
IL2CPP_REGISTER_METHOD(0x030964A0, void, SetCanvas, (P3D_Painter * __this, RenderTexture * newTexture, Vector2 newTiling, Vector2 newOffset));
IL2CPP_REGISTER_METHOD(0x030964E0, bool, Paint, (P3D_Painter * __this, P3D_Brush * brush, List_1_P3D_Result_ * results, P3D_CoordType__Enum coord));
IL2CPP_REGISTER_METHOD(0x030965F0, bool, Paint, (P3D_Painter * __this, P3D_Brush * brush, P3D_Result * result, P3D_CoordType__Enum coord));
IL2CPP_REGISTER_METHOD(0x03096640, bool, Paint, (P3D_Painter * __this, P3D_Brush * brush, Vector2 uv));
IL2CPP_REGISTER_METHOD(0x030968D0, bool, Paint, (P3D_Painter * __this, P3D_Brush * brush, float x, float y));
IL2CPP_REGISTER_METHOD(0x03096AD0, bool, Paint, (P3D_Painter * __this, P3D_Brush * brush, P3D_Matrix matrix));
IL2CPP_REGISTER_METHOD(0x03096BE0, void, Apply, (P3D_Painter * __this));
IL2CPP_REGISTER_METHOD(0x03096CA0, void, __ctor, (P3D_Painter * __this));
}
