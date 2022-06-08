#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsCyclicReferenceManager {
IL2CPP_REGISTER_METHOD(0x0131C5E0, void, Enter, (fsCyclicReferenceManager * __this));
IL2CPP_REGISTER_METHOD(0x01651700, bool, Exit, (fsCyclicReferenceManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0474E358, fsCyclicReferenceManager_Exit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01651A00, Object *, GetReferenceObject, (fsCyclicReferenceManager * __this, int32_t id));
IL2CPP_REGISTER_METHODINFO(0x0475DA50, fsCyclicReferenceManager_GetReferenceObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01651B30, void, AddReferenceWithId, (fsCyclicReferenceManager * __this, int32_t id, Object * reference));
IL2CPP_REGISTER_METHOD(0x01651BF0, int32_t, GetReferenceId, (fsCyclicReferenceManager * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x01651D40, bool, IsReference, (fsCyclicReferenceManager * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x01651E10, void, MarkSerialized, (fsCyclicReferenceManager * __this, Object * item));
IL2CPP_REGISTER_METHODINFO(0x0475FD10, fsCyclicReferenceManager_MarkSerialized__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01651F70, void, __ctor, (fsCyclicReferenceManager * __this));
}
