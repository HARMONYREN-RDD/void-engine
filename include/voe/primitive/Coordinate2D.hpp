#pragma once

#include <voe/defs.hpp>

namespace voe {

class Coordinate2D {
private:
  i64 x;
  i64 y;

public:
  Coordinate2D(i64 x = 0, i64 y = 0) : x(x), y(y) {}

  // Setters and getters
  void set_x(i64 x) { this->x = x; }
  const i64 &get_x() const { return x; }

  void set_y(i64 y) { this->y = y; }
  const i64 &get_y() const { return y; }

  // Member operators
  Coordinate2D operator+(const Coordinate2D &other) const {
    return Coordinate2D(x + other.x, y + other.y);
  }

  Coordinate2D &operator+=(const Coordinate2D &other) {
    x += other.x;
    y += other.y;
    return *this;
  }

  Coordinate2D operator-(const Coordinate2D &other) const {
    return Coordinate2D(x - other.x, y - other.y);
  }

  Coordinate2D &operator-=(const Coordinate2D &other) {
    x -= other.x;
    y -= other.y;
    return *this;
  }

  bool operator==(const Coordinate2D &other) const {
    return x == other.x && y == other.y;
  }

  bool operator!=(const Coordinate2D &other) const { return !(*this == other); }
};

} // namespace voe
