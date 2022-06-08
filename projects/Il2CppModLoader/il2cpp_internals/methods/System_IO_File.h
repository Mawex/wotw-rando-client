using namespace app;

namespace app::methods::System::IO::File {
IL2CPP_REGISTER_METHOD(0x01E05270, void, Copy, (String * sourceFileName, String * destFileName));
IL2CPP_REGISTER_METHOD(0x01E05280, void, Copy, (String * sourceFileName, String * destFileName, bool overwrite));
IL2CPP_REGISTER_METHODINFO(0x047484C0, File_Copy_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E059B0, FileStream *, Create, (String * path));
IL2CPP_REGISTER_METHOD(0x01E05B20, FileStream *, Create, (String * path, int32_t bufferSize));
IL2CPP_REGISTER_METHOD(0x01E05CA0, StreamWriter *, CreateText, (String * path));
IL2CPP_REGISTER_METHOD(0x01E05DF0, void, Delete, (String * path));
IL2CPP_REGISTER_METHODINFO(0x047109D8, File_Delete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E06090, bool, Exists, (String * path));
IL2CPP_REGISTER_METHOD(0x01E06240, FileAttributes__Enum, GetAttributes, (String * path));
IL2CPP_REGISTER_METHODINFO(0x047493D0, File_GetAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E06360, DateTime, GetLastWriteTime, (String * path));
IL2CPP_REGISTER_METHODINFO(0x04786C68, File_GetLastWriteTime__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E06620, void, Move, (String * sourceFileName, String * destFileName));
IL2CPP_REGISTER_METHODINFO(0x047434B8, File_Move__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E06B30, FileStream *, Open, (String * path, FileMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x01E06CC0, FileStream *, Open, (String * path, FileMode__Enum mode, FileAccess__Enum access, FileShare__Enum share));
IL2CPP_REGISTER_METHOD(0x01E06E50, FileStream *, OpenRead, (String * path));
IL2CPP_REGISTER_METHOD(0x01E06FD0, StreamReader *, OpenText, (String * path));
IL2CPP_REGISTER_METHOD(0x01E07120, FileStream *, OpenWrite, (String * path));
IL2CPP_REGISTER_METHOD(0x01E07290, void, SetAttributes, (String * path, FileAttributes__Enum fileAttributes));
IL2CPP_REGISTER_METHODINFO(0x04738BB0, File_SetAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E07490, Byte__Array *, ReadAllBytes, (String * path));
IL2CPP_REGISTER_METHODINFO(0x04750BA0, File_ReadAllBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E076A0, String__Array *, ReadAllLines, (String * path));
IL2CPP_REGISTER_METHOD(0x01E077D0, String__Array *, ReadAllLines, (StreamReader * reader));
IL2CPP_REGISTER_METHOD(0x01E07A10, String *, ReadAllText, (String * path));
IL2CPP_REGISTER_METHOD(0x01E07C10, void, WriteAllBytes, (String * path, Byte__Array * bytes));
IL2CPP_REGISTER_METHOD(0x01E07D50, void, WriteAllLines, (String * path, String__Array * contents));
IL2CPP_REGISTER_METHOD(0x01E07F70, void, WriteAllLines, (StreamWriter * writer, String__Array * contents));
IL2CPP_REGISTER_METHOD(0x01E07FF0, void, WriteAllText, (String * path, String * contents));
IL2CPP_REGISTER_METHOD(0x01E080B0, void, WriteAllText, (String * path, String * contents, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x01E082E0, DateTime, get_DefaultLocalFileTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01E08470, int32_t, FillAttributeInfo, (String * path, MonoIOStat * data, bool tryagain, bool returnErrorOnNotFound));
IL2CPP_REGISTER_METHODINFO(0x04727D40, File_FillAttributeInfo__MethodInfo);
}
