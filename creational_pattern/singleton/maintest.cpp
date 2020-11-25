#include "singleton.h"
int main(){
    Singleton *ps=Singleton::getInstance();
    ps->singletonOperation();
    return 0;
}