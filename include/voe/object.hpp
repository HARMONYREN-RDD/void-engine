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
  Coordinate position;

public:
  Object(const Coordinate &position);

  const Coordinate &get_position() const;
  void set_position(const Coordinate &position);

  virtual void update() = 0;
  virtual void render() = 0;
};

} // namespace voe

#endif