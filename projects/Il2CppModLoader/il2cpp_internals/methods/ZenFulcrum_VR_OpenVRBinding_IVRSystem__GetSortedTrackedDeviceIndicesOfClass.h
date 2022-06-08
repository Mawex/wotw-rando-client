#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetSortedTrackedDeviceIndicesOfClass {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetSortedTrackedDeviceIndicesOfClass * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEE5C0, uint32_t, Invoke, (IVRSystem_GetSortedTrackedDeviceIndicesOfClass * __this, ETrackedDeviceClass__Enum eTrackedDeviceClass, UInt32__Array * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex));
IL2CPP_REGISTER_METHOD(0x02CEE9D0, IAsyncResult *, BeginInvoke, (IVRSystem_GetSortedTrackedDeviceIndicesOfClass * __this, ETrackedDeviceClass__Enum eTrackedDeviceClass, UInt32__Array * punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRSystem_GetSortedTrackedDeviceIndicesOfClass * __this, IAsyncResult * result));
}
