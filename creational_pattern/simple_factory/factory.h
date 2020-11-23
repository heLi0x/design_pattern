#ifndef _SIMPLE_FACTORY_FACTORY_H
#define _SIMPLE_FACTORY_FACTORY_H
#include "product.h"
#include <string>
class Factory{
public:
    Factory();
    Product* createProduct(std::string);
};
#endif