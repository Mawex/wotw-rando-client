using namespace app;

namespace app::methods::System::Runtime::Serialization::LongList {
IL2CPP_REGISTER_METHOD(0x01ED5410, void, __ctor, (LongList * __this));
IL2CPP_REGISTER_METHOD(0x01ED54B0, void, __ctor, (LongList * __this, int32_t startingSize));
IL2CPP_REGISTER_METHOD(0x01ED5550, void, Add, (LongList * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (LongList * __this));
IL2CPP_REGISTER_METHOD(0x00443280, void, StartEnumeration, (LongList * __this));
IL2CPP_REGISTER_METHOD(0x01ED5670, bool, MoveNext, (LongList * __this));
IL2CPP_REGISTER_METHOD(0x01ED56E0, int64_t, get_Current, (LongList * __this));
IL2CPP_REGISTER_METHOD(0x01ED5720, bool, RemoveElement, (LongList * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01ED57B0, void, EnlargeArray, (LongList * __this));
IL2CPP_REGISTER_METHODINFO(0x04759998, LongList_EnlargeArray__MethodInfo);
}
