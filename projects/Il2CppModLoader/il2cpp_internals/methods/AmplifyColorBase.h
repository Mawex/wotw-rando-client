#include <interception_macros.h>

namespace app::methods::AmplifyColorBase {
IL2CPP_REGISTER_METHOD(0x030D48D0, Texture2D *, get_DefaultLut, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x00DB59E0, bool, get_IsBlending, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D49A0, float, get_effectVolumesBlendAdjusted, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D4AA0, String *, get_SharedInstanceID, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D4AB0, bool, get_WillItBlend, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D4BB0, void, NewSharedInstanceID, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D4CD0, void, ReportMissingShaders, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D4DB0, void, ReportNotSupported, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D4E90, bool, CheckShader, (AmplifyColorBase * __this, Shader * s));
IL2CPP_REGISTER_METHOD(0x030D5090, bool, CheckShaders, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D5130, bool, CheckSupport, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D51A0, void, OnEnable, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D5410, void, OnDisable, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D5530, void, VolumesBlendTo, (AmplifyColorBase * __this, Texture * blendTargetLUT, float blendTimeInSec));
IL2CPP_REGISTER_METHOD(0x030D5560, void, BlendTo, (AmplifyColorBase * __this, Texture * blendTargetLUT, float blendTimeInSec, Action * onFinishBlend));
IL2CPP_REGISTER_METHOD(0x030D5590, void, CheckCamera, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D5720, void, Start, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D57A0, void, Update, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D5DA0, void, EnterVolume, (AmplifyColorBase * __this, AmplifyColorVolumeBase * volume));
IL2CPP_REGISTER_METHOD(0x030D5E70, void, ExitVolume, (AmplifyColorBase * __this, AmplifyColorVolumeBase * volume));
IL2CPP_REGISTER_METHOD(0x030D5F40, void, UpdateVolumes, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D6B60, void, SetupShader, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D6EC0, void, ReleaseMaterials, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D6FE0, Texture2D *, CreateDefaultLut, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D7420, Texture2D *, CreateDepthCurveLut, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D77A0, void, UpdateDepthCurveLut, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D79C0, void, CheckUpdateDepthCurveLut, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D7DF0, void, CreateHelperTextures, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D8430, bool, CheckMaterialAndShader, (AmplifyColorBase * __this, Material * material, String * name));
IL2CPP_REGISTER_METHOD(0x030D8750, bool, CreateMaterials, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D9060, void, SetMaterialKeyword, (AmplifyColorBase * __this, int32_t keyword, bool state));
IL2CPP_REGISTER_METHOD(0x030D9330, void, ReleaseTextures, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D9440, bool, ValidateLutDimensions, (Texture * lut));
IL2CPP_REGISTER_METHOD(0x030D9610, void, UpdatePostEffectParams, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D96D0, int32_t, ComputeShaderPass, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x030D97A0, void, OnRenderImage, (AmplifyColorBase * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030DA7A0, void, __ctor, (AmplifyColorBase * __this));
IL2CPP_REGISTER_METHOD(0x01547990, void, SafeRelease, (AmplifyColorBase * __this, Object * * obj));
IL2CPP_REGISTER_METHOD(0x01547990, void, SafeRelease, (AmplifyColorBase * __this, Material * * obj));
IL2CPP_REGISTER_METHODINFO(0x047842B8, AmplifyColorBase_SafeRelease_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01547990, void, SafeRelease, (AmplifyColorBase * __this, Texture2D * * obj));
IL2CPP_REGISTER_METHODINFO(0x04758B20, AmplifyColorBase_SafeRelease_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01547990, void, SafeRelease, (AmplifyColorBase * __this, RenderTexture * * obj));
IL2CPP_REGISTER_METHODINFO(0x04760920, AmplifyColorBase_SafeRelease_3__MethodInfo);
}
