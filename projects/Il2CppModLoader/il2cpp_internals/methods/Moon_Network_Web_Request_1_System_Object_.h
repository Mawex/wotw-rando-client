#include <interception_macros.h>

namespace app::methods::Moon::Network::Web::Request_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Path, (Request_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, Method__Enum, get_Method, (Request_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, IDataReader *, get_DataReader, (Request_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Dictionary_2_System_String_System_String_ *, get_Headers, (Request_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x027225F0, void, add_m_callback, (Request_1_System_Object_ * __this, Action_1_Object_ * value));
IL2CPP_REGISTER_METHOD(0x027226B0, void, remove_m_callback, (Request_1_System_Object_ * __this, Action_1_Object_ * value));
IL2CPP_REGISTER_METHOD(0x02722770, void, Send, (Request_1_System_Object_ * __this, Action_1_Object_ * callback));
IL2CPP_REGISTER_METHOD(0x02722840, void, AddCallback, (Request_1_System_Object_ * __this, Action_1_Object_ * callback));
IL2CPP_REGISTER_METHOD(0x02722870, void, AddHeader, (Request_1_System_Object_ * __this, String * key, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetCommunicator, (Request_1_System_Object_ * __this, IServerCommunicator * communicator));
IL2CPP_REGISTER_METHOD(0x0052A000, void, SetMethod, (Request_1_System_Object_ * __this, Method__Enum method_1));
IL2CPP_REGISTER_METHOD(0x002FB960, void, SetPath, (Request_1_System_Object_ * __this, String * path));
IL2CPP_REGISTER_METHOD(0x02722930, void, SetDataReader, (Request_1_System_Object_ * __this, IDataReader * dataReader));
IL2CPP_REGISTER_METHOD(0x027229E0, IRequestCallback *, CreateRequestCallbackObject, (Request_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02722AA0, void, Finish, (Request_1_System_Object_ * __this, IRequestCallback * result));
IL2CPP_REGISTER_METHOD(0x02722B40, void, __ctor, (Request_1_System_Object_ * __this));
}
