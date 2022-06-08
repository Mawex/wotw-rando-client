using namespace app;

namespace app::methods::Motvin::Collections::FastHashSet_1_System::UInt32_ {
IL2CPP_REGISTER_METHOD(0x02AF8B00, void, __ctor, (FastHashSet_1_System_UInt32_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x04768468, FastHashSet_1_System_UInt32___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B06F10, bool, Add, (FastHashSet_1_System_UInt32_ * __this, uint32_t item));
IL2CPP_REGISTER_METHODINFO(0x0470C130, FastHashSet_1_System_UInt32__Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B07E00, bool, Remove, (FastHashSet_1_System_UInt32_ * __this, uint32_t item));
IL2CPP_REGISTER_METHODINFO(0x0477A450, FastHashSet_1_System_UInt32__Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AF89C0, void, __ctor, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02AF8A20, void, __ctor, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * collection));
IL2CPP_REGISTER_METHOD(0x02AF8A90, void, __ctor, (FastHashSet_1_System_UInt32_ * __this, IEqualityComparer_1_System_UInt32_ * comparer));
IL2CPP_REGISTER_METHOD(0x02AF8B70, void, __ctor, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * collection, IEqualityComparer_1_System_UInt32_ * comparer));
IL2CPP_REGISTER_METHOD(0x02AF8BE0, void, __ctor, (FastHashSet_1_System_UInt32_ * __this, int32_t capacity, IEqualityComparer_1_System_UInt32_ * comparer));
IL2CPP_REGISTER_METHOD(0x02B040D0, void, AddInitialUniqueValuesEnumerable, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * collection));
IL2CPP_REGISTER_METHOD(0x02B046F0, void, AddInitialEnumerableWithEnoughCapacity, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * collection));
IL2CPP_REGISTER_METHOD(0x02B04B10, void, AddInitialEnumerable, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * collection));
IL2CPP_REGISTER_METHOD(0x02AFA050, void, SetInitialCapacity, (FastHashSet_1_System_UInt32_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02B054A0, void, SwitchToHashing, (FastHashSet_1_System_UInt32_ * __this, int32_t capacityIncrease));
IL2CPP_REGISTER_METHOD(0x02B056F0, void, InitHashing, (FastHashSet_1_System_UInt32_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x04794E00, FastHashSet_1_System_UInt32__InitHashing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02AFA950, void, CreateNoHashArray, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02AFA9A0, void, CalcUsedItemsLoadFactorThreshold, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02AFA9F0, void, CopyTo, (FastHashSet_1_System_UInt32_ * __this, UInt32__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x02AFAA30, void, CopyTo, (FastHashSet_1_System_UInt32_ * __this, UInt32__Array * array));
IL2CPP_REGISTER_METHOD(0x02B05D30, void, CopyTo, (FastHashSet_1_System_UInt32_ * __this, UInt32__Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04766EF8, FastHashSet_1_System_UInt32__CopyTo_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB00, IEqualityComparer_1_System_UInt32_ *, get_Comparer, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Count, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02AFAD80, double, get_LoadFactor, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02AFAD90, int32_t, get_ExcessCapacity, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02AFAE00, int32_t, get_Capacity, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02AFAE60, int32_t, get_NextCapacityIncreaseSize, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_NextCapacityIncreaseAtCount, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02AFAEA0, bool, get_IsHashing, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02AFAEB0, int32_t, EnsureCapacity, (FastHashSet_1_System_UInt32_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02AFAFE0, bool, CheckForModSizeIncrease, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02AFB2E0, int32_t, GetNewSlotsArraySizeIncrease, (FastHashSet_1_System_UInt32_ * __this, int32_t * oldArraySize));
IL2CPP_REGISTER_METHOD(0x02AFB320, int32_t, GetNewBucketsArraySize, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02B06050, void, IncreaseCapacity, (FastHashSet_1_System_UInt32_ * __this, int32_t capacityIncrease));
IL2CPP_REGISTER_METHODINFO(0x04784C58, FastHashSet_1_System_UInt32__IncreaseCapacity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B06210, FastHashSet_1_T_TNode_System_UInt32___Array *, IncreaseCapacityNoCopy, (FastHashSet_1_System_UInt32_ * __this, int32_t capacityIncrease));
IL2CPP_REGISTER_METHODINFO(0x0470ED38, FastHashSet_1_System_UInt32__IncreaseCapacityNoCopy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B063A0, void, ResizeBucketsArrayForward, (FastHashSet_1_System_UInt32_ * __this, int32_t newBucketsArraySize));
IL2CPP_REGISTER_METHOD(0x02B06690, void, ResizeBucketsArrayForwardKeepMarks, (FastHashSet_1_System_UInt32_ * __this, int32_t newBucketsArraySize));
IL2CPP_REGISTER_METHOD(0x02AFBEA0, void, Clear, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02AFBF10, void, TrimExcess, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02B06990, void, System_Collections_Generic_ICollection_T__Add, (FastHashSet_1_System_UInt32_ * __this, uint32_t item));
IL2CPP_REGISTER_METHOD(0x02B069D0, bool, Add, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item));
IL2CPP_REGISTER_METHOD(0x02B07430, int32_t, AddToHashSetIfNotFound, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item, int32_t hash, bool * isFound));
IL2CPP_REGISTER_METHOD(0x02B076D0, int32_t, AddToHashSetIfNotFoundAndMark, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item, int32_t hash));
IL2CPP_REGISTER_METHOD(0x02B07950, bool, Contains, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item));
IL2CPP_REGISTER_METHOD(0x02B07BB0, bool, Contains, (FastHashSet_1_System_UInt32_ * __this, uint32_t item));
IL2CPP_REGISTER_METHOD(0x02B081E0, bool, RemoveIf, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item, Predicate_1_UInt32_ * removeIfPredIsTrue));
IL2CPP_REGISTER_METHODINFO(0x04729DA0, FastHashSet_1_System_UInt32__RemoveIf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B086C0, uint32_t *, FindOrAdd, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item, bool * isFound));
IL2CPP_REGISTER_METHOD(0x02B089C0, uint32_t *, Find, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item, bool * isFound));
IL2CPP_REGISTER_METHOD(0x02B08BF0, uint32_t *, FindAndRemoveIf, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item, Predicate_1_UInt32_ * removeIfPredIsTrue, bool * isFound, bool * isRemoved));
IL2CPP_REGISTER_METHODINFO(0x04774958, FastHashSet_1_System_UInt32__FindAndRemoveIf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B09100, void, FindInSlotsArray, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item, int32_t * foundNodeIndex, int32_t * priorNodeIndex, int32_t * bucketsIndex));
IL2CPP_REGISTER_METHOD(0x02B092E0, bool, FindInSlotsArray, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item, int32_t hash));
IL2CPP_REGISTER_METHOD(0x02B09420, bool, FindInNoHashArray, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item));
IL2CPP_REGISTER_METHOD(0x02B09500, void, UnmarkAllNextIndexValues, (FastHashSet_1_System_UInt32_ * __this, int32_t maxNodeIndex));
IL2CPP_REGISTER_METHOD(0x02B09560, void, UnmarkAllNextIndexValuesAndRemoveAnyMarkedOrUnmarked, (FastHashSet_1_System_UInt32_ * __this, bool removeMarked));
IL2CPP_REGISTER_METHOD(0x02B09720, FastHashSet_1_T_FoundType_System_UInt32_ *, FindInSlotsArrayAndMark, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item, int32_t * foundNodeIndex));
IL2CPP_REGISTER_METHOD(0x02B09970, List_1_Motvin_Collections_ChainLevelAndCount_ *, GetChainLevelsCounts, (FastHashSet_1_System_UInt32_ * __this, double * avgNodeVisitsPerChain));
IL2CPP_REGISTER_METHOD(0x02B0A0E0, void, ReorderChainedNodesToBeAdjacent, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02B0A260, bool, TryGetValue, (FastHashSet_1_System_UInt32_ * __this, uint32_t equalValue, uint32_t * actualValue));
IL2CPP_REGISTER_METHOD(0x02B0A470, void, UnionWith, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * other));
IL2CPP_REGISTER_METHODINFO(0x0472D980, FastHashSet_1_System_UInt32__UnionWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B0A9F0, void, ExceptWith, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * other));
IL2CPP_REGISTER_METHODINFO(0x0478F200, FastHashSet_1_System_UInt32__ExceptWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B0ACA0, void, IntersectWith, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * other));
IL2CPP_REGISTER_METHODINFO(0x047544A8, FastHashSet_1_System_UInt32__IntersectWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B0B270, bool, IsProperSubsetOf, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * other));
IL2CPP_REGISTER_METHODINFO(0x04778EF0, FastHashSet_1_System_UInt32__IsProperSubsetOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B0B990, bool, IsSubsetOf, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * other));
IL2CPP_REGISTER_METHODINFO(0x04743818, FastHashSet_1_System_UInt32__IsSubsetOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B0BED0, bool, IsProperSupersetOf, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * other));
IL2CPP_REGISTER_METHODINFO(0x04713FD0, FastHashSet_1_System_UInt32__IsProperSupersetOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B0C620, bool, IsSupersetOf, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * other));
IL2CPP_REGISTER_METHODINFO(0x04736268, FastHashSet_1_System_UInt32__IsSupersetOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B0CC80, bool, Overlaps, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * other));
IL2CPP_REGISTER_METHODINFO(0x047713A8, FastHashSet_1_System_UInt32__Overlaps__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B0CEE0, bool, SetEquals, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * other));
IL2CPP_REGISTER_METHODINFO(0x047240C0, FastHashSet_1_System_UInt32__SetEquals__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B0D9F0, void, SymmetricExceptWith, (FastHashSet_1_System_UInt32_ * __this, IEnumerable_1_System_UInt32_ * other));
IL2CPP_REGISTER_METHODINFO(0x0470E5D0, FastHashSet_1_System_UInt32__SymmetricExceptWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B0E000, void, RemoveIfNotMarked, (FastHashSet_1_System_UInt32_ * __this, uint32_t * item));
IL2CPP_REGISTER_METHOD(0x02B0E290, int32_t, RemoveWhere, (FastHashSet_1_System_UInt32_ * __this, Predicate_1_UInt32_ * match));
IL2CPP_REGISTER_METHODINFO(0x04742B28, FastHashSet_1_System_UInt32__RemoveWhere__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B03D00, IEqualityComparer_1_Motvin_Collections_FastHashSet_1__1 *, CreateSetComparer, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02B03E60, IEnumerator_1_System_UInt32_ *, GetEnumerator, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02B03E60, IEnumerator *, IEnumerable_GetEnumerator, (FastHashSet_1_System_UInt32_ * __this));
IL2CPP_REGISTER_METHOD(0x02B0E660, void, __cctor, (MethodInfo * method));
}
