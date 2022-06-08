#include <interception_macros.h>

namespace app::methods::LegacyUberTransformFollow {
IL2CPP_REGISTER_METHOD(0x0112D350, void, Awake, (LegacyUberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x0112D4E0, void, Update, (LegacyUberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x0112D800, void, ProcessPosition, (LegacyUberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x0112DC10, void, ProcessLocks, (LegacyUberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x0112DE60, void, ValidateList, (LegacyUberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x0112DF80, void, ProcessFollowModifierX, (LegacyUberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x0112DFD0, void, ProcessFollowModifierY, (LegacyUberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x0112E020, void, ProcessFollowModifierZ, (LegacyUberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x0112E070, Vector3, MidPoint, (LegacyUberTransformFollow * __this, List_1_UnityEngine_Transform_ * * targets));
IL2CPP_REGISTER_METHOD(0x0112E390, float, HighestX, (LegacyUberTransformFollow * __this, List_1_UnityEngine_Transform_ * * targets));
IL2CPP_REGISTER_METHOD(0x0112E550, float, LowestX, (LegacyUberTransformFollow * __this, List_1_UnityEngine_Transform_ * * targets));
IL2CPP_REGISTER_METHOD(0x0112E710, float, HighestY, (LegacyUberTransformFollow * __this, List_1_UnityEngine_Transform_ * * targets));
IL2CPP_REGISTER_METHOD(0x0112E8D0, float, LowestY, (LegacyUberTransformFollow * __this, List_1_UnityEngine_Transform_ * * targets));
IL2CPP_REGISTER_METHOD(0x0112EA90, float, HighestZ, (LegacyUberTransformFollow * __this, List_1_UnityEngine_Transform_ * * targets));
IL2CPP_REGISTER_METHOD(0x0112EC50, float, LowestZ, (LegacyUberTransformFollow * __this, List_1_UnityEngine_Transform_ * * targets));
IL2CPP_REGISTER_METHOD(0x0112EE10, void, ProcessRotation, (LegacyUberTransformFollow * __this));
IL2CPP_REGISTER_METHOD(0x0112F660, float, ComputeAvgRotation2D, (LegacyUberTransformFollow * __this, List_1_UnityEngine_Transform_ * * targets));
IL2CPP_REGISTER_METHOD(0x0112F800, Vector3, ComputeAvgRotation3D, (LegacyUberTransformFollow * __this, List_1_UnityEngine_Transform_ * * targets));
IL2CPP_REGISTER_METHOD(0x0112FAC0, float, ComputeLookRotation2D, (LegacyUberTransformFollow * __this, Vector3 from, Vector3 to));
IL2CPP_REGISTER_METHOD(0x0112FBE0, Vector3, ComputeLookRotation3D, (LegacyUberTransformFollow * __this, Vector3 from, Vector3 to));
IL2CPP_REGISTER_METHOD(0x0112FD40, float, LinearRegressionBasedRotation2D, (LegacyUberTransformFollow * __this, List_1_UnityEngine_Transform_ * * targets));
IL2CPP_REGISTER_METHOD(0x01130370, void, __ctor, (LegacyUberTransformFollow * __this));
}
