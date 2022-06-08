#include <interception_macros.h>

namespace app::methods::UberWaterReflectionView {
IL2CPP_REGISTER_METHOD(0x012A1690, UberWaterReflectionView_AutomaticGroup *, FindAutomaticGroup, (UberWaterReflectionView * __this, UberWaterReflectionPlane * plane, bool isGameView));
IL2CPP_REGISTER_METHOD(0x012A1C20, void, ClearVisibleAutomaticGroups, (UberWaterReflectionView * __this));
IL2CPP_REGISTER_METHOD(0x012A1CD0, void, AddToVisibleList, (UberWaterReflectionView * __this, UberWaterReflectionPlane * plane));
IL2CPP_REGISTER_METHOD(0x012A2080, void, OnPostCull, (UberWaterReflectionView * __this));
IL2CPP_REGISTER_METHOD(0x012A23E0, void, ListRenderedGroups, (UberWaterReflectionView * __this, float time));
IL2CPP_REGISTER_METHOD(0x012A2540, void, ListRenderedGroupsInternal, (UberWaterReflectionView * __this, float time));
IL2CPP_REGISTER_METHODINFO(0x04782800, UberWaterReflectionView_ListRenderedGroupsInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012A34D0, void, RecycleStaleTextures, (UberWaterReflectionView * __this, float time));
IL2CPP_REGISTER_METHOD(0x012A3790, void, DestroySurplusTextures, (UberWaterReflectionView * __this, float time));
IL2CPP_REGISTER_METHOD(0x012A38A0, void, AcquireTextures, (UberWaterReflectionView * __this, float time));
IL2CPP_REGISTER_METHOD(0x012A3B40, void, AcquireTexture, (UberWaterReflectionView * __this, UberWaterReflectionView_Group * group));
IL2CPP_REGISTER_METHOD(0x012A3F40, void, Prepare, (UberWaterReflectionView * __this, UberWaterReflectionView_ViewCamInfo * viewInfo, UberWaterReflectionPlane * plane));
IL2CPP_REGISTER_METHOD(0x012A4860, void, PrepareAll, (UberWaterReflectionView * __this));
IL2CPP_REGISTER_METHOD(0x012A4AA0, void, Render, (UberWaterReflectionView * __this, float currentDRSScale, float currentDRSScaleY));
IL2CPP_REGISTER_METHOD(0x012A5140, void, InitResources, ());
IL2CPP_REGISTER_METHOD(0x012A51E0, void, InitCamera, ());
IL2CPP_REGISTER_METHOD(0x012A5420, void, SetupCameraLight, (UberWaterReflectionView * __this));
IL2CPP_REGISTER_METHOD(0x012A5870, void, SetupCamera, (UberWaterReflectionView * __this));
IL2CPP_REGISTER_METHOD(0x012A5FA0, void, Render, (UberWaterReflectionView * __this, UberWaterReflectionView_ViewCamInfo * viewInfo, UberWaterReflectionPlane * plane, RenderTexture * texture, float currentDRSScale, float currentDRSScaleY));
IL2CPP_REGISTER_METHOD(0x012A6ED0, void, InitBlur, ());
IL2CPP_REGISTER_METHOD(0x012A7100, void, Blur, (UberWaterReflectionView * __this, MoonRenderContext * ctx, RenderTexture * texture, float blurSize, Rect viewport));
IL2CPP_REGISTER_METHOD(0x012A7740, void, CleanupBlur, (UberWaterReflectionView * __this, MoonRenderContext * ctx));
IL2CPP_REGISTER_METHOD(0x012A7860, void, LogEvent, (UberWaterReflectionView * __this, String * message, UberWaterReflectionView_Group * context));
IL2CPP_REGISTER_METHOD(0x012A7950, void, LogEvent, (UberWaterReflectionView * __this, String * message, Component_1 * context));
IL2CPP_REGISTER_METHOD(0x012A7860, void, Log, (UberWaterReflectionView * __this, String * message, UberWaterReflectionView_Group * context));
IL2CPP_REGISTER_METHOD(0x012A7960, void, Log, (UberWaterReflectionView * __this, String * message, Component_1 * context));
IL2CPP_REGISTER_METHOD(0x00DBCEE0, float, Sgn, (float a));
IL2CPP_REGISTER_METHOD(0x012A7AC0, Vector4, CameraSpacePlane, (Matrix4x4 viewMatrix, Vector3 pos, Vector3 normal, float sideSign));
IL2CPP_REGISTER_METHOD(0x012A7ED0, void, CalculateObliqueMatrix, (Matrix4x4 * projection, Vector4 clipPlane));
IL2CPP_REGISTER_METHOD(0x012A8490, Matrix4x4, CalculateReflectionMatrix, (Vector4 plane));
IL2CPP_REGISTER_METHOD(0x012A8690, void, __ctor, (UberWaterReflectionView * __this));
IL2CPP_REGISTER_METHOD(0x012A8DC0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x012A8EE0, int32_t, _ListRenderedGroupsInternal_g__GetFrameDelta_21_0, (UberWaterReflectionView_Group * group, UberWaterReflectionView_c_DisplayClass21_0 * param_00016427));
IL2CPP_REGISTER_METHODINFO(0x04773EE0, UberWaterReflectionView__ListRenderedGroupsInternal_g__GetFrameDelta_21_0__MethodInfo);
}
