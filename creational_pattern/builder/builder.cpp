#include "builder.h"
#include <iostream>
ConcreteBuilder::ConcreteBuilder(){
    std::cout<<"Init a ConcreteBuilder"<<std::endl;
    p=new Product();
}
void ConcreteBuilder::buildPartA(std::string a){
    p->setA(a);
}
void ConcreteBuilder::buildPartB(std::string b){
    p->setB(b);
}
void ConcreteBuilder::buildPartC(std::string c){
    p->setC(c);
}
Product* ConcreteBuilder::getProduct(){
    return p;
}