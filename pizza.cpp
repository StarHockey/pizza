#include "pizza.h"

pizza::pizza() {
    toppings = new QStringList();
}

pizza::~pizza() {
    delete toppings;
}

QString pizza::getName() {
    return name;
}

void pizza::prepare() {
    cout << "\tPreparing" << name.toStdString() << endl;
}

void pizza::bake() {
    cout << "\tBaking" << name.toStdString() << endl;
}

void pizza::cut() {
    cout << "\tCutting" << name.toStdString() << endl;
}

void pizza::box() {
    cout << "\tBoxing" << name.toStdString() << endl;
}

QString pizza::toString() {
    //code to display pizza name and ingredients
    QString str = "-----" + name + "----\n";
    str.append(dough + "\n");
    str.append(sauce + "\n");
    for (int i = 0; i < toppings->size(); i++ ) {
        str.append(toppings->at(i) + "\n");
    }
    return str;
}
