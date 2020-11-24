#include "builder.h"
class Director{
private:
    Builder* builder;
public:
    Product* construct();
    void setBuilder(Builder* bder);
};
Product* Director::construct(){
    builder->buildPartA("CPU");
    builder->buildPartB("Display");
    builder->buildPartC("Keyboard");
    return builder->getProduct();
}
void Director::setBuilder(Builder* bder){
    builder=bder;
}