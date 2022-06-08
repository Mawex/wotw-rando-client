#include <interception_macros.h>

namespace app::methods::LightCanvas_SubLayerSettings {
IL2CPP_REGISTER_METHOD(0x01145DA0, LightCanvas_SubLayerSettings *, get_ClipBoard, ());
IL2CPP_REGISTER_METHOD(0x01145E20, void, set_ClipBoard, (LightCanvas_SubLayerSettings * value));
IL2CPP_REGISTER_METHOD(0x01145FB0, bool, get_HasClipBoardValue, ());
IL2CPP_REGISTER_METHOD(0x01146030, void, CopyFrom, (LightCanvas_SubLayerSettings * __this, LightCanvas_SubLayerSettings * otherSublayerSettings));
IL2CPP_REGISTER_METHOD(0x01146410, bool, Equals, (LightCanvas_SubLayerSettings * __this, LightCanvas_SubLayerSettings * other));
IL2CPP_REGISTER_METHOD(0x011464E0, bool, Equals, (LightCanvas_SubLayerSettings * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01146670, int32_t, GetHashCode, (LightCanvas_SubLayerSettings * __this));
IL2CPP_REGISTER_METHOD(0x01146710, void, __ctor, (LightCanvas_SubLayerSettings * __this));
}
