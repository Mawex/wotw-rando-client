#include <interception_macros.h>

namespace app::methods::frameworks::loading::Prewarmers::ShaderPrewarmOperation {
IL2CPP_REGISTER_METHOD(0x00F62000, void, __ctor, (ShaderPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F620D0, bool, Begin, (ShaderPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F621B0, bool, Update, (ShaderPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F62450, void, UnloadScene, (ShaderPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F62580, bool, FinishImmediately, (ShaderPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F62620, int32_t, DebugDrawStatus, (ShaderPrewarmOperation * __this, int32_t xbegin, int32_t ybegin));
}
