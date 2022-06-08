#include <interception_macros.h>

namespace app::methods::LightInfluenceSettings {
IL2CPP_REGISTER_METHOD(0x0114D1F0, int32_t, get_LayerCount, ());
IL2CPP_REGISTER_METHOD(0x0114D360, Dictionary_2_LightPriority_Layer_LightInfluence_ *, get_InfluenceMap, (LightInfluenceSettings * __this));
IL2CPP_REGISTER_METHOD(0x0114D390, void, __ctor, (LightInfluenceSettings * __this));
IL2CPP_REGISTER_METHOD(0x0114D4F0, void, BuildMap, (LightInfluenceSettings * __this));
IL2CPP_REGISTER_METHOD(0x0114DC60, void, BuildMapWithEarlyExit, (LightInfluenceSettings * __this));
IL2CPP_REGISTER_METHOD(0x0114DD60, void, ApplyInfluence, (LightInfluenceSettings * __this, PointLightMaskModifier * pointLight));
IL2CPP_REGISTER_METHOD(0x0114DE40, LightInfluence *, GetInfluenceForLayer, (LightInfluenceSettings * __this, LightPriority_Layer__Enum layer));
IL2CPP_REGISTER_METHOD(0x0114DEF0, void, OnBeforeSerialize, (LightInfluenceSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (LightInfluenceSettings * __this));
IL2CPP_REGISTER_METHOD(0x0114DF00, void, Lerp, (LightInfluenceSettings * from, LightInfluenceSettings * to, LightInfluenceSettings * * destination, float t));
IL2CPP_REGISTER_METHOD(0x0114E1B0, void, CopyTo, (LightInfluenceSettings * __this, LightInfluenceSettings * * destination));
IL2CPP_REGISTER_METHOD(0x0114E310, LightInfluenceSettings *, Clone, (LightInfluenceSettings * __this));
IL2CPP_REGISTER_METHOD(0x0114E470, void, __cctor, ());
}
