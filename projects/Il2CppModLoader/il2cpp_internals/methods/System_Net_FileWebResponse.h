#include <interception_macros.h>

namespace app::methods::System::Net::FileWebResponse {
IL2CPP_REGISTER_METHOD(0x01D2AEA0, void, __ctor, (FileWebResponse * __this, FileWebRequest * request, Uri * uri, FileAccess__Enum access, bool asyncHint));
IL2CPP_REGISTER_METHODINFO(0x047324B8, FileWebResponse__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2B360, void, __ctor, (FileWebResponse * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x01D28380, void, ISerializable_GetObjectData, (FileWebResponse * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x01D2B540, void, GetObjectData, (FileWebResponse * __this, SerializationInfo * serializationInfo, StreamingContext streamingContext));
IL2CPP_REGISTER_METHOD(0x01D2B6A0, int64_t, get_ContentLength, (FileWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01D2B6C0, String *, get_ContentType, (FileWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01D2B750, WebHeaderCollection *, get_Headers, (FileWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsHeaders, (FileWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01D2B770, Uri *, get_ResponseUri, (FileWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01D2B790, void, CheckDisposed, (FileWebResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x04764570, FileWebResponse_CheckDisposed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2B870, void, Close, (FileWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01D2B900, void, ICloseEx_CloseEx, (FileWebResponse * __this, CloseExState__Enum closeState));
IL2CPP_REGISTER_METHOD(0x01D2BA80, Stream *, GetResponseStream, (FileWebResponse * __this));
}
