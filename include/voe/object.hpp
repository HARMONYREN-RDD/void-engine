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
  Object(const String &name, const Coordinate &position);

  const String &get_name() const;
  const Coordinate &get_position() const;

  void set_name(const String &name);
  void set_position(const Coordinate &position);
};

} // namespace voe

#endif