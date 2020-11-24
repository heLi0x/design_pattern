#include "product.h"
AbstractProductA::AbstractProductA(){
}
AbstractProductB::AbstractProductB(){
}
ProductA1::ProductA1(){
    std::cout<<"Init ProductA1"<<std::endl;
}
void ProductA1::use(){
    std::cout<<"using ProductA1"<<std::endl;
}
ProductA2::ProductA2(){
    std::cout<<"Init ProductA2"<<std::endl;
}
void ProductA2::use(){
    std::cout<<"using ProductA2"<<std::endl;
}
ProductB1::ProductB1(){
    std::cout<<"Init ProductB1"<<std::endl;
}
void ProductB1::eat(){
    std::cout<<"eating ProductB1"<<std::endl;
}
ProductB2::ProductB2(){
    std::cout<<"Init ProductB2"<<std::endl;
}
void ProductB2::eat(){
    std::cout<<"eating ProductB2"<<std::endl;
}