#include <interception_macros.h>

namespace app::methods::System::IO::File {
    IL2CPP_REGISTER_METHOD(0x01E05270, void, Copy_1, (app::String * source_file_name, app::String * dest_file_name));
    IL2CPP_REGISTER_METHOD(0x01E05280, void, Copy_2, (app::String * source_file_name, app::String * dest_file_name, bool overwrite));
    IL2CPP_REGISTER_METHODINFO(0x047484C0, File_Copy_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E059B0, app::FileStream *, Create_1, (app::String * path));
    IL2CPP_REGISTER_METHOD(0x01E05B20, app::FileStream *, Create_2, (app::String * path, int32_t buffer_size));
    IL2CPP_REGISTER_METHOD(0x01E05CA0, app::StreamWriter *, CreateText, (app::String * path));
    IL2CPP_REGISTER_METHOD(0x01E05DF0, void, Delete, (app::String * path));
    IL2CPP_REGISTER_METHODINFO(0x047109D8, File_Delete__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E06090, bool, Exists, (app::String * path));
    IL2CPP_REGISTER_METHOD(0x01E06240, app::FileAttributes__Enum, GetAttributes, (app::String * path));
    IL2CPP_REGISTER_METHODINFO(0x047493D0, File_GetAttributes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E06360, app::DateTime, GetLastWriteTime, (app::String * path));
    IL2CPP_REGISTER_METHODINFO(0x04786C68, File_GetLastWriteTime__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E06620, void, Move, (app::String * source_file_name, app::String * dest_file_name));
    IL2CPP_REGISTER_METHODINFO(0x047434B8, File_Move__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E06B30, app::FileStream *, Open_1, (app::String * path, app::FileMode__Enum mode));
    IL2CPP_REGISTER_METHOD(0x01E06CC0, app::FileStream *, Open_2, (app::String * path, app::FileMode__Enum mode, app::FileAccess__Enum access, app::FileShare__Enum share));
    IL2CPP_REGISTER_METHOD(0x01E06E50, app::FileStream *, OpenRead, (app::String * path));
    IL2CPP_REGISTER_METHOD(0x01E06FD0, app::StreamReader *, OpenText, (app::String * path));
    IL2CPP_REGISTER_METHOD(0x01E07120, app::FileStream *, OpenWrite, (app::String * path));
    IL2CPP_REGISTER_METHOD(0x01E07290, void, SetAttributes, (app::String * path, app::FileAttributes__Enum file_attributes));
    IL2CPP_REGISTER_METHODINFO(0x04738BB0, File_SetAttributes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E07490, app::Byte__Array *, ReadAllBytes, (app::String * path));
    IL2CPP_REGISTER_METHODINFO(0x04750BA0, File_ReadAllBytes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E076A0, app::String__Array *, ReadAllLines_1, (app::String * path));
    IL2CPP_REGISTER_METHOD(0x01E077D0, app::String__Array *, ReadAllLines_2, (app::StreamReader * reader));
    IL2CPP_REGISTER_METHOD(0x01E07A10, app::String *, ReadAllText, (app::String * path));
    IL2CPP_REGISTER_METHOD(0x01E07C10, void, WriteAllBytes, (app::String * path, app::Byte__Array * bytes));
    IL2CPP_REGISTER_METHOD(0x01E07D50, void, WriteAllLines_1, (app::String * path, app::String__Array * contents));
    IL2CPP_REGISTER_METHOD(0x01E07F70, void, WriteAllLines_2, (app::StreamWriter * writer, app::String__Array * contents));
    IL2CPP_REGISTER_METHOD(0x01E07FF0, void, WriteAllText_1, (app::String * path, app::String * contents));
    IL2CPP_REGISTER_METHOD(0x01E080B0, void, WriteAllText_2, (app::String * path, app::String * contents, app::Encoding * encoding));
    IL2CPP_REGISTER_METHOD(0x01E082E0, app::DateTime, get_DefaultLocalFileTime, ());
    IL2CPP_REGISTER_METHOD(0x01E08470, int32_t, FillAttributeInfo, (app::String * path, app::MonoIOStat * data, bool tryagain, bool return_error_on_not_found));
    IL2CPP_REGISTER_METHODINFO(0x04727D40, File_FillAttributeInfo__MethodInfo);
}
