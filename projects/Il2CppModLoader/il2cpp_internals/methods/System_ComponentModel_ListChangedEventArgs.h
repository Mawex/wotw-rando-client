using namespace app;

namespace app::methods::System::ComponentModel::ListChangedEventArgs {
IL2CPP_REGISTER_METHOD(0x01FF49E0, void, __ctor, (ListChangedEventArgs * __this, ListChangedType__Enum listChangedType, int32_t newIndex));
IL2CPP_REGISTER_METHOD(0x01FF4A00, void, __ctor, (ListChangedEventArgs * __this, ListChangedType__Enum listChangedType, int32_t newIndex, PropertyDescriptor * propDesc));
IL2CPP_REGISTER_METHOD(0x01FF4A50, void, __ctor, (ListChangedEventArgs * __this, ListChangedType__Enum listChangedType, PropertyDescriptor * propDesc));
IL2CPP_REGISTER_METHOD(0x01FF4B00, void, __ctor, (ListChangedEventArgs * __this, ListChangedType__Enum listChangedType, int32_t newIndex, int32_t oldIndex));
IL2CPP_REGISTER_METHOD(0x002FC6D0, ListChangedType__Enum, get_ListChangedType, (ListChangedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_NewIndex, (ListChangedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_OldIndex, (ListChangedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, PropertyDescriptor *, get_PropertyDescriptor, (ListChangedEventArgs * __this));
}
