#pragma once

#include <voe/defs.hpp>

// Primitives
#include <voe/primitive/BaseObject.hpp>


// Core types
#include "voe/core/world.hpp"

namespace voe {

class Engine {
private:
  World world;

public:
  World &get_world() { return world; }
};

} // namespace voe
