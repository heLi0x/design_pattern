#include "factory.h"
int main(){
    Factory fac;
    Product* p;
    p=fac.createProduct("A");
    p->use();
    p=fac.createProduct("B");
    p->use();
    return 0;
}