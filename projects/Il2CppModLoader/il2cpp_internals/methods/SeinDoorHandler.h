using namespace app;

namespace app::methods::SeinDoorHandler {
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsOverlappingDoor, (SeinDoorHandler * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsOverlappingDoor, (SeinDoorHandler * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00AC45A0, void, ChangeState, (SeinDoorHandler * __this, SeinDoorHandler_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetReferenceToSein, (SeinDoorHandler * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x00AC45C0, bool, IsUsingDoor, (SeinDoorHandler * __this));
IL2CPP_REGISTER_METHOD(0x00AC45D0, void, OnDoorOverlap, (SeinDoorHandler * __this, LegacyDoor * door));
IL2CPP_REGISTER_METHOD(0x00AC4900, bool, CanEnterDoor, (SeinDoorHandler * __this));
IL2CPP_REGISTER_METHOD(0x00AC4E70, LegacyDoor *, GetTargetDoor, (SeinDoorHandler * __this, LegacyDoor * door));
IL2CPP_REGISTER_METHOD(0x00AC5390, void, EnterIntoDoor, (SeinDoorHandler * __this, LegacyDoor * door));
IL2CPP_REGISTER_METHOD(0x00AC5D60, bool, PlayDoorEnterAnimation, (SeinDoorHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x04720A18, SeinDoorHandler_PlayDoorEnterAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AC5D70, void, OnFadedToBlack, (SeinDoorHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x04733BB8, SeinDoorHandler_OnFadedToBlack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AC5D90, void, FadeOutOnTimelineEnd, (SeinDoorHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A600, SeinDoorHandler_FadeOutOnTimelineEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AC5E90, void, OnGoneThroughDoor, (SeinDoorHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x047457A0, SeinDoorHandler_OnGoneThroughDoor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AC6320, void, OnSceneEnabled, (SeinDoorHandler * __this, bool success));
IL2CPP_REGISTER_METHODINFO(0x04758540, SeinDoorHandler_OnSceneEnabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AC6460, void, FixedUpdate, (SeinDoorHandler * __this));
IL2CPP_REGISTER_METHOD(0x00AC72B0, void, __ctor, (SeinDoorHandler * __this));
}
