#include <interception_macros.h>

namespace app::methods::frameworks::loading::Prewarmers::ResourcesLoadPrewarmOperation {
IL2CPP_REGISTER_METHOD(0x00F61D00, void, __ctor, (ResourcesLoadPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F5DE70, bool, Begin, (ResourcesLoadPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F61DA0, bool, Update, (ResourcesLoadPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F61E30, void, PerformStep, (ResourcesLoadPrewarmOperation * __this, int32_t step));
IL2CPP_REGISTER_METHOD(0x00F61FC0, bool, FinishImmediately, (ResourcesLoadPrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F5D850, int32_t, DebugDrawStatus, (ResourcesLoadPrewarmOperation * __this, int32_t xbegin, int32_t ybegin));
}
