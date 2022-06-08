#include <interception_macros.h>

namespace app::methods::P3D_Brush {
IL2CPP_REGISTER_METHOD(0x03087690, P3D_Brush *, get_TempInstance, ());
IL2CPP_REGISTER_METHOD(0x030878A0, Object *, get_ExtraData, (P3D_Brush * __this));
IL2CPP_REGISTER_METHOD(0x03087920, void, set_ExtraData, (P3D_Brush * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x030879B0, P3D_Brush *, GetTempClone, (P3D_Brush * __this));
IL2CPP_REGISTER_METHOD(0x03087B70, void, CopyTo, (P3D_Brush * __this, P3D_Brush * other));
IL2CPP_REGISTER_METHOD(0x03087CA0, void, Paint, (P3D_Brush * __this, RenderTexture * newCanvas, P3D_Matrix newMatrix));
IL2CPP_REGISTER_METHOD(0x030881A0, bool, CalculateRect, (P3D_Brush * __this, P3D_Rect * rect));
IL2CPP_REGISTER_METHOD(0x030884B0, bool, IsInsideShape, (P3D_Matrix inverseMatrix, int32_t x, int32_t y, Vector2 * shapeCoord));
IL2CPP_REGISTER_METHOD(0x03088530, Color, SampleRepeat, (Texture2D * texture, float u, float v));
IL2CPP_REGISTER_METHOD(0x030885C0, void, DrawRect, (Material * material));
IL2CPP_REGISTER_METHOD(0x03088920, void, __ctor, (P3D_Brush * __this));
}
