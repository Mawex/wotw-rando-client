using namespace app;

namespace app::methods::System::Runtime::CompilerServices::RuntimeOps {
IL2CPP_REGISTER_METHOD(0x02FC8220, bool, ExpandoTryGetValue, (ExpandoObject * expando, Object * indexClass, int32_t index, String * name, bool ignoreCase, Object * * value));
IL2CPP_REGISTER_METHOD(0x02FC8250, Object *, ExpandoTrySetValue, (ExpandoObject * expando, Object * indexClass, int32_t index, Object * value, String * name, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x02FC82A0, bool, ExpandoTryDeleteValue, (ExpandoObject * expando, Object * indexClass, int32_t index, String * name, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x02FC83B0, bool, ExpandoCheckVersion, (ExpandoObject * expando, Object * version));
IL2CPP_REGISTER_METHOD(0x02FC83E0, void, ExpandoPromoteClass, (ExpandoObject * expando, Object * oldClass, Object * newClass));
}
