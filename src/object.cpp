#include <voe/object.hpp>

namespace voe {

Object::Object(const String &name, const Coordinate &position)
    : name(name), position(position) {}

const String &Object::get_name() const { return name; }
const Coordinate &Object::get_position() const { return position; }

void Object::set_name(const String &name) { this->name = name; }
void Object::set_position(const Coordinate &position) {
  this->position = position;
}

} // namespace voe