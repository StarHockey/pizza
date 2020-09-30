#include "pizzastore.h"

pizzastore::pizzastore(simplepizzafactory *f) {
    this->factory = f;
}

pizza* pizzastore::orderPizza(QString type) {
    pizza *pizza = factory->createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;

}
