using namespace app;

namespace app::methods::System::Runtime::Serialization::ObjectHolderList {
IL2CPP_REGISTER_METHOD(0x01ED6C70, void, __ctor, (ObjectHolderList * __this));
IL2CPP_REGISTER_METHOD(0x01ED6D10, void, __ctor, (ObjectHolderList * __this, int32_t startingSize));
IL2CPP_REGISTER_METHOD(0x01ED6DB0, void, Add, (ObjectHolderList * __this, ObjectHolder * value));
IL2CPP_REGISTER_METHOD(0x01ED6F00, ObjectHolderListEnumerator *, GetFixupEnumerator, (ObjectHolderList * __this));
IL2CPP_REGISTER_METHOD(0x01ED7060, void, EnlargeArray, (ObjectHolderList * __this));
IL2CPP_REGISTER_METHODINFO(0x04744860, ObjectHolderList_EnlargeArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Version, (ObjectHolderList * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (ObjectHolderList * __this));
}
