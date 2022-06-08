using namespace app;

namespace app::methods::System::Diagnostics::StackTrace {
IL2CPP_REGISTER_METHOD(0x01741770, void, __ctor, (StackTrace * __this));
IL2CPP_REGISTER_METHOD(0x01741780, void, __ctor, (StackTrace * __this, bool fNeedFileInfo));
IL2CPP_REGISTER_METHOD(0x01741790, void, __ctor, (StackTrace * __this, int32_t skipFrames, bool fNeedFileInfo));
IL2CPP_REGISTER_METHOD(0x017417A0, void, init_frames, (StackTrace * __this, int32_t skipFrames, bool fNeedFileInfo));
IL2CPP_REGISTER_METHODINFO(0x047157F0, StackTrace_init_frames__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01741AE0, StackFrame__Array *, get_trace, (Exception * e, int32_t skipFrames, bool fNeedFileInfo));
IL2CPP_REGISTER_METHOD(0x01741AF0, void, __ctor, (StackTrace * __this, Exception * e, bool fNeedFileInfo));
IL2CPP_REGISTER_METHOD(0x01741B10, void, __ctor, (StackTrace * __this, Exception * e, int32_t skipFrames, bool fNeedFileInfo));
IL2CPP_REGISTER_METHODINFO(0x0477EA38, StackTrace__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01741C30, int32_t, get_FrameCount, (StackTrace * __this));
IL2CPP_REGISTER_METHOD(0x01741C40, StackFrame *, GetFrame, (StackTrace * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01741CB0, String *, GetAotId, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01741DC0, bool, AddFrames, (StackTrace * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x017422E0, void, GetFullNameForStackTrace, (StackTrace * __this, StringBuilder * sb, MethodBase * mi));
IL2CPP_REGISTER_METHOD(0x017427E0, String *, ToString, (StackTrace * __this));
IL2CPP_REGISTER_METHOD(0x01742A00, String *, ToString, (StackTrace * __this, StackTrace_TraceFormat__Enum traceFormat));
}
