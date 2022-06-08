#include <interception_macros.h>

namespace app::methods::RecordableObject {
IL2CPP_REGISTER_METHOD(0x002FB9F0, RecordableObjectPuppet *, get_Puppet, (RecordableObject * __this));
IL2CPP_REGISTER_METHOD(0x00736350, void, Awake, (RecordableObject * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (RecordableObject * __this));
IL2CPP_REGISTER_METHOD(0x00736360, void, CreatePuppet, (RecordableObject * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (RecordableObject * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (RecordableObject * __this));
}
