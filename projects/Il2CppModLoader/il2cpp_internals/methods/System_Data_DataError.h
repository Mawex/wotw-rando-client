#include <interception_macros.h>

namespace app::methods::System_Data::DataError {
IL2CPP_REGISTER_METHOD(0x0239F0B0, void, __ctor_1, (app::DataError * this_ptr));
IL2CPP_REGISTER_METHOD(0x0239F140, void, __ctor_2, (app::DataError * this_ptr, app::String * row_error));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Text, (app::DataError * this_ptr));
IL2CPP_REGISTER_METHOD(0x0239F1F0, void, set_Text, (app::DataError * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0239F200, bool, get_HasErrors, (app::DataError * this_ptr));
IL2CPP_REGISTER_METHOD(0x0239F230, void, SetColumnError, (app::DataError * this_ptr, app::DataColumn * column, app::String * error));
IL2CPP_REGISTER_METHOD(0x0239F3A0, String *, GetColumnError, (app::DataError * this_ptr, app::DataColumn * column));
IL2CPP_REGISTER_METHOD(0x0239F4A0, void, Clear_1, (app::DataError * this_ptr, app::DataColumn * column));
IL2CPP_REGISTER_METHOD(0x0239F560, void, Clear_2, (app::DataError * this_ptr));
IL2CPP_REGISTER_METHOD(0x0239F650, DataColumn__Array *, GetColumnsInError, (app::DataError * this_ptr));
IL2CPP_REGISTER_METHOD(0x0239F790, void, SetText, (app::DataError * this_ptr, app::String * error_text));
IL2CPP_REGISTER_METHOD(0x0239F840, int32_t, IndexOf, (app::DataError * this_ptr, app::DataColumn * column));
}
