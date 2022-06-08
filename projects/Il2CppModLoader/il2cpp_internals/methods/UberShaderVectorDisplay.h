#include <interception_macros.h>

namespace app::methods::UberShaderVectorDisplay {
IL2CPP_REGISTER_METHOD(0x0128A000, bool, get_DisplayX, (UberShaderVectorDisplay * __this));
IL2CPP_REGISTER_METHOD(0x0128A020, bool, get_DisplayY, (UberShaderVectorDisplay * __this));
IL2CPP_REGISTER_METHOD(0x0128A040, bool, get_DisplayZ, (UberShaderVectorDisplay * __this));
IL2CPP_REGISTER_METHOD(0x0128A060, bool, get_DisplayW, (UberShaderVectorDisplay * __this));
IL2CPP_REGISTER_METHOD(0x0128A080, void, __ctor, (UberShaderVectorDisplay * __this, String * xyName, String * zwName));
IL2CPP_REGISTER_METHOD(0x0128A090, void, __ctor, (UberShaderVectorDisplay * __this, String * x, String * y, String * z, String * w));
}
