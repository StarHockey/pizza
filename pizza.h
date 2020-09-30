#ifndef PIZZA_H
#define PIZZA_H
#include <QStringList>
#include <iostream>

using namespace std;


class pizza {
protected:
    QString name;
    QString dough;
    QString sauce;
    QStringList *toppings;
public:
    pizza();
    virtual ~pizza();
    virtual QString getName();
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();
    virtual QString toString();
};

#endif // PIZZA_H
