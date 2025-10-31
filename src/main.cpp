#include <void_engine/voe.hpp>

int main() {
  void_engine::Engine engine;
  void_engine::World *world = &engine.get_world();
  void_engine::Object2D *obj = new void_engine::Object2D("This is a test object", {0, 0});
  world->add_object(1, obj);

  std::cout << world->get_object(1)->get_label() << std::endl;

  return 0;
}
