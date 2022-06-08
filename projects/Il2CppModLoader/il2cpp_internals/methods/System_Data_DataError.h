#include <interception_macros.h>

namespace app::methods::System::Data::DataError {
IL2CPP_REGISTER_METHOD(0x0239F0B0, void, __ctor, (DataError * __this));
IL2CPP_REGISTER_METHOD(0x0239F140, void, __ctor, (DataError * __this, String * rowError));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Text, (DataError * __this));
IL2CPP_REGISTER_METHOD(0x0239F1F0, void, set_Text, (DataError * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0239F200, bool, get_HasErrors, (DataError * __this));
IL2CPP_REGISTER_METHOD(0x0239F230, void, SetColumnError, (DataError * __this, DataColumn * column, String * error));
IL2CPP_REGISTER_METHOD(0x0239F3A0, String *, GetColumnError, (DataError * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x0239F4A0, void, Clear, (DataError * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x0239F560, void, Clear, (DataError * __this));
IL2CPP_REGISTER_METHOD(0x0239F650, DataColumn__Array *, GetColumnsInError, (DataError * __this));
IL2CPP_REGISTER_METHOD(0x0239F790, void, SetText, (DataError * __this, String * errorText));
IL2CPP_REGISTER_METHOD(0x0239F840, int32_t, IndexOf, (DataError * __this, DataColumn * column));
}
