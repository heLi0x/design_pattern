#ifndef _SINGLETON_SINGLETON_H
#define _SINGLETON_SINGLETON_H
class Singleton{
private:
    Singleton();
    static Singleton* instance;
public:
    static Singleton* getInstance();
    static void singletonOperation();
    ~Singleton();
};
Singleton* Singleton::instance = nullptr;
#endif