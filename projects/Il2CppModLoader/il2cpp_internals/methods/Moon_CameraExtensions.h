#include <interception_macros.h>

namespace app::methods::Moon::CameraExtensions {
IL2CPP_REGISTER_METHOD(0x00CC2400, Int2, pixelSize, (Camera * _this));
IL2CPP_REGISTER_METHOD(0x00CC24C0, int32_t, pixelCount, (Camera * _this));
IL2CPP_REGISTER_METHOD(0x00CC2570, bool, isGame, (Camera * _this));
IL2CPP_REGISTER_METHOD(0x00CC25E0, bool, isSceneView, (Camera * _this));
IL2CPP_REGISTER_METHOD(0x00CC2650, bool, isMain, (Camera * _this));
IL2CPP_REGISTER_METHOD(0x00CC2790, Matrix4x4, viewMatrix, (Camera * _this));
}
