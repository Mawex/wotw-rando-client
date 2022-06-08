using namespace app;

namespace app::methods::Moon::Extensions::SortExtensions {
IL2CPP_REGISTER_METHOD(0x0156C230, IEnumerable_1_System_Object_ *, TopologicalSort, (IEnumerable_1_System_Object_ * source, Func_2_Object_System_Collections_Generic_IEnumerable_1_ * dependencies, bool throwOnCycle));
IL2CPP_REGISTER_METHOD(0x0154FDE0, void, Visit, (Object * item, HashSet_1_System_Object_ * visited, ICollection_1_System_Object_ * sorted, Func_2_Object_System_Collections_Generic_IEnumerable_1_ * dependencies, bool throwOnCycle));
IL2CPP_REGISTER_METHODINFO(0x0472DFE0, SortExtensions_Visit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0156C230, IEnumerable_1_Moon_Timeline_TimelineEntityRecord_ *, TopologicalSort, (IEnumerable_1_Moon_Timeline_TimelineEntityRecord_ * source, Func_2_Moon_Timeline_TimelineEntityRecord_System_Collections_Generic_IEnumerable_1_ * dependencies, bool throwOnCycle));
IL2CPP_REGISTER_METHODINFO(0x0471C210, SortExtensions_TopologicalSort_1__MethodInfo);
}
