#include <interception_macros.h>

namespace app::methods::SystemIntegration::NintendoPlayFabSynchronizer {
IL2CPP_REGISTER_METHOD(0x00516E50, NintendoPlayFabSynchronizer *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (NintendoPlayFabSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, LinkID, (NintendoPlayFabSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x00517030, void, SyncIfNecessary, (NintendoPlayFabSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x005171E0, void, StartFriendSync, (NintendoPlayFabSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x005171F0, void, InvalidateSync, (NintendoPlayFabSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x00517200, void, GetPlayFabFriends, (NintendoPlayFabSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlayFabFriendsRetrieved, (NintendoPlayFabSynchronizer * __this, GetFriendsListResult * friendListResult));
IL2CPP_REGISTER_METHODINFO(0x047115A0, NintendoPlayFabSynchronizer_OnPlayFabFriendsRetrieved__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00517720, void, OnAllFriendDataRetrieved, (NintendoPlayFabSynchronizer * __this, GetPlayFabIDsFromNintendoSwitchDeviceIdsResult * pairResult, GetFriendsListResult * friendListResult));
IL2CPP_REGISTER_METHOD(0x00517C60, void, AddFriend, (NintendoPlayFabSynchronizer * __this, String * playFabId));
IL2CPP_REGISTER_METHOD(0x005182C0, void, RemoveFriend, (NintendoPlayFabSynchronizer * __this, String * playFabId));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NintendoPlayFabSynchronizer * __this));
IL2CPP_REGISTER_METHOD(0x00518920, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x005189B0, void, _GetPlayFabFriends_b__15_0, (NintendoPlayFabSynchronizer * __this, PlayFabError * error));
IL2CPP_REGISTER_METHODINFO(0x04775650, NintendoPlayFabSynchronizer__GetPlayFabFriends_b__15_0__MethodInfo);
}
