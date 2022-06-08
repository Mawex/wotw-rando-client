using namespace app;

namespace app::methods::UnityEngine::UI::StencilMaterial {
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, Add, (Material * baseMat, int32_t stencilID));
IL2CPP_REGISTER_METHOD(0x02678310, Material *, Add, (Material * baseMat, int32_t stencilID, StencilOp__Enum operation, CompareFunction__Enum compareFunction, ColorWriteMask__Enum colorWriteMask));
IL2CPP_REGISTER_METHOD(0x02678400, Material *, Add, (Material * baseMat, int32_t stencilID, StencilOp__Enum operation, CompareFunction__Enum compareFunction, ColorWriteMask__Enum colorWriteMask, int32_t readMask, int32_t writeMask));
IL2CPP_REGISTER_METHOD(0x02678E70, void, Remove, (Material * customMat));
IL2CPP_REGISTER_METHOD(0x026790A0, void, ClearAll, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02679250, void, __cctor, (MethodInfo * method));
}
