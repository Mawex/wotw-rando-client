using namespace app;

namespace app::methods::System::Text::RegularExpressions::CaptureEnumerator {
IL2CPP_REGISTER_METHOD(0x01DC2A00, void, __ctor, (CaptureEnumerator * __this, CaptureCollection * rcc));
IL2CPP_REGISTER_METHOD(0x02581220, bool, MoveNext, (CaptureEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x02581260, Object *, get_Current, (CaptureEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x02581260, Capture *, get_Capture, (CaptureEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x047052E8, CaptureEnumerator_get_Capture__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, (CaptureEnumerator * __this));
}
