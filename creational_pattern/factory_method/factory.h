#ifndef _FACTORY_METHOD_FACTORY_H
#define _FACTORY_METHOD_FACTORY_H
#include "product.h"
#include <string>
class Factory{
public:
    Factory();
    virtual Product* factoryMethod()=0;
};
class ConcreteFactoryA: public Factory{
public:    
    ConcreteFactoryA();
    Product* factoryMethod();
};
class ConcreteFactoryB: public Factory{
public:    
    ConcreteFactoryB();
    Product* factoryMethod();
};
#endif