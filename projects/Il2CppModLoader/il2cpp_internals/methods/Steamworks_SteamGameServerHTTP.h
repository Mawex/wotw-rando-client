using namespace app;

namespace app::methods::Steamworks::SteamGameServerHTTP {
IL2CPP_REGISTER_METHOD(0x027F9090, HTTPRequestHandle, CreateHTTPRequest, (EHTTPMethod__Enum eHTTPRequestMethod, String * pchAbsoluteURL));
IL2CPP_REGISTER_METHOD(0x027F92D0, bool, SetHTTPRequestContextValue, (HTTPRequestHandle hRequest, uint64_t ulContextValue));
IL2CPP_REGISTER_METHOD(0x027F9310, bool, SetHTTPRequestNetworkActivityTimeout, (HTTPRequestHandle hRequest, uint32_t unTimeoutSeconds));
IL2CPP_REGISTER_METHOD(0x027F9350, bool, SetHTTPRequestHeaderValue, (HTTPRequestHandle hRequest, String * pchHeaderName, String * pchHeaderValue));
IL2CPP_REGISTER_METHOD(0x027F9690, bool, SetHTTPRequestGetOrPostParameter, (HTTPRequestHandle hRequest, String * pchParamName, String * pchParamValue));
IL2CPP_REGISTER_METHOD(0x027F99D0, bool, SendHTTPRequest, (HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle));
IL2CPP_REGISTER_METHOD(0x027F9A10, bool, SendHTTPRequestAndStreamResponse, (HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle));
IL2CPP_REGISTER_METHOD(0x027F9A50, bool, DeferHTTPRequest, (HTTPRequestHandle hRequest));
IL2CPP_REGISTER_METHOD(0x027F9A80, bool, PrioritizeHTTPRequest, (HTTPRequestHandle hRequest));
IL2CPP_REGISTER_METHOD(0x027F9AB0, bool, GetHTTPResponseHeaderSize, (HTTPRequestHandle hRequest, String * pchHeaderName, uint32_t * unResponseHeaderSize));
IL2CPP_REGISTER_METHOD(0x027F9CE0, bool, GetHTTPResponseHeaderValue, (HTTPRequestHandle hRequest, String * pchHeaderName, Byte__Array * pHeaderValueBuffer, uint32_t unBufferSize));
IL2CPP_REGISTER_METHOD(0x027F9F00, bool, GetHTTPResponseBodySize, (HTTPRequestHandle hRequest, uint32_t * unBodySize));
IL2CPP_REGISTER_METHOD(0x027F9F40, bool, GetHTTPResponseBodyData, (HTTPRequestHandle hRequest, Byte__Array * pBodyDataBuffer, uint32_t unBufferSize));
IL2CPP_REGISTER_METHOD(0x027F9F90, bool, GetHTTPStreamingResponseBodyData, (HTTPRequestHandle hRequest, uint32_t cOffset, Byte__Array * pBodyDataBuffer, uint32_t unBufferSize));
IL2CPP_REGISTER_METHOD(0x027F9FF0, bool, ReleaseHTTPRequest, (HTTPRequestHandle hRequest));
IL2CPP_REGISTER_METHOD(0x027FA020, bool, GetHTTPDownloadProgressPct, (HTTPRequestHandle hRequest, float * pflPercentOut));
IL2CPP_REGISTER_METHOD(0x027FA060, bool, SetHTTPRequestRawPostBody, (HTTPRequestHandle hRequest, String * pchContentType, Byte__Array * pubBody, uint32_t unBodyLen));
IL2CPP_REGISTER_METHOD(0x027FA280, HTTPCookieContainerHandle, CreateCookieContainer, (bool bAllowResponsesToModify));
IL2CPP_REGISTER_METHOD(0x027FA330, bool, ReleaseCookieContainer, (HTTPCookieContainerHandle hCookieContainer));
IL2CPP_REGISTER_METHOD(0x027FA360, bool, SetCookie, (HTTPCookieContainerHandle hCookieContainer, String * pchHost, String * pchUrl, String * pchCookie));
IL2CPP_REGISTER_METHOD(0x027FA7D0, bool, SetHTTPRequestCookieContainer, (HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer));
IL2CPP_REGISTER_METHOD(0x027FA810, bool, SetHTTPRequestUserAgentInfo, (HTTPRequestHandle hRequest, String * pchUserAgentInfo));
IL2CPP_REGISTER_METHOD(0x027FAA30, bool, SetHTTPRequestRequiresVerifiedCertificate, (HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate));
IL2CPP_REGISTER_METHOD(0x027FAA70, bool, SetHTTPRequestAbsoluteTimeoutMS, (HTTPRequestHandle hRequest, uint32_t unMilliseconds));
IL2CPP_REGISTER_METHOD(0x027FAAB0, bool, GetHTTPRequestWasTimedOut, (HTTPRequestHandle hRequest, bool * pbWasTimedOut));
}
