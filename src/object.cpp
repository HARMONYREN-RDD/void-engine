#include <voe/object.hpp>

namespace voe {

String &Object::get_name() { return name; }
Coordinate &Object::get_position() { return position; }

} // namespace voe