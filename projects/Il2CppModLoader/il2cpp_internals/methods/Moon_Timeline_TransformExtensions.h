#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TransformExtensions {
IL2CPP_REGISTER_METHOD(0x0157F160, Object *, GetCommonParent, (Object * left, Object * right));
IL2CPP_REGISTER_METHOD(0x01B347B0, bool, GetCommonParentRecursive, (Object * left, Object * right, HashSet_1_System_Object_ * * foundParents, Object * * foundParent));
IL2CPP_REGISTER_METHOD(0x0157F160, MoonTimeline *, GetCommonParent, (MoonTimeline * left, MoonTimeline * right));
IL2CPP_REGISTER_METHODINFO(0x0476BAC0, TransformExtensions_1_GetCommonParent_1__MethodInfo);
}
