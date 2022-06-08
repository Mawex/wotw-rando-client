using namespace app;

namespace app::methods::System::Configuration::UriSection {
IL2CPP_REGISTER_METHOD(0x01FFE320, void, __ctor, (UriSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04730B30, UriSection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFE350, IdnElement *, get_Idn, (UriSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04704358, UriSection_get_Idn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFE380, IriParsingElement *, get_IriParsing, (UriSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04775E18, UriSection_get_IriParsing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFE3B0, ConfigurationPropertyCollection *, get_Properties, (UriSection * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A920, UriSection_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FFE3E0, SchemeSettingElementCollection *, get_SchemeSettings, (UriSection * __this));
IL2CPP_REGISTER_METHODINFO(0x047503D0, UriSection_get_SchemeSettings__MethodInfo);
}
