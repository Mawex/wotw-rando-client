#include <interception_macros.h>

namespace app::methods::XGamingRuntime_Interop::Converters {
IL2CPP_REGISTER_METHOD(0x030B0320, void *, Offset, (app::void * ptr, int64_t that));
IL2CPP_REGISTER_METHOD(0x030B0330, DisposableBuffer *, StringArrayToUTF8StringArray, (app::String__Array * strings));
IL2CPP_REGISTER_METHODINFO(0x04794CE8, Converters_StringArrayToUTF8StringArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030B0A70, Byte__Array *, StringToNullTerminatedUTF8ByteArray, (app::String * str));
IL2CPP_REGISTER_METHOD(0x030B0B40, Byte__Array *, StringToNullTerminatedUTF8ByteArrayInternal, (app::String * str, int32_t required_byte_array_length));
IL2CPP_REGISTER_METHOD(0x030B0C90, String *, ByteArrayToString, (app::Byte__Array * arr, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x030B0D80, String *, PtrToStringUTF8, (app::void * raw_ptr));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray_1, (app::void * raw_ptr, app::SizeT count, app::Func_2_Object_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E87F0, Object__Array *, PtrToClassArray_2, (app::void * raw_ptr, uint32_t count, app::Func_2_Object_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, String__Array *, PtrToClassArray_3, (app::void * raw_ptr, app::SizeT count, app::Func_2_XGamingRuntime_Interop_UTF8StringPtr_String_ * ctor));
IL2CPP_REGISTER_METHODINFO(0x0471EE68, Converters_PtrToClassArray_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E8EA0, XGameSaveBlob__Array *, PtrToClassArray_4, (app::void * raw_ptr, uint32_t count, app::Func_2_XGamingRuntime_Interop_XGameSaveBlob_XGamingRuntime_XGameSaveBlob_ * ctor));
IL2CPP_REGISTER_METHODINFO(0x047870A8, Converters_PtrToClassArray_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E8B10, XblAchievement__Array *, PtrToClassArray_5, (app::void * raw_ptr, app::SizeT count, app::Func_2_XGamingRuntime_Interop_XblAchievement_XGamingRuntime_XblAchievement_ * ctor));
IL2CPP_REGISTER_METHODINFO(0x0472B9A0, Converters_PtrToClassArray_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018E8680, Object *, PtrToClass, (app::void * raw_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B60, Object__Array *, PtrToClassArray_6, (app::void * raw_ptr, uint32_t count, app::Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray_7, (app::void * raw_ptr, app::SizeT count, app::Func_2_XGamingRuntime_Interop_UTF8StringPtr_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8EA0, Object__Array *, PtrToClassArray_8, (app::void * raw_ptr, uint32_t count, app::Func_2_XGamingRuntime_Interop_XGameSaveBlob_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E91F0, Object__Array *, PtrToClassArray_9, (app::void * raw_ptr, uint32_t count, app::Func_2_XGamingRuntime_Interop_XblAchievement_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray_10, (app::void * raw_ptr, app::SizeT count, app::Func_2_XGamingRuntime_Interop_XblAchievement_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E95C0, Object__Array *, PtrToClassArray_11, (app::void * raw_ptr, uint32_t count, app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray_12, (app::void * raw_ptr, app::SizeT count, app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E9910, Object__Array *, PtrToClassArray_13, (app::void * raw_ptr, uint32_t count, app::Func_2_XGamingRuntime_Interop_XblAchievementRequirement_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray_14, (app::void * raw_ptr, app::SizeT count, app::Func_2_XGamingRuntime_Interop_XblAchievementRequirement_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E9C60, Object__Array *, PtrToClassArray_15, (app::void * raw_ptr, uint32_t count, app::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray_16, (app::void * raw_ptr, app::SizeT count, app::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E9FC0, Object__Array *, PtrToClassArray_17, (app::void * raw_ptr, uint32_t count, app::Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_Object_ * ctor));
IL2CPP_REGISTER_METHOD(0x018E8B10, Object__Array *, PtrToClassArray_18, (app::void * raw_ptr, app::SizeT count, app::Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_Object_ * ctor));
}
