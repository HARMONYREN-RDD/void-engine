#include <void_engine/objects/2D/Object2D.hpp>

namespace void_engine {

class Point2D : public Object2D {
public:
  Point2D(const string &label, const Coordinate2D &position)
      : Object2D(label, position) {}
  virtual ~Point2D() = default;
};

} // namespace void_engine