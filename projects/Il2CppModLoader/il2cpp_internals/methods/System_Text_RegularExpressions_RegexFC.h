using namespace app;

namespace app::methods::System::Text::RegularExpressions::RegexFC {
IL2CPP_REGISTER_METHOD(0x02591160, void, __ctor, (RegexFC * __this, bool nullable));
IL2CPP_REGISTER_METHOD(0x025912B0, void, __ctor, (RegexFC * __this, uint16_t ch, bool not_1, bool nullable, bool caseInsensitive));
IL2CPP_REGISTER_METHOD(0x02591490, void, __ctor, (RegexFC * __this, String * charClass, bool nullable, bool caseInsensitive));
IL2CPP_REGISTER_METHOD(0x02591560, bool, AddFC, (RegexFC * __this, RegexFC * fc, bool concatenate));
IL2CPP_REGISTER_METHOD(0x02591610, String *, GetFirstChars, (RegexFC * __this, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x00533160, bool, IsCaseInsensitive, (RegexFC * __this));
}
