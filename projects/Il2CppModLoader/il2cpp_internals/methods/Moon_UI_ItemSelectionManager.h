using namespace app;

namespace app::methods::Moon::UI::ItemSelectionManager {
IL2CPP_REGISTER_METHOD(0x00D251B0, void, OnDrawGizmosSelected, (ItemSelectionManager * __this));
IL2CPP_REGISTER_METHOD(0x00D25220, void, RefreshInteractables, (ItemSelectionManager * __this));
IL2CPP_REGISTER_METHOD(0x00D25490, void, RecalculateNavigation, (ItemSelectionManager * __this));
IL2CPP_REGISTER_METHOD(0x00D256E0, bool, NavigationDataExists, (ItemSelectionManager * __this, UIComponent * from, UIComponent * to));
IL2CPP_REGISTER_METHOD(0x00D258C0, UIComponent *, CheckNeighbour, (ItemSelectionManager * __this, UIComponent * current, Vector2 direction));
IL2CPP_REGISTER_METHOD(0x00D25F50, int32_t, GetNextActiveInteractableIndex, (ItemSelectionManager * __this));
IL2CPP_REGISTER_METHOD(0x00D26080, int32_t, GetPreviousActiveInteractableIndex, (ItemSelectionManager * __this));
IL2CPP_REGISTER_METHOD(0x00D261C0, void, OnUserInput, (ItemSelectionManager * __this));
IL2CPP_REGISTER_METHOD(0x00D266F0, UIInteractable *, get_MenuItemUnderCursor, (ItemSelectionManager * __this));
IL2CPP_REGISTER_METHOD(0x00D26B40, void, OnSelected, (ItemSelectionManager * __this));
IL2CPP_REGISTER_METHOD(0x00D26C10, void, OnDeselected, (ItemSelectionManager * __this));
IL2CPP_REGISTER_METHOD(0x00D26CF0, void, RegisterInteractable, (ItemSelectionManager * __this, UIInteractable * interactable));
IL2CPP_REGISTER_METHOD(0x00D26D90, void, UnregisterInteractable, (ItemSelectionManager * __this, UIInteractable * interactable));
IL2CPP_REGISTER_METHOD(0x00D26E30, void, __ctor, (ItemSelectionManager * __this));
}
