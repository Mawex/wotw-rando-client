using namespace app;

namespace app::methods::InstantiationHistory_PrefabData {
IL2CPP_REGISTER_METHOD(0x00635BE0, void, __ctor, (InstantiationHistory_PrefabData * __this));
IL2CPP_REGISTER_METHOD(0x00635C80, double, get_AveragePooledInstantiationMS, (InstantiationHistory_PrefabData * __this));
IL2CPP_REGISTER_METHOD(0x00635CA0, double, get_AverageNewObjectInstantiationMS, (InstantiationHistory_PrefabData * __this));
IL2CPP_REGISTER_METHOD(0x00635CC0, double, get_AverageUnpooledMS, (InstantiationHistory_PrefabData * __this));
IL2CPP_REGISTER_METHOD(0x00635CE0, String *, ToCSV, (InstantiationHistory_PrefabData * __this));
}
