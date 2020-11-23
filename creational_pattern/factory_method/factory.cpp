#include "factory.h"
Factory::Factory(){
    std::cout<<"Build a Factory"<<std::endl;
}
ConcreteFactoryA::ConcreteFactoryA(){
    std::cout<<"Build a ConcreteFactoryA"<<std::endl;
}
Product* ConcreteFactoryA::factoryMethod(){
    return new ConcreteProductA();
}
ConcreteFactoryB::ConcreteFactoryB(){
    std::cout<<"Build a ConcreteFactoryB"<<std::endl;
}
Product* ConcreteFactoryB::factoryMethod(){
    return new ConcreteProductB();
}