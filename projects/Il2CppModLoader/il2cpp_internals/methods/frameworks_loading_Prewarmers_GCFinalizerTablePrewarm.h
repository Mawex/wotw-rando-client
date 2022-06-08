#include <interception_macros.h>

namespace app::methods::frameworks::loading::Prewarmers::GCFinalizerTablePrewarm {
IL2CPP_REGISTER_METHOD(0x00F5F0A0, void, __ctor, (GCFinalizerTablePrewarm * __this));
IL2CPP_REGISTER_METHOD(0x00F5F1D0, void, Execute, (GCFinalizerTablePrewarm * __this));
IL2CPP_REGISTER_METHOD(0x00F5F440, void, ThreadMain, (Object * ctxObj));
IL2CPP_REGISTER_METHODINFO(0x04772B30, GCFinalizerTablePrewarm_ThreadMain__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F5F6F0, bool, Begin, (GCFinalizerTablePrewarm * __this));
IL2CPP_REGISTER_METHOD(0x00F5F760, bool, Update, (GCFinalizerTablePrewarm * __this));
IL2CPP_REGISTER_METHOD(0x00F5F8F0, bool, FinishImmediately, (GCFinalizerTablePrewarm * __this));
}
