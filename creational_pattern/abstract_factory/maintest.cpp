#include "factory.h"
int main(){
    Factory *fac;
    AbstractProductA* pa;
    AbstractProductB* pb;
    fac=new ConcreteFactory1();
    pa=fac->createProductA();
    pb=fac->createProductB();
    fac=new ConcreteFactory2();
    pa=fac->createProductA();
    pb=fac->createProductB();
    return 0;
}