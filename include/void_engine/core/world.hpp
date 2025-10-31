#pragma once

#include <void_engine/defs.hpp>

// Primitives
#include <void_engine/primitive/BaseObject.hpp>

#include <unordered_map>

namespace void_engine {

class World {
private:
  std::unordered_map<u32, BaseObject *> objects;

public:
  void add_object(u32 id, BaseObject *obj) { objects[id] = obj; }

  BaseObject *get_object(u32 id) const {
    auto it = objects.find(id);
    return it != objects.end() ? it->second : nullptr;
  }

  void remove_object(u32 id) {
    auto it = objects.find(id);
    if (it != objects.end()) {
      delete it->second;
      objects.erase(it);
    }
  }

  ~World() {
    for (auto &[id, obj] : objects) {
      delete obj;
    }
  }
};

} // namespace void_engine
