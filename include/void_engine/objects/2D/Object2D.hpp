#pragma once

#include <void_engine/defs.hpp>

// Primitives
#include <void_engine/primitive/BaseObject.hpp>
#include <void_engine/primitive/Coordinate2D.hpp>

namespace void_engine {

class Object2D : public BaseObject {
private:
  Coordinate2D position;

public:
  Object2D(const string &label, const Coordinate2D &position)
      : BaseObject(label), position(position) {}

  virtual ~Object2D() = default;

  void set_position(const Coordinate2D &position) { this->position = position; }
  const Coordinate2D &get_position() const { return position; }
};

} // namespace void_engine
