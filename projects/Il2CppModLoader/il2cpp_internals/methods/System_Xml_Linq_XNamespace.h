#include <interception_macros.h>

namespace app::methods::System::Xml::Linq::XNamespace {
IL2CPP_REGISTER_METHOD(0x030390C0, void, __ctor, (XNamespace * __this, String * namespaceName));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_NamespaceName, (XNamespace * __this));
IL2CPP_REGISTER_METHOD(0x03039310, XName *, GetName, (XNamespace * __this, String * localName));
IL2CPP_REGISTER_METHODINFO(0x04797888, XNamespace_GetName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, ToString, (XNamespace * __this));
IL2CPP_REGISTER_METHOD(0x030393F0, XNamespace *, get_None, ());
IL2CPP_REGISTER_METHOD(0x03039490, XNamespace *, get_Xml, ());
IL2CPP_REGISTER_METHOD(0x03039520, XNamespace *, get_Xmlns, ());
IL2CPP_REGISTER_METHOD(0x030395B0, XNamespace *, Get, (String * namespaceName));
IL2CPP_REGISTER_METHODINFO(0x0470C448, XNamespace_Get__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03039670, XNamespace *, operator_, (String * namespaceName));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (XNamespace * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, GetHashCode, (XNamespace * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (XNamespace * left, XNamespace * right));
IL2CPP_REGISTER_METHOD(0x015F81A0, bool, operator___, (XNamespace * left, XNamespace * right));
IL2CPP_REGISTER_METHOD(0x03039680, XName *, GetName, (XNamespace * __this, String * localName, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x03039950, XNamespace *, Get, (String * namespaceName, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x00C3DB20, String *, ExtractLocalName, (XName * n));
IL2CPP_REGISTER_METHODINFO(0x04777F78, XNamespace_ExtractLocalName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303A040, String *, ExtractNamespace, (WeakReference * r));
IL2CPP_REGISTER_METHODINFO(0x04780C88, XNamespace_ExtractNamespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303A110, XNamespace *, EnsureNamespace, (WeakReference * * refNmsp, String * namespaceName));
}
