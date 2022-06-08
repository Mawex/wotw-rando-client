#include <interception_macros.h>

namespace app::methods::KwolokBossBehaviourZones {
IL2CPP_REGISTER_METHOD(0x01247530, void, OnEnable, (KwolokBossBehaviourZones * __this));
IL2CPP_REGISTER_METHOD(0x012475B0, void, UpdateStates, (KwolokBossBehaviourZones * __this, Vector3 targetPos, Vector3 kwolokPos));
IL2CPP_REGISTER_METHOD(0x01247620, void, InitalizeListAndDictionary, (KwolokBossBehaviourZones * __this, List_1_KwolokBossBehaviourZones_ZoneAndState_ * list, Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ * dic));
IL2CPP_REGISTER_METHOD(0x01247660, void, InitalizeList, (KwolokBossBehaviourZones * __this, List_1_KwolokBossBehaviourZones_ZoneAndState_ * list));
IL2CPP_REGISTER_METHOD(0x01247E80, void, InitalizeDictionary, (KwolokBossBehaviourZones * __this, Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ * dic, List_1_KwolokBossBehaviourZones_ZoneAndState_ * fromList));
IL2CPP_REGISTER_METHOD(0x01248040, void, UpdateList, (KwolokBossBehaviourZones * __this, List_1_KwolokBossBehaviourZones_ZoneAndState_ * list, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x01248150, bool, IsTargetInZone, (KwolokBossBehaviourZones * __this, CageStructureTool * cage));
IL2CPP_REGISTER_METHOD(0x01248160, bool, IsKwolokInZone, (KwolokBossBehaviourZones * __this, CageStructureTool * cage));
IL2CPP_REGISTER_METHOD(0x01248170, bool, IsInZone, (KwolokBossBehaviourZones * __this, CageStructureTool * cage, Dictionary_2_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState_ * dic));
IL2CPP_REGISTER_METHOD(0x01248270, void, __ctor, (KwolokBossBehaviourZones * __this));
}
