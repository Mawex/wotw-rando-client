using namespace app;

namespace app::methods::System::Data::DataRelationCollection {
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_ObjectID, (DataRelationCollection * __this));
IL2CPP_REGISTER_METHOD(0x023A5510, void, Add, (DataRelationCollection * __this, DataRelation * relation));
IL2CPP_REGISTER_METHOD(0x023A5910, void, AddCore, (DataRelationCollection * __this, DataRelation * relation));
IL2CPP_REGISTER_METHODINFO(0x0478B9F0, DataRelationCollection_AddCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A5C30, void, add_CollectionChanged, (DataRelationCollection * __this, CollectionChangeEventHandler * value));
IL2CPP_REGISTER_METHOD(0x023A5D40, void, remove_CollectionChanged, (DataRelationCollection * __this, CollectionChangeEventHandler * value));
IL2CPP_REGISTER_METHOD(0x023A5E50, String *, AssignName, (DataRelationCollection * __this));
IL2CPP_REGISTER_METHOD(0x023A5E70, void, Clear, (DataRelationCollection * __this));
IL2CPP_REGISTER_METHOD(0x023A60E0, bool, Contains, (DataRelationCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x023A6100, int32_t, InternalIndexOf, (DataRelationCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x023A62E0, String *, MakeName, (DataRelationCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x023A63B0, void, OnCollectionChanged, (DataRelationCollection * __this, CollectionChangeEventArgs * ccevent));
IL2CPP_REGISTER_METHOD(0x023A64A0, void, OnCollectionChanging, (DataRelationCollection * __this, CollectionChangeEventArgs * ccevent));
IL2CPP_REGISTER_METHOD(0x023A6590, void, RegisterName, (DataRelationCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04716000, DataRelationCollection_RegisterName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A6790, void, Remove, (DataRelationCollection * __this, DataRelation * relation));
IL2CPP_REGISTER_METHOD(0x023A6AF0, void, RemoveAt, (DataRelationCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04738878, DataRelationCollection_RemoveAt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A6BD0, void, RemoveCore, (DataRelationCollection * __this, DataRelation * relation));
IL2CPP_REGISTER_METHODINFO(0x04711DE0, DataRelationCollection_RemoveCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A6DE0, void, UnregisterName, (DataRelationCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x023A6F50, void, __ctor, (DataRelationCollection * __this));
}
