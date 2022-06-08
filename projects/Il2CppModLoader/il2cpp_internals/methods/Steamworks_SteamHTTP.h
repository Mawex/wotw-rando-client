#include <interception_macros.h>

namespace app::methods::Steamworks::SteamHTTP {
IL2CPP_REGISTER_METHOD(0x02780440, HTTPRequestHandle, CreateHTTPRequest, (EHTTPMethod__Enum eHTTPRequestMethod, String * pchAbsoluteURL));
IL2CPP_REGISTER_METHOD(0x02780680, bool, SetHTTPRequestContextValue, (HTTPRequestHandle hRequest, uint64_t ulContextValue));
IL2CPP_REGISTER_METHOD(0x027806C0, bool, SetHTTPRequestNetworkActivityTimeout, (HTTPRequestHandle hRequest, uint32_t unTimeoutSeconds));
IL2CPP_REGISTER_METHOD(0x02780700, bool, SetHTTPRequestHeaderValue, (HTTPRequestHandle hRequest, String * pchHeaderName, String * pchHeaderValue));
IL2CPP_REGISTER_METHOD(0x02780A40, bool, SetHTTPRequestGetOrPostParameter, (HTTPRequestHandle hRequest, String * pchParamName, String * pchParamValue));
IL2CPP_REGISTER_METHOD(0x02780D80, bool, SendHTTPRequest, (HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle));
IL2CPP_REGISTER_METHOD(0x02780DC0, bool, SendHTTPRequestAndStreamResponse, (HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle));
IL2CPP_REGISTER_METHOD(0x02780E00, bool, DeferHTTPRequest, (HTTPRequestHandle hRequest));
IL2CPP_REGISTER_METHOD(0x02780E30, bool, PrioritizeHTTPRequest, (HTTPRequestHandle hRequest));
IL2CPP_REGISTER_METHOD(0x02780E60, bool, GetHTTPResponseHeaderSize, (HTTPRequestHandle hRequest, String * pchHeaderName, uint32_t * unResponseHeaderSize));
IL2CPP_REGISTER_METHOD(0x02781090, bool, GetHTTPResponseHeaderValue, (HTTPRequestHandle hRequest, String * pchHeaderName, Byte__Array * pHeaderValueBuffer, uint32_t unBufferSize));
IL2CPP_REGISTER_METHOD(0x027812B0, bool, GetHTTPResponseBodySize, (HTTPRequestHandle hRequest, uint32_t * unBodySize));
IL2CPP_REGISTER_METHOD(0x027812F0, bool, GetHTTPResponseBodyData, (HTTPRequestHandle hRequest, Byte__Array * pBodyDataBuffer, uint32_t unBufferSize));
IL2CPP_REGISTER_METHOD(0x02781340, bool, GetHTTPStreamingResponseBodyData, (HTTPRequestHandle hRequest, uint32_t cOffset, Byte__Array * pBodyDataBuffer, uint32_t unBufferSize));
IL2CPP_REGISTER_METHOD(0x027813A0, bool, ReleaseHTTPRequest, (HTTPRequestHandle hRequest));
IL2CPP_REGISTER_METHOD(0x027813D0, bool, GetHTTPDownloadProgressPct, (HTTPRequestHandle hRequest, float * pflPercentOut));
IL2CPP_REGISTER_METHOD(0x02781410, bool, SetHTTPRequestRawPostBody, (HTTPRequestHandle hRequest, String * pchContentType, Byte__Array * pubBody, uint32_t unBodyLen));
IL2CPP_REGISTER_METHOD(0x02781630, HTTPCookieContainerHandle, CreateCookieContainer, (bool bAllowResponsesToModify));
IL2CPP_REGISTER_METHOD(0x027816E0, bool, ReleaseCookieContainer, (HTTPCookieContainerHandle hCookieContainer));
IL2CPP_REGISTER_METHOD(0x02781710, bool, SetCookie, (HTTPCookieContainerHandle hCookieContainer, String * pchHost, String * pchUrl, String * pchCookie));
IL2CPP_REGISTER_METHOD(0x02781B80, bool, SetHTTPRequestCookieContainer, (HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer));
IL2CPP_REGISTER_METHOD(0x02781BC0, bool, SetHTTPRequestUserAgentInfo, (HTTPRequestHandle hRequest, String * pchUserAgentInfo));
IL2CPP_REGISTER_METHOD(0x02781DE0, bool, SetHTTPRequestRequiresVerifiedCertificate, (HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate));
IL2CPP_REGISTER_METHOD(0x02781E20, bool, SetHTTPRequestAbsoluteTimeoutMS, (HTTPRequestHandle hRequest, uint32_t unMilliseconds));
IL2CPP_REGISTER_METHOD(0x02781E60, bool, GetHTTPRequestWasTimedOut, (HTTPRequestHandle hRequest, bool * pbWasTimedOut));
}
