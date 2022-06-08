#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::DefaultReferenceResolver {
IL2CPP_REGISTER_METHOD(0x0186A530, BidirectionalDictionary_2_System_String_System_Object_ *, GetMappings, (DefaultReferenceResolver * __this, Object * context));
IL2CPP_REGISTER_METHODINFO(0x047106C8, DefaultReferenceResolver_GetMappings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0186A690, Object *, ResolveReference, (DefaultReferenceResolver * __this, Object * context, String * reference));
IL2CPP_REGISTER_METHOD(0x0186A7A0, String *, GetReference, (DefaultReferenceResolver * __this, Object * context, Object * value));
IL2CPP_REGISTER_METHOD(0x0186A920, void, AddReference, (DefaultReferenceResolver * __this, Object * context, String * reference, Object * value));
IL2CPP_REGISTER_METHOD(0x0186A9E0, bool, IsReferenced, (DefaultReferenceResolver * __this, Object * context, Object * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DefaultReferenceResolver * __this));
}
