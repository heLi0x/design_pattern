#ifndef _ABSTRACT_FACTORY_FACTORY_H
#define _ABSTRACT_FACTORY_FACTORY_H
#include "product.h"
#include <string>
class Factory{
public:
    Factory();
    virtual AbstractProductA* createProductA()=0;
    virtual AbstractProductB* createProductB()=0;
};
class ConcreteFactory1: public Factory{     //Product family 1
public:    
    ConcreteFactory1();
    AbstractProductA* createProductA();
    AbstractProductB* createProductB();
};
class ConcreteFactory2: public Factory{     //Product family 2
public:    
    ConcreteFactory2();
    AbstractProductA* createProductA();
    AbstractProductB* createProductB();
};
#endif