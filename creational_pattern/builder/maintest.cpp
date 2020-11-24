#include "director.h"
#include <iostream>
int main(){
    Director* dir=new Director();
    Builder* bder=new ConcreteBuilder();
    Product* product;
    dir->setBuilder(bder);
    product=dir->construct();
    product->show();
    return 0;
}