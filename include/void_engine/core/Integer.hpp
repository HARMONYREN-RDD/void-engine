#pragma once

#include <vector>

#include <void_engine/defs.hpp>

namespace void_engine {

class Integer {
  private:
    std::vector<u8> data;

  public:
    Integer(const std::vector<u8> &data) : data(data) {}
  };
  
}
