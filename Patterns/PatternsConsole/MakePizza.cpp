#include "PatternsConsole/MakePizza.h"
#include "PatternsLib/Pizza/PizzaStore.h"
#include "PatternsLib/Pizza/Pizza.h"

#include <iostream>
#include <memory>

namespace Patterns {
  void makePizza() {

    PizzaStore pizza_store;
    auto pizza1 = pizza_store.orderPizza("cheese");
    auto pizza2 = pizza_store.orderPizza("pepperoni");

  }
}  // namspace Patterns