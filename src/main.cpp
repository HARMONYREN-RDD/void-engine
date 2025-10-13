#include <voe/voe.hpp>

int main() {
  voe::Engine engine;
  voe::World *world = &engine.get_world();
  voe::Object2D *obj = new voe::Object2D("This is a test object", {0, 0});
  world->add_object(1, obj);

  std::cout << world->get_object(1)->get_label() << std::endl;

  return 0;
}
