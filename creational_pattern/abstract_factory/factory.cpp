#include "factory.h"
Factory::Factory(){
    std::cout<<"Build a Factory"<<std::endl;
}
ConcreteFactory1::ConcreteFactory1(){
    std::cout<<"Build a ConcreteFactoryA"<<std::endl;
}
AbstractProductA* ConcreteFactory1::createProductA(){
    return new ProductA1();
}
AbstractProductB* ConcreteFactory1::createProductB(){
    return new ProductB1();
}
ConcreteFactory2::ConcreteFactory2(){
    std::cout<<"Build a ConcreteFactoryB"<<std::endl;
}
AbstractProductA* ConcreteFactory2::createProductA(){
    return new ProductA2();
}
AbstractProductB* ConcreteFactory2::createProductB(){
    return new ProductB2();
}