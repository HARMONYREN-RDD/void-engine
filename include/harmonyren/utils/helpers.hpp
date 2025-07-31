#ifndef HARMONYREN_UTILS_HELPERS_HPP
#define HARMONYREN_UTILS_HELPERS_HPP

#include <harmonyren/utils/types.hpp>

namespace harmonyren::utils {

template <typename T> bool if_element_in_vector(T element, Vector<T> vector) {
  for (T item : vector) {
    if (item == element) {
      return true;
    }
  }
  return false;
}

String bytes_to_hex_string(const Vector<u8> &bytes);

}

#endif