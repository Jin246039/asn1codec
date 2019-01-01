#ifndef ASN1CODEC_ASN1_H
#define ASN1CODEC_ASN1_H

namespace asn1codec {
namespace asn1 {

enum class ASN1Type {
  BooleanType,
  IntegerType,
  EnumeratedType,
  RealType = 9,
  BitStringType,
  OctetStringType = 4,
  NullType = 5,
  SequenceType,
  SequenceOfType,
  SetType,
  SetOfType,
  ChoiceType,
  SelectionType,
  TaggedType,
  ObjectIdentifierType,
  RelativeOIDType,
  IRIType,
  RelativeIRIType,
  EmbeddedPDVType,
  ExternalType,
  TimeType,
  CharacterStringType,
  RestrictedCharacterStringType,
};

} /* asn1 */

} /* asn1codec */
#endif  // ASN1CODEC_ASN1_H
