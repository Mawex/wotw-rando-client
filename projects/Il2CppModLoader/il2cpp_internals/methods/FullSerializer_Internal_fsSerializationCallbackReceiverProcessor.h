#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsSerializationCallbackReceiverProcessor {
IL2CPP_REGISTER_METHOD(0x0165D980, bool, CanProcess, (fsSerializationCallbackReceiverProcessor * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x0165DA50, void, OnBeforeSerialize, (fsSerializationCallbackReceiverProcessor * __this, Type * storageType, Object * instance));
IL2CPP_REGISTER_METHOD(0x0165DB30, void, OnAfterDeserialize, (fsSerializationCallbackReceiverProcessor * __this, Type * storageType, Object * instance));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsSerializationCallbackReceiverProcessor * __this));
}
