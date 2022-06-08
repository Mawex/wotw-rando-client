using namespace app;

namespace app::methods::ObjectBasedMotionBlur {
IL2CPP_REGISTER_METHOD(0x0060D940, void, Start, (ObjectBasedMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x0060DA20, void, FixedUpdate, (ObjectBasedMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x0060DB10, void, GenerateBlurObjects, (ObjectBasedMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x0060E050, void, CleanupGeneratedObjects, (ObjectBasedMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x0060E1F0, void, __ctor, (ObjectBasedMotionBlur * __this));
}
