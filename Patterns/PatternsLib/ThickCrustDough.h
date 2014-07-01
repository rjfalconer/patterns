#pragma once
#include "PatternsLib/Dough.h"

namespace Patterns {

  class ThickCrustDough : public Dough {
  public:
    std::string toString() const override { return "Thick Crust Dough"; }
  };

}  // namespace Patterns