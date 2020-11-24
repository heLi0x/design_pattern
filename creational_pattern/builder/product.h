#ifndef _BUILDER_PRODUCT_H
#define _BUILDER_PRODUCT_H
#include<string>
class Product{
private:
    std::string partA;
    std::string partB;
    std::string partC;
public:
    Product();
    void setA(std::string s);
    void setB(std::string s);
    void setC(std::string s);
    void show();
};
#endif