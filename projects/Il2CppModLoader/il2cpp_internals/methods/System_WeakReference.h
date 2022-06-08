using namespace app;

namespace app::methods::System::WeakReference {
IL2CPP_REGISTER_METHOD(0x0314DC40, void, AllocateHandle, (WeakReference * __this, Object * target));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WeakReference * __this));
IL2CPP_REGISTER_METHOD(0x0314DC70, void, __ctor, (WeakReference * __this, Object * target));
IL2CPP_REGISTER_METHOD(0x0314DCA0, void, __ctor, (WeakReference * __this, Object * target, bool trackResurrection));
IL2CPP_REGISTER_METHOD(0x0314DCD0, void, __ctor, (WeakReference * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04761370, WeakReference__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0314DE10, bool, get_IsAlive, (WeakReference * __this));
IL2CPP_REGISTER_METHOD(0x0314DE30, Object *, get_Target, (WeakReference * __this));
IL2CPP_REGISTER_METHOD(0x0314DE40, void, set_Target, (WeakReference * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_TrackResurrection, (WeakReference * __this));
IL2CPP_REGISTER_METHOD(0x0314DE50, void, Finalize, (WeakReference * __this));
IL2CPP_REGISTER_METHOD(0x0314DED0, void, GetObjectData, (WeakReference * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04793B28, WeakReference_GetObjectData__MethodInfo);
}
