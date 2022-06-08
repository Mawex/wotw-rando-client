#include <interception_macros.h>

namespace app::methods::SaveSlotsScreenshotManager {
IL2CPP_REGISTER_METHOD(0x0092ABF0, void, Awake, (SaveSlotsScreenshotManager * __this));
IL2CPP_REGISTER_METHOD(0x0092AC80, void, OnDestroy, (SaveSlotsScreenshotManager * __this));
IL2CPP_REGISTER_METHOD(0x0092AD60, Texture *, FindScreenshot, (SaveSlotsScreenshotManager * __this, GameWorldAreaID__Enum areaID));
IL2CPP_REGISTER_METHOD(0x0092AF10, String *, FindAreaName, (SaveSlotsScreenshotManager * __this, GameWorldAreaID__Enum areaID));
IL2CPP_REGISTER_METHOD(0x0092B100, void, __ctor, (SaveSlotsScreenshotManager * __this));
}
