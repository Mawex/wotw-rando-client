#include <interception_macros.h>

namespace app::methods::Moon::Driver::UpdateManager {
IL2CPP_REGISTER_METHOD(0x031371A0, void, __ctor, (UpdateManager * __this, UpdateType__Enum updateType, UpdateManager__Array * managers));
IL2CPP_REGISTER_METHOD(0x031376B0, int32_t, get_EntryCount, (UpdateManager * __this));
IL2CPP_REGISTER_METHOD(0x03137740, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_EnableProfiling, (UpdateManager * __this));
IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_EnableProfiling, (UpdateManager * __this, bool value));
IL2CPP_REGISTER_METHOD(0x03137810, void, AddHandler, (UpdateManager * __this, IUpdateHandlerBase * updateHandler, int32_t executionOrder));
IL2CPP_REGISTER_METHOD(0x03137A30, void, RemoveHandler, (UpdateManager * __this, IUpdateHandlerBase * drivable));
IL2CPP_REGISTER_METHOD(0x03137BB0, void, AddNewEntriesToActiveEntries, (UpdateManager * __this, int32_t updCnt));
IL2CPP_REGISTER_METHOD(0x03137CD0, void, AddNewEntriesToActiveEntriesAndEntriesToUpdate, (UpdateManager * __this, int32_t updCnt));
IL2CPP_REGISTER_METHOD(0x03137E40, void, Update, (UpdateManager * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x031381C0, void, UpdateHandlerEntry, (UpdateManager * __this, UpdateManager_Entry * entry, float deltaTime));
IL2CPP_REGISTER_METHOD(0x03138690, bool, ListIsValidForBinarySearch, (List_1_Moon_Driver_UpdateManager_Entry_ * entryList, IComparer_1_Moon_Driver_UpdateManager_Entry_ * cmp));
IL2CPP_REGISTER_METHOD(0x03138830, void, AddEntryByInsertSort, (List_1_Moon_Driver_UpdateManager_Entry_ * entryList, UpdateManager_Entry * entry, IComparer_1_Moon_Driver_UpdateManager_Entry_ * cmp));
IL2CPP_REGISTER_METHOD(0x031388F0, void, RemoveEntry, (UpdateManager * __this, UpdateManager_Entry * entry));
IL2CPP_REGISTER_METHOD(0x03138B00, void, MoveEntryToCorrectManager, (UpdateManager * __this, UpdateManager_GenericEntry * entry));
IL2CPP_REGISTER_METHOD(0x03138C60, UpdateManager_Entry *, GetEntryFromPool, (IUpdateHandlerBase * handler, UpdateType__Enum updateType));
IL2CPP_REGISTER_METHOD(0x03139020, void, ReturnEntryToPool, (UpdateManager_Entry * entry));
IL2CPP_REGISTER_METHOD(0x031391F0, void, DumpEntries, (UpdateManager * __this, StreamWriter * sw));
IL2CPP_REGISTER_METHOD(0x0313A040, void, __cctor, ());
}
