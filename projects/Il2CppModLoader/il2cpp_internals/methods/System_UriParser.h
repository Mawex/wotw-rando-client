#include <interception_macros.h>

namespace app::methods::System::UriParser {
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_SchemeName, (UriParser * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_DefaultPort, (UriParser * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, UriParser *, OnNewUri, (UriParser * __this));
IL2CPP_REGISTER_METHOD(0x0319DE30, void, InitializeAndValidate, (UriParser * __this, Uri * uri, UriFormatException * * parsingError));
IL2CPP_REGISTER_METHOD(0x0319DF20, String *, Resolve, (UriParser * __this, Uri * baseUri, Uri * relativeUri, UriFormatException * * parsingError));
IL2CPP_REGISTER_METHODINFO(0x04703B48, UriParser_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0319E150, String *, GetComponents, (UriParser * __this, Uri * uri, UriComponents__Enum components, UriFormat__Enum format));
IL2CPP_REGISTER_METHODINFO(0x047231F0, UriParser_GetComponents__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0319E3A0, bool, IsWellFormedOriginalString, (UriParser * __this, Uri * uri));
IL2CPP_REGISTER_METHOD(0x0319E3C0, bool, get_ShouldUseLegacyV2Quirks, ());
IL2CPP_REGISTER_METHOD(0x0319E470, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x002FC6D0, UriSyntaxFlags__Enum, get_Flags, (UriParser * __this));
IL2CPP_REGISTER_METHOD(0x0319FCB0, bool, NotAny, (UriParser * __this, UriSyntaxFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x0319FCF0, bool, InFact, (UriParser * __this, UriSyntaxFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x0319FD30, bool, IsAllSet, (UriParser * __this, UriSyntaxFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x0319FD70, bool, IsFullMatch, (UriParser * __this, UriSyntaxFlags__Enum flags, UriSyntaxFlags__Enum expected));
IL2CPP_REGISTER_METHOD(0x0319FDB0, void, __ctor, (UriParser * __this, UriSyntaxFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x0319FE50, UriParser *, FindOrFetchAsUnknownV1Syntax, (String * lwrCaseScheme));
IL2CPP_REGISTER_METHOD(0x031A03F0, UriParser *, GetSyntax, (String * lwrCaseScheme));
IL2CPP_REGISTER_METHOD(0x031A05C0, bool, get_IsSimple, (UriParser * __this));
IL2CPP_REGISTER_METHOD(0x031A05D0, UriParser *, InternalOnNewUri, (UriParser * __this));
IL2CPP_REGISTER_METHOD(0x031A0620, void, InternalValidate, (UriParser * __this, Uri * thisUri, UriFormatException * * parsingError));
IL2CPP_REGISTER_METHOD(0x029449B0, String *, InternalResolve, (UriParser * __this, Uri * thisBaseUri, Uri * uriLink, UriFormatException * * parsingError));
IL2CPP_REGISTER_METHOD(0x031A0640, String *, InternalGetComponents, (UriParser * __this, Uri * thisUri, UriComponents__Enum uriComponents, UriFormat__Enum uriFormat));
IL2CPP_REGISTER_METHOD(0x00C53A30, bool, InternalIsWellFormedOriginalString, (UriParser * __this, Uri * thisUri));
}
