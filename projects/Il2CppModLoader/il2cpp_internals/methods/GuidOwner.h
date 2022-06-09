#include <interception_macros.h>

namespace app::methods::GuidOwner {
    IL2CPP_REGISTER_METHOD(0x01099210, MoonGuid*, GetGuid, (app::GuidOwner * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010993D0, void, RegenerateGuid, (app::GuidOwner * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477B2C8, GuidOwner_RegenerateGuid__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01099490, MoonGuid*, GenerateGUID, ());
    IL2CPP_REGISTER_METHOD(0x01099620, bool, IsGuidInitialized, (app::GuidOwner * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01099700, void, __ctor, (app::GuidOwner * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010998B0, void, __cctor, ());
} // namespace app::methods::GuidOwner
