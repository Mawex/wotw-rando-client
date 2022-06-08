using namespace app;

namespace app::methods::RootMotion::LayerMaskExtensions {
IL2CPP_REGISTER_METHOD(0x02A2BC20, bool, Contains, (LayerMask mask, int32_t layer));
IL2CPP_REGISTER_METHOD(0x02A2BC30, LayerMask, Create, (String__Array * layerNames));
IL2CPP_REGISTER_METHOD(0x02A2BC40, LayerMask, Create, (Int32__Array * layerNumbers));
IL2CPP_REGISTER_METHOD(0x02A2BCA0, LayerMask, NamesToMask, (String__Array * layerNames));
IL2CPP_REGISTER_METHOD(0x02A2BC40, LayerMask, LayerNumbersToMask, (Int32__Array * layerNumbers));
IL2CPP_REGISTER_METHOD(0x02A2BD50, LayerMask, Inverse, (LayerMask original));
IL2CPP_REGISTER_METHOD(0x02A2BD60, LayerMask, AddToMask, (LayerMask original, String__Array * layerNames));
IL2CPP_REGISTER_METHOD(0x02A2BD80, LayerMask, RemoveFromMask, (LayerMask original, String__Array * layerNames));
IL2CPP_REGISTER_METHOD(0x02A2BDB0, String__Array *, MaskToNames, (LayerMask original));
IL2CPP_REGISTER_METHOD(0x02A2BFB0, Int32__Array *, MaskToNumbers, (LayerMask original));
IL2CPP_REGISTER_METHOD(0x02A2C2B0, String *, MaskToString, (LayerMask original));
IL2CPP_REGISTER_METHOD(0x02A2C350, String *, MaskToString, (LayerMask original, String * delimiter));
}
