#ifndef VOID_ENGINE_OBJECT_HPP
#define VOID_ENGINE_OBJECT_HPP

#include <harmonyren/utils/types.hpp>

namespace voe {

using namespace harmonyren::utils;

struct Coordinate {
  i64 x = 0;
  i64 y = 0;
  i64 z = 0;
};

class Object {
private:
  String name;
  Coordinate position;

public:
  Object(String name, Coordinate position);

  String &get_name();
  Coordinate &get_position();

};

} // namespace voe

#endif