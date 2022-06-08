using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRChaperoneSetup {
IL2CPP_REGISTER_METHOD(0x016774C0, void, __ctor, (CVRChaperoneSetup * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x01677630, bool, CommitWorkingCopy, (CVRChaperoneSetup * __this, EChaperoneConfigFile__Enum configFile));
IL2CPP_REGISTER_METHOD(0x00B8BEC0, void, RevertWorkingCopy, (CVRChaperoneSetup * __this));
IL2CPP_REGISTER_METHOD(0x01677650, bool, GetWorkingPlayAreaSize, (CVRChaperoneSetup * __this, float * pSizeX, float * pSizeZ));
IL2CPP_REGISTER_METHOD(0x01677680, bool, GetWorkingPlayAreaRect, (CVRChaperoneSetup * __this, HmdQuad_t * rect));
IL2CPP_REGISTER_METHOD(0x016776A0, bool, GetWorkingCollisionBoundsInfo, (CVRChaperoneSetup * __this, HmdQuad_t__Array * * pQuadsBuffer));
IL2CPP_REGISTER_METHOD(0x01677780, bool, GetLiveCollisionBoundsInfo, (CVRChaperoneSetup * __this, HmdQuad_t__Array * * pQuadsBuffer));
IL2CPP_REGISTER_METHOD(0x01677860, bool, GetWorkingSeatedZeroPoseToRawTrackingPose, (CVRChaperoneSetup * __this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose));
IL2CPP_REGISTER_METHOD(0x01677880, bool, GetWorkingStandingZeroPoseToRawTrackingPose, (CVRChaperoneSetup * __this, HmdMatrix34_t * pmatStandingZeroPoseToRawTrackingPose));
IL2CPP_REGISTER_METHOD(0x016778A0, void, SetWorkingPlayAreaSize, (CVRChaperoneSetup * __this, float sizeX, float sizeZ));
IL2CPP_REGISTER_METHOD(0x016778C0, void, SetWorkingCollisionBoundsInfo, (CVRChaperoneSetup * __this, HmdQuad_t__Array * pQuadsBuffer));
IL2CPP_REGISTER_METHOD(0x016778F0, void, SetWorkingSeatedZeroPoseToRawTrackingPose, (CVRChaperoneSetup * __this, HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose));
IL2CPP_REGISTER_METHOD(0x01677910, void, SetWorkingStandingZeroPoseToRawTrackingPose, (CVRChaperoneSetup * __this, HmdMatrix34_t * pMatStandingZeroPoseToRawTrackingPose));
IL2CPP_REGISTER_METHOD(0x01677930, void, ReloadFromDisk, (CVRChaperoneSetup * __this, EChaperoneConfigFile__Enum configFile));
IL2CPP_REGISTER_METHOD(0x01677950, bool, GetLiveSeatedZeroPoseToRawTrackingPose, (CVRChaperoneSetup * __this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose));
IL2CPP_REGISTER_METHOD(0x01677970, void, SetWorkingCollisionBoundsTagsInfo, (CVRChaperoneSetup * __this, Byte__Array * pTagsBuffer));
IL2CPP_REGISTER_METHOD(0x016779B0, bool, GetLiveCollisionBoundsTagsInfo, (CVRChaperoneSetup * __this, Byte__Array * * pTagsBuffer));
IL2CPP_REGISTER_METHOD(0x01677A90, bool, SetWorkingPhysicalBoundsInfo, (CVRChaperoneSetup * __this, HmdQuad_t__Array * pQuadsBuffer));
IL2CPP_REGISTER_METHOD(0x01677AD0, bool, GetLivePhysicalBoundsInfo, (CVRChaperoneSetup * __this, HmdQuad_t__Array * * pQuadsBuffer));
IL2CPP_REGISTER_METHOD(0x01677BB0, bool, ExportLiveToBuffer, (CVRChaperoneSetup * __this, StringBuilder * pBuffer, uint32_t * pnBufferLength));
IL2CPP_REGISTER_METHOD(0x01677BE0, bool, ImportFromBufferToWorking, (CVRChaperoneSetup * __this, String * pBuffer, uint32_t nImportFlags));
}
