#include <interception_macros.h>

namespace app::methods::ResolutionOptions {
IL2CPP_REGISTER_METHOD(0x00905930, void, Awake, (ResolutionOptions * __this));
IL2CPP_REGISTER_METHOD(0x00906260, void, OnEnable, (ResolutionOptions * __this));
IL2CPP_REGISTER_METHOD(0x00906840, void, SetResolution, (ResolutionOptions * __this, Resolution resolution));
IL2CPP_REGISTER_METHOD(0x009069A0, String *, GetAspectRatio, (Vector2 res, float precision));
IL2CPP_REGISTER_METHOD(0x00906C80, bool, IsAspectRatio, (Vector2 res, int32_t horizontal, int32_t vertical, float precision));
IL2CPP_REGISTER_METHOD(0x00906D60, void, SortResolutions, (List_1_ResolutionOptions_ResolutionEntry_ * resolutions));
IL2CPP_REGISTER_METHOD(0x00906F70, void, __ctor, (ResolutionOptions * __this));
IL2CPP_REGISTER_METHOD(0x009070D0, void, __cctor, ());
}
