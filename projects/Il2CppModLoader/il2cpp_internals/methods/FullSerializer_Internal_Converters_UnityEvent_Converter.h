#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::Converters::UnityEvent_Converter {
IL2CPP_REGISTER_METHOD(0x0164AAA0, bool, CanProcess, (UnityEvent_Converter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (UnityEvent_Converter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x0164ABC0, fsResult, TryDeserialize, (UnityEvent_Converter * __this, fsData * data, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHOD(0x0164ACF0, fsResult, TrySerialize, (UnityEvent_Converter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (UnityEvent_Converter * __this));
}
