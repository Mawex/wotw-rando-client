using namespace app;

namespace app::methods::GhostGenericEventsPlugin {
IL2CPP_REGISTER_METHOD(0x00E1B3E0, void, PlayCycle, (GhostGenericEventsPlugin * __this, float frameTime));
IL2CPP_REGISTER_METHOD(0x00E1C5B0, GenericPuppet *, GetPuppet, (GhostGenericEventsPlugin * __this, int32_t puppetId, int32_t recordingId));
IL2CPP_REGISTER_METHOD(0x00E1C7F0, void, RecordEvent, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t eventId, Object__Array * parameters));
IL2CPP_REGISTER_METHODINFO(0x047500B8, GhostGenericEventsPlugin_RecordEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E1CF00, void, RecordSetAnimationParamEvent, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t resourceId, float value));
IL2CPP_REGISTER_METHOD(0x00E1D090, void, RecordAnimationMontageEvent, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t resourceId));
IL2CPP_REGISTER_METHOD(0x00E1D1C0, void, RecordTimelineStartEvent, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t resourceId));
IL2CPP_REGISTER_METHOD(0x00E1D2F0, void, RecordTimelineEndEvent, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t resourceId));
IL2CPP_REGISTER_METHOD(0x00E1D420, void, RecordAnimationStartEvent, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t resourceId, int32_t arrayIndex, int32_t priority, float speed));
IL2CPP_REGISTER_METHOD(0x00E1D610, void, RecordAnimationEndEvent, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t resourceId, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x00E1D7A0, void, RecordSoundEvent, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t resourceId, int32_t arrayIndex, int32_t playerId, bool attach, float volume));
IL2CPP_REGISTER_METHOD(0x00E1D9C0, void, RecordInstantiate, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t resourceId, Vector3 position, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x00E1DC80, void, RecordFadeOutSoundEvent, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t playerId, float time));
IL2CPP_REGISTER_METHOD(0x00E1DE40, void, RecordLocalTransform, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t resourceId, Transform * transform));
IL2CPP_REGISTER_METHOD(0x00E1E4B0, void, RecordTransform, (GhostGenericEventsPlugin * __this, GenericPuppet * genericPuppet, int32_t resourceId, Transform * transform));
IL2CPP_REGISTER_METHOD(0x00E1EBB0, void, RecordScenarioAnimatingParticleSystem, (GhostGenericEventsPlugin * __this, ScenariosParticleSystemPlugin_TrackingID * trackingID, ParticleSystem * particleSystem));
IL2CPP_REGISTER_METHOD(0x00E1ED60, void, RecordBeginInteraction, (GhostGenericEventsPlugin * __this, RecordableObjectPuppet * recordableObjectPuppet));
IL2CPP_REGISTER_METHOD(0x00E1EED0, void, RecordEndInteraction, (GhostGenericEventsPlugin * __this, RecordableObjectPuppet * recordableObjectPuppet));
IL2CPP_REGISTER_METHOD(0x00E1F100, void, RecordGenericInstantiate, (GhostGenericEventsPlugin * __this, String * assetGuid, Vector3 position, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x00E1F3D0, void, RegisterSetter, (GhostGenericEventsPlugin * __this, CharacterStatePuppet * puppet, PropertyInfo_1 * prop));
IL2CPP_REGISTER_METHODINFO(0x0470BE50, GhostGenericEventsPlugin_RegisterSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (GhostGenericEventsPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00417920, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostGenericEventsPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00E1F740, void, ResetLocalState, (GhostGenericEventsPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00E1F830, void, __ctor, (GhostGenericEventsPlugin * __this));
IL2CPP_REGISTER_METHOD(0x01548A80, void, RecordValue, (GhostGenericEventsPlugin * __this, CharacterStatePuppet * characterStatePuppet, int32_t propertyId, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047354D8, GhostGenericEventsPlugin_RecordValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015494A0, void, RegisterSetterEntry, (GhostGenericEventsPlugin * __this, CharacterStatePuppet * puppet, int32_t propertyId, Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__3 * dictionary, MethodInfo_1 * setMethod));
IL2CPP_REGISTER_METHOD(0x015488A0, void, ActivateSetterEntry, (GhostGenericEventsPlugin * __this, int32_t puppetId, int32_t propertyId, Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__3 * dictionary, Object * value));
IL2CPP_REGISTER_METHOD(0x01548990, void, ActivateSetterEntry, (GhostGenericEventsPlugin * __this, int32_t puppetId, int32_t propertyId, Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ * dictionary, float value));
IL2CPP_REGISTER_METHODINFO(0x04743B58, GhostGenericEventsPlugin_ActivateSetterEntry_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015487B0, void, ActivateSetterEntry, (GhostGenericEventsPlugin * __this, int32_t puppetId, int32_t propertyId, Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 * dictionary, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x047692F8, GhostGenericEventsPlugin_ActivateSetterEntry_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015486C0, void, ActivateSetterEntry, (GhostGenericEventsPlugin * __this, int32_t puppetId, int32_t propertyId, Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 * dictionary, bool value));
IL2CPP_REGISTER_METHODINFO(0x04790BF8, GhostGenericEventsPlugin_ActivateSetterEntry_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01549800, void, RegisterSetterEntry, (GhostGenericEventsPlugin * __this, CharacterStatePuppet * puppet, int32_t propertyId, Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ * dictionary, MethodInfo_1 * setMethod));
IL2CPP_REGISTER_METHODINFO(0x04712208, GhostGenericEventsPlugin_RegisterSetterEntry_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01549140, void, RegisterSetterEntry, (GhostGenericEventsPlugin * __this, CharacterStatePuppet * puppet, int32_t propertyId, Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 * dictionary, MethodInfo_1 * setMethod));
IL2CPP_REGISTER_METHODINFO(0x0473BB00, GhostGenericEventsPlugin_RegisterSetterEntry_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01548DE0, void, RegisterSetterEntry, (GhostGenericEventsPlugin * __this, CharacterStatePuppet * puppet, int32_t propertyId, Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 * dictionary, MethodInfo_1 * setMethod));
IL2CPP_REGISTER_METHODINFO(0x04788C08, GhostGenericEventsPlugin_RegisterSetterEntry_3__MethodInfo);
}
