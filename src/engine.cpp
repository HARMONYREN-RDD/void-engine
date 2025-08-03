#include <voe/engine.hpp>

#include <harmonyren/utils/log.hpp>

namespace voe {
Engine::Engine() {}

void Engine::add_object(String label, Object *object) {
  objects[label] = object;
}

bool Engine::object_exists(String label) {
  return objects.find(label) != objects.end();
}

Object *Engine::get_object(String label) {
  log::fatal_error(!this->object_exists(label),
                   "Object '" + label + "' not found");
  return objects[label];
}

u64 Engine::get_object_count() const { return objects.size(); }

void Engine::start_rendering() {

}

} // namespace voe