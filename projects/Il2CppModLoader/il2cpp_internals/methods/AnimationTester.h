#include <interception_macros.h>

namespace app::methods::AnimationTester {
IL2CPP_REGISTER_METHOD(0x01AFB1B0, float, get_ChangeAnimationInterval, (AnimationTester * __this));
IL2CPP_REGISTER_METHOD(0x01AFB1D0, void, Awake, (AnimationTester * __this));
IL2CPP_REGISTER_METHOD(0x01AFB200, void, Update, (AnimationTester * __this));
IL2CPP_REGISTER_METHOD(0x01AFB280, void, PlayNext, (AnimationTester * __this, int32_t amountOfLayers));
IL2CPP_REGISTER_METHOD(0x01AFB300, void, PrintNumberOfBones, (AnimationTester * __this));
IL2CPP_REGISTER_METHOD(0x01AFB4E0, int32_t, HierarchySize, (AnimationTester * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x01AFB5E0, void, DuplicateEntries, (AnimationTester * __this));
IL2CPP_REGISTER_METHOD(0x01AFBB30, void, PopulateEntries, (AnimationTester * __this));
IL2CPP_REGISTER_METHOD(0x01AFC230, void, UpdateGroups, (AnimationTester * __this));
IL2CPP_REGISTER_METHOD(0x01AFCC70, void, InitUiElements, (AnimationTester * __this));
IL2CPP_REGISTER_METHOD(0x01AFD2E0, void, OnGUI, (AnimationTester * __this));
IL2CPP_REGISTER_METHOD(0x01AFD6F0, void, __ctor, (AnimationTester * __this));
IL2CPP_REGISTER_METHOD(0x004E57B0, void, _InitUiElements_b__24_0, (AnimationTester * __this, int32_t i));
IL2CPP_REGISTER_METHODINFO(0x0478C6F8, AnimationTester__InitUiElements_b__24_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, _InitUiElements_b__24_1, (AnimationTester * __this));
IL2CPP_REGISTER_METHODINFO(0x047271C0, AnimationTester__InitUiElements_b__24_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C08D30, void, _InitUiElements_b__24_2, (AnimationTester * __this, int32_t i));
IL2CPP_REGISTER_METHODINFO(0x0477B560, AnimationTester__InitUiElements_b__24_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0057AAC0, int32_t, _InitUiElements_b__24_3, (AnimationTester * __this));
IL2CPP_REGISTER_METHODINFO(0x0472EDC0, AnimationTester__InitUiElements_b__24_3__MethodInfo);
}
