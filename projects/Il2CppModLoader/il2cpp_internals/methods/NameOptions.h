#include <interception_macros.h>

namespace app::methods::NameOptions {
IL2CPP_REGISTER_METHOD(0x002FBC00, String *, get_FirstLetter, (NameOptions * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_FirstLetter, (NameOptions * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, String *, get_SecondLetter, (NameOptions * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_SecondLetter, (NameOptions * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, String *, get_CurrentlySelected, (NameOptions * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_CurrentlySelected, (NameOptions * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBC60, List_1_System_String_ *, get_UnavailableNames, (NameOptions * __this));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_UnavailableNames, (NameOptions * __this, List_1_System_String_ * value));
IL2CPP_REGISTER_METHOD(0x00882390, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00882410, void, OnEnable, (NameOptions * __this));
IL2CPP_REGISTER_METHOD(0x00882C40, NameOptions_NameDatabase *, get_Database, ());
IL2CPP_REGISTER_METHOD(0x00882DA0, NameOptions_NameDatabase *, LoadDatabase, ());
IL2CPP_REGISTER_METHOD(0x00882E80, void, __ctor, (NameOptions * __this));
}
