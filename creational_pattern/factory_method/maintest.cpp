#include "factory.h"
int main(){
    Factory *fac;
    Product* p;
    fac=new ConcreteFactoryA();
    p=fac->factoryMethod();
    fac=new ConcreteFactoryB();
    p=fac->factoryMethod();
    return 0;
}