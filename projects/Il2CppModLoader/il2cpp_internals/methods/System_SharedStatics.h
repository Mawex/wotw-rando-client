using namespace app;

namespace app::methods::System::SharedStatics {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SharedStatics * __this));
IL2CPP_REGISTER_METHOD(0x01E259D0, Tokenizer_StringMaker *, GetSharedStringMaker, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01E25D30, void, ReleaseSharedStringMaker, (Tokenizer_StringMaker * * maker));
IL2CPP_REGISTER_METHOD(0x01E25ED0, void, __cctor, (MethodInfo * method));
}
