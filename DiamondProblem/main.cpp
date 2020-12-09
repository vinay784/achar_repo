#include <iostream>

using namespace std;

class base{

 public:
       void fun()

    {
        cout<<"PArent class function called"<<endl;
    }
};
class derived_1: virtual public base
{
public:
     void fun()
    {
        cout<<"First base class function called"<<endl;
    }

};
class derived_2: virtual public  base{
public:
     void fun()
    {
        cout<<"Second derived class function called"<<endl;
    }
};

 class derived_3:public derived_1,public derived_2{

 public:
     void fun1()
     {
         cout<<"Third derived class function called"<<endl;
     }

 };
int main()
{
    derived_3 obj;
    obj.fun();
    return 0;
}
