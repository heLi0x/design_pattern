#include "singleton.h"
#include <iostream>
Singleton::Singleton(){

}
Singleton::~Singleton(){
    delete instance;
}
Singleton* Singleton::getInstance(){
    if(!instance){
        //Lock()
        if(!Singleton::instance){
            instance=new Singleton();
        }
        //Unlock()
    }
    return instance;
}
void Singleton::singletonOperation(){
   std::cout<<"SingletonOp"<<std::endl;
}
