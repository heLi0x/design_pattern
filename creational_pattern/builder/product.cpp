#include "product.h"
#include<iostream>
Product::Product(){
}
void Product::setA(std::string s){
    partA=s;
}
void Product::setB(std::string s){
    partB=s;
}
void Product::setC(std::string s){
    partC=s;
}
void Product::show(){
    std::cout<<"partA is "<<partA<<std::endl;
    std::cout<<"partB is "<<partB<<std::endl;
    std::cout<<"partC is "<<partC<<std::endl;
}