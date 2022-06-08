using namespace app;

namespace app::methods::CCDistanceMapGenerator {
IL2CPP_REGISTER_METHOD(0x02738160, void, Generate, (Texture2D * source, Texture2D * destination, float maxInside, float maxOutside, float postProcessDistance, CCDistanceMapGenerator_RGBMode__Enum rgbMode));
IL2CPP_REGISTER_METHOD(0x02738CD0, void, ComputeEdgeGradients, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02739120, float, ApproximateEdgeDelta, (float gx, float gy, float a));
IL2CPP_REGISTER_METHOD(0x02739340, void, UpdateDistance, (CCDistanceMapGenerator_Pixel * p, int32_t x, int32_t y, int32_t oX, int32_t oY));
IL2CPP_REGISTER_METHOD(0x02739590, void, GenerateDistanceTransform, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02739CF0, void, PostProcess, (float maxDistance));
}
