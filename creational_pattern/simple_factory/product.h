#ifndef _SIMPLE_FACTORY_PRODUCT_H_
#define _SIMPLE_FACTORY_PRODUCT_H_
#include<iostream>
class Product{
public:
    Product();
    virtual void use()=0;
};
class ConcreteProductA:public Product{
public:
    ConcreteProductA();
    void use();
};
class ConcreteProductB:public Product{
public:
    ConcreteProductB();
    void use();
};
#endif