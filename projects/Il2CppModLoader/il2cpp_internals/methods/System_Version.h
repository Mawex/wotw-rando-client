#include <interception_macros.h>

namespace app::methods::System::Version {
IL2CPP_REGISTER_METHOD(0x0314B480, void, __ctor, (Version * __this, int32_t major, int32_t minor, int32_t build, int32_t revision));
IL2CPP_REGISTER_METHODINFO(0x0471B840, Version__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0314B660, void, __ctor, (Version * __this, int32_t major, int32_t minor, int32_t build));
IL2CPP_REGISTER_METHODINFO(0x0473EDE8, Version__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0314B7F0, void, __ctor, (Version * __this, int32_t major, int32_t minor));
IL2CPP_REGISTER_METHODINFO(0x0474D4D0, Version__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0314B920, void, __ctor, (Version * __this, String * version));
IL2CPP_REGISTER_METHOD(0x0314BB00, void, __ctor, (Version * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Major, (Version * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Minor, (Version * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Build, (Version * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Revision, (Version * __this));
IL2CPP_REGISTER_METHOD(0x0314BB10, Object *, Clone, (Version * __this));
IL2CPP_REGISTER_METHOD(0x0314BC70, int32_t, CompareTo, (Version * __this, Object * version));
IL2CPP_REGISTER_METHODINFO(0x0472A578, Version_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0314BDD0, int32_t, CompareTo, (Version * __this, Version * value));
IL2CPP_REGISTER_METHOD(0x0314BED0, bool, Equals, (Version * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0314BFD0, bool, Equals, (Version * __this, Version * obj));
IL2CPP_REGISTER_METHOD(0x0314C0C0, int32_t, GetHashCode, (Version * __this));
IL2CPP_REGISTER_METHOD(0x0314C0F0, String *, ToString, (Version * __this));
IL2CPP_REGISTER_METHOD(0x0314C230, String *, ToString, (Version * __this, int32_t fieldCount));
IL2CPP_REGISTER_METHODINFO(0x04788690, Version_ToString_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0314C720, void, AppendPositiveNumber, (int32_t num, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x0314C7C0, Version *, Parse, (String * input));
IL2CPP_REGISTER_METHODINFO(0x0477E610, Version_Parse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0314C8E0, bool, TryParse, (String * input, Version * * result));
IL2CPP_REGISTER_METHOD(0x0314C9C0, bool, TryParseVersion, (String * version, Version_VersionResult * result));
IL2CPP_REGISTER_METHOD(0x0314D040, bool, TryParseComponent, (String * component, String * componentName, Version_VersionResult * result, int32_t * parsedComponent));
IL2CPP_REGISTER_METHOD(0x0314D160, bool, operator___, (Version * v1, Version * v2));
IL2CPP_REGISTER_METHOD(0x0314D180, bool, operator___, (Version * v1, Version * v2));
IL2CPP_REGISTER_METHOD(0x0314D250, bool, operator__, (Version * v1, Version * v2));
IL2CPP_REGISTER_METHODINFO(0x04796C98, Version_op_LessThan__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0314D320, bool, operator___, (Version * v1, Version * v2));
IL2CPP_REGISTER_METHODINFO(0x04717E00, Version_op_LessThanOrEqual__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0314D3F0, bool, operator__, (Version * v1, Version * v2));
IL2CPP_REGISTER_METHOD(0x0314D4A0, bool, operator___, (Version * v1, Version * v2));
IL2CPP_REGISTER_METHOD(0x0314D550, void, __cctor, ());
}
