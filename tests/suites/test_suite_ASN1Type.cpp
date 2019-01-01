#include <catch2/catch.hpp>

#include <asn1codec/asn1.hpp>

TEST_CASE("ASN1Type::Constructor", "ASN1Type") {
  asn1codec::asn1::ASN1Type type = asn1codec::asn1::ASN1Type::RealType;
  CHECK(9 == static_cast<int>(type));
}
