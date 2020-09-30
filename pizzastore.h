#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "simplepizzafactory.h"

class pizzastore {
simplepizzafactory* factory;
public:
    pizzastore(simplepizzafactory *f);
    pizza* orderPizza(QString type);
};

#endif // PIZZASTORE_H
