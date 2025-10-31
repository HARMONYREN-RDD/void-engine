#pragma once

#include <void_engine/defs.hpp>

// Primitives
#include <void_engine/primitive/BaseObject.hpp>


// Core types
#include "void_engine/core/world.hpp"

namespace void_engine {

class Engine {
private:
  World world;

public:
  World &get_world() { return world; }
};

} // namespace void_engine
