class Func
{
    float Value;
public:
    float fMax;
    Func(float v);
    float getValue();
    void copyFunc(Func& other);
protected:
    int fType;
private:
    int fId;
};

Func::Func(float v)
{
    Value = v;
    fMax = v;
}

float Func::getValue()
{
    return Value;
}

void Func::copyFunc(Func& other)
{
    Value = other.Value;
    fType = other.fType;
    fId = other.fId;
}

//////////////////////////////////
class sFunc: public Func
{
public:
    sFunc(float v): Func(v) {};
    int getType();
    void copyType(Func& other);
    int getId();
};

int sFunc::getType()
{
    return fType; // RIGHT
}

void sFunc::copyType(Func& other)
{
    fMax = other.fMax; // RIGHT
    //fType = other.fType; // WRONG compile
}

int sFunc::getId()
{
    return 0;//return fId; // WRONG compile
}

#include <iostream>
using namespace std;
int main()
{
    cout << endl << "Example simulate access data... accessDataExample.cpp" << endl;
    Func f1(8); sFunc f2(11);
    //f1.Value = 2; // WRONG compile
    f2.fMax = 7;
    cout << f1.getValue() << endl;
    cout << f2.getValue() << endl;
    return 0;
}
