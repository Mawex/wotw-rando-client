using namespace app;

namespace app::methods::AbilitiesPlugin {
IL2CPP_REGISTER_METHOD(0x004ABA40, Object *, ReflectionHack, (String * FullName));
IL2CPP_REGISTER_METHODINFO(0x047272F0, AbilitiesPlugin_ReflectionHack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (AbilitiesPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x004ABB80, void, RecordCycle, (AbilitiesPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x004ABDA0, void, Exit, (AbilitiesPlugin * __this));
IL2CPP_REGISTER_METHOD(0x004ABE40, void, HandleType, (AbilitiesPlugin * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x004AC050, void, HandleField, (AbilitiesPlugin * __this, Object * obj, FieldInfo_1 * fieldInfo));
IL2CPP_REGISTER_METHOD(0x004AC300, bool, CompareValues, (AbilitiesPlugin * __this, Object * valueA, Object * valueB));
IL2CPP_REGISTER_METHOD(0x004AC3F0, void, Record, (AbilitiesPlugin * __this, Object * obj, FieldInfo_1 * fieldInfo));
IL2CPP_REGISTER_METHOD(0x004AC7C0, void, PopulateFieldInfoDictionary, (AbilitiesPlugin * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x004ACA60, void, Awake, (AbilitiesPlugin * __this));
IL2CPP_REGISTER_METHOD(0x004ACB20, List_1_UnityEngine_Vector3_ *, ExtractDataFromRecorder, (RecorderData * recorderData));
IL2CPP_REGISTER_METHOD(0x004ACE50, void, __ctor, (AbilitiesPlugin * __this));
}
