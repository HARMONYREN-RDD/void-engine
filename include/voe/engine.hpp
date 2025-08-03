#ifndef VOID_ENGINE_ENGINE_HPP
#define VOID_ENGINE_ENGINE_HPP

#include <voe/object.hpp>

namespace voe {

class Engine {
private:
  Map<String, Object *> objects;

public:
  Engine();

  void add_object(String label, Object *object);
  bool object_exists(String label);
  Object *get_object(String label);
  u64 get_object_count() const;

  void start_rendering();
};

} // namespace voe

#endif