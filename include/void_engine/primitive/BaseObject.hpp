#pragma once

#include <void_engine/defs.hpp>

namespace void_engine {

class BaseObject {
private:
  string label;

public:
  BaseObject(const string &label) : label(label) {}
  virtual ~BaseObject() = default;

  void set_label(const string &label) { this->label = label; }
  const string &get_label() const { return label; }
};

} // namespace void_engine
