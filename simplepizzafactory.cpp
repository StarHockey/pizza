#include "simplepizzafactory.h"

simplepizzafactory::simplepizzafactory() {

}

pizza* simplepizzafactory::createPizza(QString type) {
    pizza *pizza = nullptr;

if (type == "pepperoni") {
    pizza = new pepperonipizza();
}
else if (type == "chili") {
    pizza = new ChiliPizza();
}
    return pizza;

}
