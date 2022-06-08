using namespace app;

namespace app::methods::System::Collections::Specialized::NotifyCollectionChangedEventArgs {
IL2CPP_REGISTER_METHOD(0x0249AF80, void, __ctor, (NotifyCollectionChangedEventArgs * __this, NotifyCollectionChangedAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x04736580, NotifyCollectionChangedEventArgs__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249B130, void, __ctor, (NotifyCollectionChangedEventArgs * __this, NotifyCollectionChangedAction__Enum action, Object * changedItem, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04755BA8, NotifyCollectionChangedEventArgs__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249B3A0, void, __ctor, (NotifyCollectionChangedEventArgs * __this, NotifyCollectionChangedAction__Enum action, Object * newItem, Object * oldItem, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04790910, NotifyCollectionChangedEventArgs__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249B620, void, __ctor, (NotifyCollectionChangedEventArgs * __this, NotifyCollectionChangedAction__Enum action, IList * newItems, IList * oldItems, int32_t startingIndex));
IL2CPP_REGISTER_METHODINFO(0x047525F0, NotifyCollectionChangedEventArgs__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0249B820, void, InitializeAddOrRemove, (NotifyCollectionChangedEventArgs * __this, NotifyCollectionChangedAction__Enum action, IList * changedItems, int32_t startingIndex));
IL2CPP_REGISTER_METHOD(0x0249B850, void, InitializeAdd, (NotifyCollectionChangedEventArgs * __this, NotifyCollectionChangedAction__Enum action, IList * newItems, int32_t newStartingIndex));
IL2CPP_REGISTER_METHOD(0x0249B930, void, InitializeRemove, (NotifyCollectionChangedEventArgs * __this, NotifyCollectionChangedAction__Enum action, IList * oldItems, int32_t oldStartingIndex));
IL2CPP_REGISTER_METHOD(0x0249BA10, void, InitializeMoveOrReplace, (NotifyCollectionChangedEventArgs * __this, NotifyCollectionChangedAction__Enum action, IList * newItems, IList * oldItems, int32_t startingIndex, int32_t oldStartingIndex));
}
