#include <iostream>
#include <string>

class AbstractDrinking
{
public:
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void PourInCup() = 0;
    virtual void PutSomething() = 0;
    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

class Coffee:public AbstractDrinking
{
    virtual void Boil()
    {
        std::cout << "boil" << std::endl;
    }
    virtual void Brew()
    {
        std::cout << "brewcoffee" << std::endl;
    }
    virtual void PourInCup()
    {
        std::cout << "pourincup" << std::endl;
    }
    virtual void PutSomething()
    {
        std::cout << "putsugarandmilk" << std::endl;
    }
};
class Tea:public AbstractDrinking
{
    virtual void Boil()
    {
        std::cout << "boil" << std::endl;
    }
    virtual void Brew()
    {
        std::cout << "brewtea" << std::endl;
    }
    virtual void PourInCup()
    {
        std::cout << "pourincup" << std::endl;
    }
    virtual void PutSomething()
    {
        std::cout << "putlemon" << std::endl;
    }
};

void doWork(AbstractDrinking *abs)
{
    abs->makeDrink();
    delete abs;
}

void test01()
{
    doWork(new Coffee);
    doWork(new Tea);
}

int main()
{
    test01();

    system("pause");
    return 0;
}