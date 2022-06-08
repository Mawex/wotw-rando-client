#include <interception_macros.h>

namespace app::methods::System::Net::ConnectionPool {
IL2CPP_REGISTER_METHOD(0x01E99BC0, Mutex *, get_CreationMutex, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E99C90, ManualResetEvent *, get_ErrorEvent, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E99D60, Semaphore_1 *, get_Semaphore, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E99E30, void, __ctor, (ConnectionPool * __this, ServicePoint * servicePoint, int32_t maxPoolSize, int32_t minPoolSize, int32_t idleTimeout, CreateConnectionDelegate * createConnectionCallback));
IL2CPP_REGISTER_METHOD(0x01E99FA0, void, Initialize, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E9A700, void, QueueRequest, (ConnectionPool * __this, ConnectionPool_AsyncConnectionPoolRequest * asyncRequest));
IL2CPP_REGISTER_METHOD(0x01E9AA60, void, AsyncThread, (ConnectionPool * __this));
IL2CPP_REGISTER_METHODINFO(0x0470B638, ConnectionPool_AsyncThread__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_Count, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, ServicePoint *, get_ServicePoint, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_MaxPoolSize, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x006DC050, int32_t, get_MinPoolSize, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E9AEC0, bool, get_ErrorOccurred, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E9AED0, void, CleanupCallbackWrapper, (TimerThread_Timer * timer, int32_t timeNoticed, Object * context));
IL2CPP_REGISTER_METHODINFO(0x04746DE8, ConnectionPool_CleanupCallbackWrapper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9B0B0, void, ForceCleanup, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E9B220, void, CleanupCallback, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E9B460, PooledStream *, Create, (ConnectionPool * __this, CreateConnectionDelegate * createConnectionCallback));
IL2CPP_REGISTER_METHODINFO(0x0478A330, ConnectionPool_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9B6D0, void, Destroy, (ConnectionPool * __this, PooledStream * pooledStream));
IL2CPP_REGISTER_METHOD(0x01E9B870, void, CancelErrorCallbackWrapper, (TimerThread_Timer * timer, int32_t timeNoticed, Object * context));
IL2CPP_REGISTER_METHODINFO(0x047376D0, ConnectionPool_CancelErrorCallbackWrapper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9B9D0, void, CancelErrorCallback, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E9BA30, PooledStream *, GetFromPool, (ConnectionPool * __this, Object * owningObject));
IL2CPP_REGISTER_METHOD(0x01E9BB90, PooledStream *, Get, (ConnectionPool * __this, Object * owningObject, int32_t result, bool * continueLoop, WaitHandle__Array * * waitHandles));
IL2CPP_REGISTER_METHODINFO(0x0474FAA0, ConnectionPool_Get__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9BF00, void, Abort, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E9C110, PooledStream *, GetConnection, (ConnectionPool * __this, Object * owningObject, GeneralAsyncDelegate * asyncCallback, int32_t creationTimeout));
IL2CPP_REGISTER_METHODINFO(0x0478D718, ConnectionPool_GetConnection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9C470, void, PutConnection, (ConnectionPool * __this, PooledStream * pooledStream, Object * owningObject, int32_t creationTimeout));
IL2CPP_REGISTER_METHOD(0x01E9C490, void, PutConnection, (ConnectionPool * __this, PooledStream * pooledStream, Object * owningObject, int32_t creationTimeout, bool canReuse));
IL2CPP_REGISTER_METHODINFO(0x0470E788, ConnectionPool_PutConnection_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E9C840, void, PutNew, (ConnectionPool * __this, PooledStream * pooledStream));
IL2CPP_REGISTER_METHOD(0x01E9C8C0, bool, ReclaimEmancipatedObjects, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E9CBC0, PooledStream *, UserCreateRequest, (ConnectionPool * __this));
IL2CPP_REGISTER_METHOD(0x01E9CC20, void, __cctor, ());
}
