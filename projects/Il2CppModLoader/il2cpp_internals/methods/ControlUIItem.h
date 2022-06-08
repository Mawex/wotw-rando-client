using namespace app;

namespace app::methods::ControlUIItem {
IL2CPP_REGISTER_METHOD(0x011F07F0, void, SetItemContext, (ControlUIItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x011F08D0, void, UpdateDisplay, (ControlUIItem * __this));
IL2CPP_REGISTER_METHOD(0x011F0E80, void, OnItemContextDirty, (ControlUIItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x011F0E90, void, OnHighlighted, (ControlUIItem * __this));
IL2CPP_REGISTER_METHODINFO(0x047375E8, ControlUIItem_OnHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011F0EF0, void, OnUnhighlighted, (ControlUIItem * __this));
IL2CPP_REGISTER_METHODINFO(0x04785090, ControlUIItem_OnUnhighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011F0F50, void, FixedUpdate, (ControlUIItem * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ControlUIItem * __this));
}
