#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "pizza.h"
#include "pepperonipizza.h"
#include "chilipizza.h"

class simplepizzafactory {
public:
    simplepizzafactory();
    pizza* createPizza(QString type);
};

#endif // SIMPLEPIZZAFACTORY_H
