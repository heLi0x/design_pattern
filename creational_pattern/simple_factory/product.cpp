#include "product.h"
Product::Product(){
    std::cout<<"Init Product"<<std::endl;
}
ConcreteProductA::ConcreteProductA(){
    std::cout<<"Init ConcreteProductA"<<std::endl;
}
void ConcreteProductA::use(){
    std::cout<<"using ConcreteProductA"<<std::endl;
}
ConcreteProductB::ConcreteProductB(){
    std::cout<<"Init ConcreteProductB"<<std::endl;
}
void ConcreteProductB::use(){
    std::cout<<"using ConcreteProductB"<<std::endl;
}