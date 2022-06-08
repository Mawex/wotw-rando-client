#include <interception_macros.h>

namespace app::methods::UnityEngine::ManagedStreamHelpers {
IL2CPP_REGISTER_METHOD(0x02530BF0, void, ValidateLoadFromStream, (Stream * stream));
IL2CPP_REGISTER_METHODINFO(0x04732BC0, ManagedStreamHelpers_ValidateLoadFromStream__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02530D40, void, ManagedStreamRead, (Byte__Array * buffer, int32_t offset, int32_t count, Stream * stream, void * returnValueAddress));
IL2CPP_REGISTER_METHODINFO(0x047494B8, ManagedStreamHelpers_ManagedStreamRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02530E60, void, ManagedStreamSeek, (int64_t offset, uint32_t origin, Stream * stream, void * returnValueAddress));
IL2CPP_REGISTER_METHODINFO(0x0476B648, ManagedStreamHelpers_ManagedStreamSeek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02530F60, void, ManagedStreamLength, (Stream * stream, void * returnValueAddress));
IL2CPP_REGISTER_METHODINFO(0x047047E0, ManagedStreamHelpers_ManagedStreamLength__MethodInfo);
}
