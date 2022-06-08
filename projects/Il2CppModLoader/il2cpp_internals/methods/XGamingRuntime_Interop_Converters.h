#include <interception_macros.h>

namespace app::methods::XGamingRuntime::Interop::Converters {
IL2CPP_REGISTER_METHOD(0x030B0320, void *, Offset, (void * ptr, int64_t that));
IL2CPP_REGISTER_METHOD(0x030B0330, DisposableBuffer *, StringArrayToUTF8StringArray, (String__Array * strings));
IL2CPP_REGISTER_METHODINFO(0x04794CE8, Converters_StringArrayToUTF8StringArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030B0A70, Byte__Array *, StringToNullTerminatedUTF8ByteArray, (String * str));
IL2CPP_REGISTER_METHOD(0x030B0B40, Byte__Array *, StringToNullTerminatedUTF8ByteArrayInternal, (String * str, int32_t requiredByteArrayLength));
IL2CPP_REGISTER_METHOD(0x030B0C90, String *, ByteArrayToString, (Byte__Array * arr, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x030B0D80, String *, PtrToStringUTF8, (void * rawPtr));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray, (void * rawPtr, SizeT count, Func_2_Object_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E87F0, Object__Array *, PtrToClassArray, (void * rawPtr, uint32_t count, Func_2_Object_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, String__Array *, PtrToClassArray, (void * rawPtr, SizeT count, Func_2_XGamingRuntime_Interop_UTF8StringPtr_String_ * ctor));
IL2CPP_REGISTER_METHODINFO(0x0471EE68, Converters_PtrToClassArray_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E8EA0, XGameSaveBlob__Array *, PtrToClassArray, (void * rawPtr, uint32_t count, Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob_ * ctor));
IL2CPP_REGISTER_METHODINFO(0x047870A8, Converters_PtrToClassArray_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E8B10, XblAchievement__Array *, PtrToClassArray, (void * rawPtr, SizeT count, Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement_ * ctor));
IL2CPP_REGISTER_METHODINFO(0x0472B9A0, Converters_PtrToClassArray_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E8680, Object *, PtrToClass, (void * rawPtr, Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B60, Object__Array *, PtrToClassArray, (void * rawPtr, uint32_t count, Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray, (void * rawPtr, SizeT count, Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8EA0, Object__Array *, PtrToClassArray, (void * rawPtr, uint32_t count, Func_2_XGamingRuntime_Interop_XGameSaveBlob_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E91F0, Object__Array *, PtrToClassArray, (void * rawPtr, uint32_t count, Func_2_XGamingRuntime_Interop_XblAchievement_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray, (void * rawPtr, SizeT count, Func_2_XGamingRuntime_Interop_XblAchievement_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E95C0, Object__Array *, PtrToClassArray, (void * rawPtr, uint32_t count, Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray, (void * rawPtr, SizeT count, Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E9910, Object__Array *, PtrToClassArray, (void * rawPtr, uint32_t count, Func_2_XGamingRuntime_Interop_XblAchievementRequirement_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray, (void * rawPtr, SizeT count, Func_2_XGamingRuntime_Interop_XblAchievementRequirement_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E9C60, Object__Array *, PtrToClassArray, (void * rawPtr, uint32_t count, Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray, (void * rawPtr, SizeT count, Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E9FC0, Object__Array *, PtrToClassArray, (void * rawPtr, uint32_t count, Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray, (void * rawPtr, SizeT count, Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_Object_ * ctor));
}
