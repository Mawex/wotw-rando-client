using namespace app;

namespace app::methods::System::Linq::Error {
IL2CPP_REGISTER_METHOD(0x01F9B720, Exception *, ArgumentNull, (String * s));
IL2CPP_REGISTER_METHOD(0x01F9B870, Exception *, ArgumentOutOfRange, (String * s));
IL2CPP_REGISTER_METHOD(0x01F9B9D0, Exception *, MoreThanOneElement, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01F9BB20, Exception *, MoreThanOneMatch, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01F9BC70, Exception *, NoElements, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01F9BDC0, Exception *, NoMatch, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01F9BF10, Exception *, NotSupported, (MethodInfo * method));
}
