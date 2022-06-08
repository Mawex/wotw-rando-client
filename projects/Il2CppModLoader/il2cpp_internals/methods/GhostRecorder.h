#include <interception_macros.h>

namespace app::methods::GhostRecorder {
IL2CPP_REGISTER_METHOD(0x002FBBC0, BinaryWriter *, get_RecorderStream, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007DF7E0, GhostFrame *, get_CurrentFrame, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, String *, get_FilePath, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007DF810, void, Awake, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007DF8E0, void, OnDestroy, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007DF990, void, InitializeRecorder, (GhostRecorder * __this, String * outputPath));
IL2CPP_REGISTER_METHOD(0x007E0310, void, InitializeMemoryStream, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E03D0, void, DestroyRecorder, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E0580, void, StartRecorder, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E06F0, void, StopRecorder, (GhostRecorder * __this));
IL2CPP_REGISTER_METHODINFO(0x04767130, GhostRecorder_StopRecorder__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007E0A00, void, WriteToFile, (GhostRecorder * __this, String * path, bool allowAppend));
IL2CPP_REGISTER_METHOD(0x007E0C90, void, Cancel, (GhostRecorder * __this));
IL2CPP_REGISTER_METHODINFO(0x04722AF8, GhostRecorder_Cancel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007E0CD0, void, FinalizeFrame, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E0E30, void, FixedUpdate, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E13C0, void, Record, (GhostRecorder * __this, StateMachine_2 * stateMachine));
IL2CPP_REGISTER_METHOD(0x007E13D0, void, Record, (GhostRecorder * __this, StateMachine_2 * stateMachine, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x007E16C0, void, RegisterPlugin, (GhostRecorder * __this, IGhostRecorderPlugin * plugin));
IL2CPP_REGISTER_METHOD(0x007E1840, void, DeregisterPlugin, (GhostRecorder * __this, IGhostRecorderPlugin * plugin));
IL2CPP_REGISTER_METHOD(0x007E1900, void, RegisterPuppet, (GenericPuppet * puppet));
IL2CPP_REGISTER_METHOD(0x007E19D0, void, UnregisterPuppet, (GenericPuppet * puppet));
IL2CPP_REGISTER_METHOD(0x007E1A90, void, RegisterPreRecordingInstantiationEvent, (GhostRecorder * __this, GameObject * instance, GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x007E1DE0, void, RegisterPreRecordingDynamicSceneObject, (GhostRecorder * __this, IRecordable * recordable));
IL2CPP_REGISTER_METHOD(0x007E1FD0, void, RegisterPreRecordingUberState, (GhostRecorder * __this, IGenericUberState * uberState, float value));
IL2CPP_REGISTER_METHOD(0x007E2220, void, HandlePreRecordingInstantiationTableRegistering, (GhostRecorder * __this, GameObject * instance, GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsSuspended, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsSuspended, (GhostRecorder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0070DEC0, SuspendableMask__Enum, get_Mask, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E2390, void, set_Mask, (GhostRecorder * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x007E2450, void, __ctor, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x007E2760, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x015EA5B0, Object *, GetPlugin, (GhostRecorder * __this));
IL2CPP_REGISTER_METHOD(0x015EA5B0, GhostServerEventsPlugin *, GetPlugin, (GhostRecorder * __this));
IL2CPP_REGISTER_METHODINFO(0x0471F278, GhostRecorder_GetPlugin_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015EA5B0, GhostGenericEventsPlugin *, GetPlugin, (GhostRecorder * __this));
IL2CPP_REGISTER_METHODINFO(0x04767CB0, GhostRecorder_GetPlugin_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015EA5B0, GhostWorldObjectsLifetimePlugin *, GetPlugin, (GhostRecorder * __this));
IL2CPP_REGISTER_METHODINFO(0x04773BB8, GhostRecorder_GetPlugin_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015EA5B0, GhostUberStatePlugin *, GetPlugin, (GhostRecorder * __this));
IL2CPP_REGISTER_METHODINFO(0x0478CF68, GhostRecorder_GetPlugin_4__MethodInfo);
}
