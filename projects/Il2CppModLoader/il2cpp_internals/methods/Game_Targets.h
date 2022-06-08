using namespace app;

namespace app::methods::Game::Targets {
IL2CPP_REGISTER_METHOD(0x00682C30, IEnumerable_1_IAttackable_ *, get_Attackables, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00682DB0, void, AdjustAttackableIteratorsForRemovedAttackable, (int32_t removedIndex));
IL2CPP_REGISTER_METHOD(0x00682F30, void, RegisterAttackableConsumer, (IAttackableConsumer * consumer));
IL2CPP_REGISTER_METHOD(0x00683360, void, UnregisterAttackableConsumer, (IAttackableConsumer * consumer));
IL2CPP_REGISTER_METHOD(0x006836C0, void, InitAttackablesList, (List_1_IAttackable_ * list, IAttackableConsumer * consumer));
IL2CPP_REGISTER_METHOD(0x006838C0, void, AddToConsumerLists, (IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x00683A80, void, RemoveFromConsumerLists, (IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x00683C40, List_1_IAttackable_ *, GetAttackableConsumerList, (IAttackableConsumer * consumer));
IL2CPP_REGISTER_METHOD(0x00683E10, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006840F0, void, AddAttackable, (IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x00684210, bool, RemoveAttackable, (IAttackable * attackable));
IL2CPP_REGISTER_METHOD(0x00684370, void, __cctor, (MethodInfo * method));
}
