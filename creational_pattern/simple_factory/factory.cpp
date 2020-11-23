#include "factory.h"
Factory::Factory(){
    std::cout<<"Build a Factory"<<std::endl;
}
Product* Factory::createProduct(std::string s){
    Product* p;
    if(s=="A"){
        p=new ConcreteProductA();
    }else if(s=="B"){
        p=new ConcreteProductB();
    }else{
        p=nullptr;
    }
    return p;
}