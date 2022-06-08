using namespace app;

namespace app::methods::Moon::Network::Web::Request_1_GetReplaysCallback_ {
IL2CPP_REGISTER_METHOD(0x0052A000, void, SetMethod, (Request_1_GetReplaysCallback_ * __this, Method__Enum method_1));
IL2CPP_REGISTER_METHODINFO(0x04735420, Request_1_GetReplaysCallback__SetMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02722770, void, Send, (Request_1_GetReplaysCallback_ * __this, Action_1_GetReplaysCallback_ * callback));
IL2CPP_REGISTER_METHODINFO(0x0472F138, Request_1_GetReplaysCallback__Send__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Path, (Request_1_GetReplaysCallback_ * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, Method__Enum, get_Method, (Request_1_GetReplaysCallback_ * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, IDataReader *, get_DataReader, (Request_1_GetReplaysCallback_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Dictionary_2_System_String_System_String_ *, get_Headers, (Request_1_GetReplaysCallback_ * __this));
IL2CPP_REGISTER_METHOD(0x027229E0, IRequestCallback *, CreateRequestCallbackObject, (Request_1_GetReplaysCallback_ * __this));
IL2CPP_REGISTER_METHOD(0x02722AA0, void, Finish, (Request_1_GetReplaysCallback_ * __this, IRequestCallback * result));
}
