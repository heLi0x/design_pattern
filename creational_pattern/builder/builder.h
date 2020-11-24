#ifndef _BUILDER_BUILDER_H
#define _BUILDER_BUILDER_H
#include "product.h"
#include <string>
class Builder{
public:
    virtual void buildPartA(std::string s)=0;
    virtual void buildPartB(std::string s)=0;
    virtual void buildPartC(std::string s)=0;
    virtual Product* getProduct()=0;
};
class ConcreteBuilder:public Builder{
private:
    Product* p;
public:
    ConcreteBuilder();
    void buildPartA(std::string s);
    void buildPartB(std::string s);
    void buildPartC(std::string s);
    Product* getProduct();
};
#endif
