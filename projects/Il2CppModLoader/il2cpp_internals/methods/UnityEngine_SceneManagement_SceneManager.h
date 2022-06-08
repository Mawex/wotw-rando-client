#include <interception_macros.h>

namespace app::methods::UnityEngine::SceneManagement::SceneManager {
IL2CPP_REGISTER_METHOD(0x02979560, int32_t, get_sceneCount, ());
IL2CPP_REGISTER_METHOD(0x029795B0, int32_t, get_sceneCountInBuildSettings, ());
IL2CPP_REGISTER_METHOD(0x02979600, Scene, GetActiveScene, ());
IL2CPP_REGISTER_METHOD(0x02979660, bool, SetActiveScene, (Scene scene));
IL2CPP_REGISTER_METHOD(0x029796B0, Scene, GetSceneByPath, (String * scenePath));
IL2CPP_REGISTER_METHOD(0x02979720, Scene, GetSceneByName, (String * name));
IL2CPP_REGISTER_METHOD(0x02979790, Scene, GetSceneAt, (int32_t index));
IL2CPP_REGISTER_METHOD(0x029797F0, Scene, CreateScene, (String * sceneName, CreateSceneParameters parameters));
IL2CPP_REGISTER_METHOD(0x02979860, AsyncOperation_1 *, UnloadSceneAsyncInternal, (Scene scene, UnloadSceneOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x029798C0, AsyncOperation_1 *, LoadSceneAsyncNameIndexInternal, (String * sceneName, int32_t sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame));
IL2CPP_REGISTER_METHOD(0x02979940, AsyncOperation_1 *, UnloadSceneNameIndexInternal, (String * sceneName, int32_t sceneBuildIndex, bool immediately, UnloadSceneOptions__Enum options, bool * outSuccess));
IL2CPP_REGISTER_METHOD(0x029799D0, void, MoveGameObjectToScene, (GameObject * go, Scene scene));
IL2CPP_REGISTER_METHOD(0x02979A30, void, add_sceneLoaded, (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_ * value));
IL2CPP_REGISTER_METHOD(0x02979B30, void, remove_sceneLoaded, (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_ * value));
IL2CPP_REGISTER_METHOD(0x02979C30, void, add_activeSceneChanged, (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ * value));
IL2CPP_REGISTER_METHOD(0x02979D30, void, remove_activeSceneChanged, (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ * value));
IL2CPP_REGISTER_METHOD(0x02979E30, Scene, CreateScene, (String * sceneName));
IL2CPP_REGISTER_METHOD(0x02979EA0, void, LoadScene, (String * sceneName, LoadSceneMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x0241CD50, void, LoadScene, (String * sceneName));
IL2CPP_REGISTER_METHOD(0x02979EC0, Scene, LoadScene, (String * sceneName, LoadSceneParameters parameters));
IL2CPP_REGISTER_METHOD(0x02979FC0, void, LoadScene, (int32_t sceneBuildIndex, LoadSceneMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x0297A0C0, Scene, LoadScene, (int32_t sceneBuildIndex, LoadSceneParameters parameters));
IL2CPP_REGISTER_METHOD(0x0297A1B0, AsyncOperation_1 *, LoadSceneAsync, (int32_t sceneBuildIndex, LoadSceneMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x0297A220, AsyncOperation_1 *, LoadSceneAsync, (int32_t sceneBuildIndex, LoadSceneParameters parameters));
IL2CPP_REGISTER_METHOD(0x0297A280, AsyncOperation_1 *, LoadSceneAsync, (String * sceneName, LoadSceneMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x0297A300, AsyncOperation_1 *, LoadSceneAsync, (String * sceneName));
IL2CPP_REGISTER_METHOD(0x0297A370, AsyncOperation_1 *, LoadSceneAsync, (String * sceneName, LoadSceneParameters parameters));
IL2CPP_REGISTER_METHOD(0x0297A3E0, AsyncOperation_1 *, UnloadSceneAsync, (int32_t sceneBuildIndex));
IL2CPP_REGISTER_METHOD(0x0297A4C0, AsyncOperation_1 *, UnloadSceneAsync, (String * sceneName));
IL2CPP_REGISTER_METHOD(0x0297A530, AsyncOperation_1 *, UnloadSceneAsync, (Scene scene));
IL2CPP_REGISTER_METHOD(0x0297A590, void, Internal_SceneLoaded, (Scene scene, LoadSceneMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x0297A640, void, Internal_SceneUnloaded, (Scene scene));
IL2CPP_REGISTER_METHOD(0x0297A6E0, void, Internal_ActiveSceneChanged, (Scene previousActiveScene, Scene newActiveScene));
IL2CPP_REGISTER_METHOD(0x0297A790, void, GetActiveScene_Injected, (Scene * ret));
IL2CPP_REGISTER_METHOD(0x0297A7E0, bool, SetActiveScene_Injected, (Scene * scene));
IL2CPP_REGISTER_METHOD(0x0297A830, void, GetSceneByPath_Injected, (String * scenePath, Scene * ret));
IL2CPP_REGISTER_METHOD(0x0297A890, void, GetSceneByName_Injected, (String * name, Scene * ret));
IL2CPP_REGISTER_METHOD(0x0297A8F0, void, GetSceneAt_Injected, (int32_t index, Scene * ret));
IL2CPP_REGISTER_METHOD(0x0297A950, void, CreateScene_Injected, (String * sceneName, CreateSceneParameters * parameters, Scene * ret));
IL2CPP_REGISTER_METHOD(0x0297A9C0, AsyncOperation_1 *, UnloadSceneAsyncInternal_Injected, (Scene * scene, UnloadSceneOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x0297AA20, AsyncOperation_1 *, LoadSceneAsyncNameIndexInternal_Injected, (String * sceneName, int32_t sceneBuildIndex, LoadSceneParameters * parameters, bool mustCompleteNextFrame));
IL2CPP_REGISTER_METHOD(0x0297AAA0, void, MoveGameObjectToScene_Injected, (GameObject * go, Scene * scene));
}
