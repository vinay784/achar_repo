#include <iostream>

using namespace std;

class DemoClass{

public:
    void Display()
{
 cout<<"Display function printed"<<endl;
}

};

int main()
{
DemoClass DemoObj_0;
DemoClass *DemoObj=new DemoClass();
    DemoObj->Display();
    delete DemoObj;
    return 0;
}
