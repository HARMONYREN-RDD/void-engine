#pragma once

#include <string>

#include <array>
#include <vector>

#include <cstdint>

namespace voe {

template <typename T> using Vector = std::vector<T>;
template <typename T, std::size_t N> using Array = std::array<T, N>;

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using i8 = std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;
using i64 = std::int64_t;

using f32 = float;  // 7 digits of precision
using f64 = double; // 15 digits of precision

using std::string;

} // namespace voe
