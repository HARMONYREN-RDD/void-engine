#ifndef HARMONYREN_CRYPTO_DILITHIUM_HPP
#define HARMONYREN_CRYPTO_DILITHIUM_HPP

#include <harmonyren/utils/types.hpp>

namespace harmonyren {

namespace crypto {
using namespace harmonyren::utils;

constexpr const u16 DILITHIUM5_SECRET_KEY_BYTE_SIZE = 4896;
constexpr const u16 DILITHIUM5_PUBLIC_KEY_BYTE_SIZE = 2592;
constexpr const u16 DILITHIUM5_SIGNATURE_BYTE_SIZE = 4627;

using Dilithium5SecretKey = Array<u8, DILITHIUM5_SECRET_KEY_BYTE_SIZE>;
using Dilithium5PublicKey = Array<u8, DILITHIUM5_PUBLIC_KEY_BYTE_SIZE>;
using Dilithium5Signature = Array<u8, DILITHIUM5_SIGNATURE_BYTE_SIZE>;

struct Dilithium5Keypair {
  Dilithium5SecretKey secret_key;
  Dilithium5PublicKey public_key;
};

} // namespace crypto

} // namespace harmonyren

#endif