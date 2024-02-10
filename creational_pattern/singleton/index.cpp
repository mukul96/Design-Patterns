#include <iostream>
using namespace std;

class Singleton
{
private:
    /* data */
    // Singleton as instance;
    Singleton(/* args */);

public:
    ~Singleton();
    // static members can only be private
    static Singleton *instancePtr;
    static Singleton getInstance()
    {
        if (Singleton::instancePtr == NULL)
        {
            Singleton::instancePtr = new Singleton();
            cout << "Singelton class object assigned " << endl;
        }
        return *Singleton::instancePtr;
    }
};

Singleton::Singleton(/* args */)
{

    cout << "singleton class initialised " << endl;
}

Singleton::~Singleton()
{
}

// not allowed inside function that's why initialised here
Singleton *Singleton ::instancePtr = NULL;

int main()
{

    // auto singletonObject = new Singleton();
    Singleton singletonInstance = Singleton::getInstance();
    return 0;
}