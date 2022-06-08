#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::ParticleContentValidator {
IL2CPP_REGISTER_METHOD(0x016D5510, void, __ctor, (ParticleContentValidator * __this, XmlSchemaContentType__Enum contentType));
IL2CPP_REGISTER_METHOD(0x016D5520, void, __ctor, (ParticleContentValidator * __this, XmlSchemaContentType__Enum contentType, bool enableUpaCheck));
IL2CPP_REGISTER_METHOD(0x016D55D0, void, InitValidation, (ParticleContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHODINFO(0x047814F8, ParticleContentValidator_InitValidation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016D5620, Object *, ValidateElement, (ParticleContentValidator * __this, XmlQualifiedName * name, ValidationState * context, int32_t * errorCode));
IL2CPP_REGISTER_METHODINFO(0x04771B00, ParticleContentValidator_ValidateElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016D5670, bool, CompleteValidation, (ParticleContentValidator * __this, ValidationState * context));
IL2CPP_REGISTER_METHODINFO(0x0471C388, ParticleContentValidator_CompleteValidation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016D56C0, void, Start, (ParticleContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x016D5AC0, void, OpenGroup, (ParticleContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x016D5AF0, void, CloseGroup, (ParticleContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x016D5C90, bool, Exists, (ParticleContentValidator * __this, XmlQualifiedName * name));
IL2CPP_REGISTER_METHOD(0x016D5CD0, void, AddName, (ParticleContentValidator * __this, XmlQualifiedName * name, Object * particle));
IL2CPP_REGISTER_METHOD(0x016D5E70, void, AddNamespaceList, (ParticleContentValidator * __this, NamespaceList * namespaceList, Object * particle));
IL2CPP_REGISTER_METHOD(0x016D6000, void, AddLeafNode, (ParticleContentValidator * __this, SyntaxTreeNode * node));
IL2CPP_REGISTER_METHOD(0x016D6150, void, AddChoice, (ParticleContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x016D6330, void, AddSequence, (ParticleContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x016D6510, void, AddStar, (ParticleContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x016D6660, void, AddPlus, (ParticleContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x016D67B0, void, AddQMark, (ParticleContentValidator * __this));
IL2CPP_REGISTER_METHOD(0x016D6900, void, AddLeafRange, (ParticleContentValidator * __this, Decimal min, Decimal max));
IL2CPP_REGISTER_METHOD(0x016D6B60, void, Closure, (ParticleContentValidator * __this, InteriorNode * node));
IL2CPP_REGISTER_METHOD(0x016D6D50, ContentValidator *, Finish, (ParticleContentValidator * __this, bool useDFA));
IL2CPP_REGISTER_METHOD(0x016D7C50, BitSet__Array *, CalculateTotalFollowposForRangeNodes, (ParticleContentValidator * __this, BitSet * firstpos, BitSet__Array * followpos, BitSet * * posWithRangeTerminals));
IL2CPP_REGISTER_METHOD(0x016D8160, void, CheckCMUPAWithLeafRangeNodes, (ParticleContentValidator * __this, BitSet * curpos));
IL2CPP_REGISTER_METHODINFO(0x047753A0, ParticleContentValidator_CheckCMUPAWithLeafRangeNodes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016D8350, BitSet *, GetApplicableMinMaxFollowPos, (ParticleContentValidator * __this, BitSet * curpos, BitSet * posWithRangeTerminals, BitSet__Array * minmaxFollowPos));
IL2CPP_REGISTER_METHOD(0x016D8610, void, CheckUniqueParticleAttribution, (ParticleContentValidator * __this, BitSet * firstpos, BitSet__Array * followpos));
IL2CPP_REGISTER_METHOD(0x016D86D0, void, CheckUniqueParticleAttribution, (ParticleContentValidator * __this, BitSet * curpos));
IL2CPP_REGISTER_METHODINFO(0x04796948, ParticleContentValidator_CheckUniqueParticleAttribution_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016D8940, Int32__Array__Array *, BuildTransitionTable, (ParticleContentValidator * __this, BitSet * firstpos, BitSet__Array * followpos, int32_t endMarkerPos));
}
