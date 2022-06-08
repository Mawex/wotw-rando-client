#include <interception_macros.h>

namespace app::methods::System::DelegateSerializationHolder {
IL2CPP_REGISTER_METHOD(0x017401E0, void, __ctor, (DelegateSerializationHolder * __this, SerializationInfo * info, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x01740470, void, GetDelegateData, (Delegate * instance, SerializationInfo * info, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x017407B0, void, GetObjectData, (DelegateSerializationHolder * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0474F5F8, DelegateSerializationHolder_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, GetRealObject, (DelegateSerializationHolder * __this, StreamingContext context));
}
