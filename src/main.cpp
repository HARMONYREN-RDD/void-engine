#include "voe/object.hpp"
#include <iostream>

int main() {

  voe::Object obj("test", {1, 2, 3});

  std::cout << obj.get_name() << std::endl;
  std::cout << obj.get_position().x << std::endl;
  std::cout << obj.get_position().y << std::endl;
  std::cout << obj.get_position().z << std::endl;


  return 0;
}