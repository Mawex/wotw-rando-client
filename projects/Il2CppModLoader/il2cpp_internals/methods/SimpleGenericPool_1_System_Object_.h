using namespace app;

namespace app::methods::SimpleGenericPool_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x01D17E40, void, __ctor, (SimpleGenericPool_1_System_Object_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x01D17FB0, SimpleGenericPool_1_T_PoolItem_System_Object_, GetInstance, (SimpleGenericPool_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D181A0, void, Destroy, (SimpleGenericPool_1_System_Object_ * __this, SimpleGenericPool_1_T_PoolItem_System_Object_ poolItem));
IL2CPP_REGISTER_METHOD(0x01D18270, SimpleGenericPool_1_T_PoolItem_System_Object_, AddNewToPool, (SimpleGenericPool_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x01D18320, void, TakeFromPool, (SimpleGenericPool_1_System_Object_ * __this, SimpleGenericPool_1_T_PoolItem_System_Object_ * item, int32_t index));
}
