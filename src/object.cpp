#include <voe/object.hpp>

namespace voe {

Object::Object(const Coordinate &position) : position(position) {}

const Coordinate &Object::get_position() const { return position; }

void Object::set_position(const Coordinate &position) {
  this->position = position;
}

} // namespace voe
