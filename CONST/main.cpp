#include <iostream>

using namespace std;

int main()
{
     int a=10;
    //a=3;
      int* const  b=new int;
     *b=10;
     b=(int *)&a;
    cout<<"The value of b :"<<*b<<endl;
    return 0;
}
