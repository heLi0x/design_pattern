#ifndef _ABSTRACT_FACTORY_PRODUCT_H_
#define _ABSTRACT_FACTORY_PRODUCT_H_
#include<iostream>
class AbstractProductA{
public:
    AbstractProductA();
    virtual void use()=0;
};
class AbstractProductB{
public:
    AbstractProductB();
    virtual void eat()=0;
};
class ProductA1:public AbstractProductA{
public:
    ProductA1();
    void use();
};
class ProductA2:public AbstractProductA{
public:
    ProductA2();
    void use();
};
class ProductB1:public AbstractProductB{
public:
    ProductB1();
    void eat();
};
class ProductB2:public AbstractProductB{
public:
    ProductB2();
    void eat();
};
#endif