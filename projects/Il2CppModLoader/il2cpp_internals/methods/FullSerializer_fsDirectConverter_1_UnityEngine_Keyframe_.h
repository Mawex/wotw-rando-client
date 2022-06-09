#include <interception_macros.h>

namespace app::methods::FullSerializer::fsDirectConverter_1_UnityEngine_Keyframe_ {
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (app::fsDirectConverter_1_UnityEngine_Keyframe_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04741B90, fsDirectConverter_1_UnityEngine_Keyframe___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019E6CA0, Type *, get_ModelType, (app::fsDirectConverter_1_UnityEngine_Keyframe_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x019E6D50, fsResult, TrySerialize, (app::fsDirectConverter_1_UnityEngine_Keyframe_ * this_ptr, app::Object * instance, app::fsData * * serialized, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x019E7050, fsResult, TryDeserialize, (app::fsDirectConverter_1_UnityEngine_Keyframe_ * this_ptr, app::fsData * data, app::Object * * instance, app::Type * storage_type));
}
