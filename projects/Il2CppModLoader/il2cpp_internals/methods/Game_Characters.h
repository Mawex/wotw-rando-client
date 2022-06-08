using namespace app;

namespace app::methods::Game::Characters {
IL2CPP_REGISTER_METHOD(0x01522590, SeinCharacter *, get_Sein, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01522630, void, set_Sein, (SeinCharacter * value));
IL2CPP_REGISTER_METHOD(0x01522790, BabySein *, get_BabySein, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01522830, void, set_BabySein, (BabySein * value));
IL2CPP_REGISTER_METHOD(0x01522990, Naru *, get_Naru, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01522A30, void, set_Naru, (Naru * value));
IL2CPP_REGISTER_METHOD(0x01522B90, Ku *, get_Ku, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01522C30, void, set_Ku, (Ku * value));
IL2CPP_REGISTER_METHOD(0x01522D90, ICharacter *, get_Current, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01522E30, void, set_Current, (ICharacter * value));
IL2CPP_REGISTER_METHOD(0x01522EE0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01522FF0, void, SetCurrentCharacter, (ICharacter * character));
IL2CPP_REGISTER_METHOD(0x015231B0, void, ClearIfCurrentCharacter, (ICharacter * character));
IL2CPP_REGISTER_METHOD(0x01523280, void, ClearCurrentCharacter, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01523330, Ori *, get_Ori, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015233D0, void, set_Ori, (Ori * value));
IL2CPP_REGISTER_METHOD(0x015234D0, void, ResetStatics2, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Characters * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
