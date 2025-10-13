#pragma once

#include <voe/defs.hpp>

// Primitives
#include <voe/primitive/BaseObject.hpp>
#include <voe/primitive/Coordinate2D.hpp>

namespace voe {

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

} // namespace voe
