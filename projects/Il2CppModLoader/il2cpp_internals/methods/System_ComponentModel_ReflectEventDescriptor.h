#include <interception_macros.h>

namespace app::methods::System::ComponentModel::ReflectEventDescriptor {
IL2CPP_REGISTER_METHOD(0x0299A110, void, __ctor, (ReflectEventDescriptor * __this, Type * componentClass, String * name, Type * type, Attribute__Array * attributes));
IL2CPP_REGISTER_METHODINFO(0x04743DF0, ReflectEventDescriptor__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0299A360, void, __ctor, (ReflectEventDescriptor * __this, Type * componentClass, EventInfo_1 * eventInfo));
IL2CPP_REGISTER_METHODINFO(0x04784D60, ReflectEventDescriptor__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0299A4E0, void, __ctor, (ReflectEventDescriptor * __this, Type * componentType, EventDescriptor_1 * oldReflectEventDescriptor, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x002FBBA0, Type *, get_ComponentType, (ReflectEventDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0299A5E0, Type *, get_EventType, (ReflectEventDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0299A600, bool, get_IsMulticast, (ReflectEventDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0299A6F0, void, AddEventHandler, (ReflectEventDescriptor * __this, Object * component, Delegate * value));
IL2CPP_REGISTER_METHODINFO(0x0478DC20, ReflectEventDescriptor_AddEventHandler__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0299AB20, void, FillAttributes, (ReflectEventDescriptor * __this, IList * attributes));
IL2CPP_REGISTER_METHOD(0x0299AB90, void, FillEventInfoAttribute, (ReflectEventDescriptor * __this, EventInfo_1 * realEventInfo, IList * attributes));
IL2CPP_REGISTER_METHOD(0x0299AEA0, void, FillMethods, (ReflectEventDescriptor * __this));
IL2CPP_REGISTER_METHODINFO(0x04701A00, ReflectEventDescriptor_FillMethods__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0299B3E0, void, FillSingleMethodAttribute, (ReflectEventDescriptor * __this, MethodInfo_1 * realMethodInfo, IList * attributes));
IL2CPP_REGISTER_METHOD(0x0299B700, void, RemoveEventHandler, (ReflectEventDescriptor * __this, Object * component, Delegate * value));
IL2CPP_REGISTER_METHODINFO(0x04754070, ReflectEventDescriptor_RemoveEventHandler__MethodInfo);
}
