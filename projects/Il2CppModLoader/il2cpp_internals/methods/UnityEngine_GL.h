#include <interception_macros.h>

namespace app::methods::UnityEngine::GL {
IL2CPP_REGISTER_METHOD(0x02526170, void, Vertex3, (float x, float y, float z));
IL2CPP_REGISTER_METHOD(0x025261F0, void, Vertex, (Vector3 v));
IL2CPP_REGISTER_METHOD(0x02526210, void, TexCoord3, (float x, float y, float z));
IL2CPP_REGISTER_METHOD(0x02526290, void, TexCoord2, (float x, float y));
IL2CPP_REGISTER_METHOD(0x02526300, void, MultiTexCoord3, (int32_t unit, float x, float y, float z));
IL2CPP_REGISTER_METHOD(0x02526390, void, MultiTexCoord2, (int32_t unit, float x, float y));
IL2CPP_REGISTER_METHOD(0x02526410, void, ImmediateColor, (float r, float g, float b, float a));
IL2CPP_REGISTER_METHOD(0x025264A0, void, Color, (Color c));
IL2CPP_REGISTER_METHOD(0x02526500, void, SetViewMatrix, (Matrix4x4 m));
IL2CPP_REGISTER_METHOD(0x02526550, void, set_modelview, (Matrix4x4 value));
IL2CPP_REGISTER_METHOD(0x025265C0, void, MultMatrix, (Matrix4x4 m));
IL2CPP_REGISTER_METHOD(0x02526610, void, IssuePluginEvent, (int32_t eventID));
IL2CPP_REGISTER_METHOD(0x02526660, void, SetRevertBackfacing, (bool revertBackFaces));
IL2CPP_REGISTER_METHOD(0x025266B0, void, PushMatrix, ());
IL2CPP_REGISTER_METHOD(0x02526700, void, PopMatrix, ());
IL2CPP_REGISTER_METHOD(0x02526750, void, LoadIdentity, ());
IL2CPP_REGISTER_METHOD(0x025267A0, void, LoadOrtho, ());
IL2CPP_REGISTER_METHOD(0x025267F0, void, LoadPixelMatrix, ());
IL2CPP_REGISTER_METHOD(0x02526840, void, LoadProjectionMatrix, (Matrix4x4 mat));
IL2CPP_REGISTER_METHOD(0x02526890, Matrix4x4, GetGPUProjectionMatrix, (Matrix4x4 proj, bool renderIntoTexture));
IL2CPP_REGISTER_METHOD(0x02526950, void, GLLoadPixelMatrixScript, (float left, float right, float bottom, float top));
IL2CPP_REGISTER_METHOD(0x02526950, void, LoadPixelMatrix, (float left, float right, float bottom, float top));
IL2CPP_REGISTER_METHOD(0x025269E0, void, Begin, (int32_t mode));
IL2CPP_REGISTER_METHOD(0x02526A30, void, End, ());
IL2CPP_REGISTER_METHOD(0x02526A80, void, GLClear, (bool clearDepth, bool clearColor, Color backgroundColor, float depth));
IL2CPP_REGISTER_METHOD(0x02526B10, void, Clear, (bool clearDepth, bool clearColor, Color backgroundColor));
IL2CPP_REGISTER_METHOD(0x02526B90, void, ClearWithSkybox, (bool clearDepth, Camera * camera));
IL2CPP_REGISTER_METHOD(0x02526BF0, void, SetViewMatrix_Injected, (Matrix4x4 * m));
IL2CPP_REGISTER_METHOD(0x02526C40, void, MultMatrix_Injected, (Matrix4x4 * m));
IL2CPP_REGISTER_METHOD(0x02526C90, void, LoadProjectionMatrix_Injected, (Matrix4x4 * mat));
IL2CPP_REGISTER_METHOD(0x02526CE0, void, GetGPUProjectionMatrix_Injected, (Matrix4x4 * proj, bool renderIntoTexture, Matrix4x4 * ret));
IL2CPP_REGISTER_METHOD(0x02526D50, void, GLClear_Injected, (bool clearDepth, bool clearColor, Color * backgroundColor, float depth));
}
