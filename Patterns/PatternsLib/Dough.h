#pragma once
#include <string>


namespace Patterns {

  class Dough {
  public:
    virtual std::string toString() = 0;
    virtual ~Dough(){}
  };

}  // namespace Patterns