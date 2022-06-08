#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Rendering::StencilState {
IL2CPP_REGISTER_METHOD(0x001F2150, void, __ctor, (StencilState__Boxed * __this, bool enabled, uint8_t readMask, uint8_t writeMask, CompareFunction__Enum compareFunction, StencilOp__Enum passOperation, StencilOp__Enum failOperation, StencilOp__Enum zFailOperation));
IL2CPP_REGISTER_METHOD(0x001F21B0, void, __ctor, (StencilState__Boxed * __this, bool enabled, uint8_t readMask, uint8_t writeMask, CompareFunction__Enum compareFunctionFront, StencilOp__Enum passOperationFront, StencilOp__Enum failOperationFront, StencilOp__Enum zFailOperationFront, CompareFunction__Enum compareFunctionBack, StencilOp__Enum passOperationBack, StencilOp__Enum failOperationBack, StencilOp__Enum zFailOperationBack));
IL2CPP_REGISTER_METHOD(0x025252C0, StencilState, get_Default, ());
}
