#include <interception_macros.h>

namespace app::methods::System::UnitySerializationHolder {
IL2CPP_REGISTER_METHOD(0x027C5C80, void, GetUnitySerializationInfo, (SerializationInfo * info, Missing * missing));
IL2CPP_REGISTER_METHOD(0x027C5D60, RuntimeType *, AddElementTypes, (SerializationInfo * info, RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x027C6380, Type *, MakeElementTypes, (UnitySerializationHolder * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x027C6520, void, GetUnitySerializationInfo, (SerializationInfo * info, RuntimeType * type));
IL2CPP_REGISTER_METHOD(0x027C68C0, void, GetUnitySerializationInfo, (SerializationInfo * info, int32_t unityType, String * data, RuntimeAssembly * assembly));
IL2CPP_REGISTER_METHOD(0x027C6A30, void, __ctor, (UnitySerializationHolder * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0472EB60, UnitySerializationHolder__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C6CC0, void, ThrowInsufficientInformation, (UnitySerializationHolder * __this, String * field));
IL2CPP_REGISTER_METHODINFO(0x04747760, UnitySerializationHolder_ThrowInsufficientInformation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C6D60, void, GetObjectData, (UnitySerializationHolder * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x047568E8, UnitySerializationHolder_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027C6DD0, Object *, GetRealObject, (UnitySerializationHolder * __this, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0474BA88, UnitySerializationHolder_GetRealObject__MethodInfo);
}
