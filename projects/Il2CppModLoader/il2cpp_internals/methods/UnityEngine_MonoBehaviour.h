#include <interception_macros.h>

namespace app::methods::UnityEngine::MonoBehaviour {
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (MonoBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0253C7F0, bool, IsInvoking, (MonoBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0253C840, void, CancelInvoke, (MonoBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0253C890, void, Invoke, (MonoBehaviour * __this, String * methodName, float time));
IL2CPP_REGISTER_METHOD(0x0253C8B0, void, InvokeRepeating, (MonoBehaviour * __this, String * methodName, float time, float repeatRate));
IL2CPP_REGISTER_METHODINFO(0x047531A8, MonoBehaviour_InvokeRepeating__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0253C9B0, void, CancelInvoke, (MonoBehaviour * __this, String * methodName));
IL2CPP_REGISTER_METHOD(0x0253CA10, bool, IsInvoking, (MonoBehaviour * __this, String * methodName));
IL2CPP_REGISTER_METHOD(0x0253CA70, Coroutine *, StartCoroutine, (MonoBehaviour * __this, String * methodName));
IL2CPP_REGISTER_METHOD(0x0253CC00, Coroutine *, StartCoroutine, (MonoBehaviour * __this, String * methodName, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047411D8, MonoBehaviour_StartCoroutine_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0253CD90, Coroutine *, StartCoroutine, (MonoBehaviour * __this, IEnumerator * routine));
IL2CPP_REGISTER_METHODINFO(0x0476BFA0, MonoBehaviour_StartCoroutine_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0253CF10, Coroutine *, StartCoroutine_Auto, (MonoBehaviour * __this, IEnumerator * routine));
IL2CPP_REGISTER_METHOD(0x0253CF20, void, StopCoroutine, (MonoBehaviour * __this, IEnumerator * routine));
IL2CPP_REGISTER_METHODINFO(0x04740548, MonoBehaviour_StopCoroutine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0253D0A0, void, StopCoroutine, (MonoBehaviour * __this, Coroutine * routine));
IL2CPP_REGISTER_METHODINFO(0x04749F50, MonoBehaviour_StopCoroutine_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0253D220, void, StopCoroutine, (MonoBehaviour * __this, String * methodName));
IL2CPP_REGISTER_METHOD(0x0253D280, void, StopAllCoroutines, (MonoBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0253D2D0, bool, get_useGUILayout, (MonoBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0253D320, void, set_useGUILayout, (MonoBehaviour * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0253D380, void, print, (Object * message));
IL2CPP_REGISTER_METHOD(0x0253C840, void, Internal_CancelInvokeAll, (MonoBehaviour * self));
IL2CPP_REGISTER_METHOD(0x0253C7F0, bool, Internal_IsInvokingAll, (MonoBehaviour * self));
IL2CPP_REGISTER_METHOD(0x0253D420, void, InvokeDelayed, (MonoBehaviour * self, String * methodName, float time, float repeatRate));
IL2CPP_REGISTER_METHOD(0x0253C9B0, void, CancelInvoke, (MonoBehaviour * self, String * methodName));
IL2CPP_REGISTER_METHOD(0x0253CA10, bool, IsInvoking, (MonoBehaviour * self, String * methodName));
IL2CPP_REGISTER_METHOD(0x0253D4A0, bool, IsObjectMonoBehaviour, (Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x0253D4F0, Coroutine *, StartCoroutineManaged, (MonoBehaviour * __this, String * methodName, Object * value));
IL2CPP_REGISTER_METHOD(0x0253D560, Coroutine *, StartCoroutineManaged2, (MonoBehaviour * __this, IEnumerator * enumerator));
IL2CPP_REGISTER_METHOD(0x0253D5C0, void, StopCoroutineManaged, (MonoBehaviour * __this, Coroutine * routine));
IL2CPP_REGISTER_METHOD(0x0253D620, void, StopCoroutineFromEnumeratorManaged, (MonoBehaviour * __this, IEnumerator * routine));
IL2CPP_REGISTER_METHOD(0x0253D680, String *, GetScriptClassName, (MonoBehaviour * __this));
}
