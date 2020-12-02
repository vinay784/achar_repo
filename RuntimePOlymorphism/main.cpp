//#include<iostream>
// using namespace std;
//class base{

// public:
//    virtual void  print()
//    {

//        cout<<"You are in virtual print function good luck "<<endl;
//    }
// void show()
//    {
//        cout<<"You are in show functions"<<endl;
//    }


//};

//class derived: public base{

//public:
//void print()
//    {

//        cout<<"You are in derived print"<<endl;
//    }
//  void show()
//    {

//        cout<<"You are in derived show function"<<endl;
//    }

//};

//int main()
//{

//    base *ptr=new derived();
//ptr->show();
//ptr->print();
//    /*base *Bptr;
//    derived D;
//    Bptr=&D;

//    Bptr->show();
//    Bptr->print();*/

//    return 0;
//}



#include <string.h>
#include <iostream>
using namespace std;
int main(){
   char *str="Vinay AChar";
   cout<<"original string::"<<str<<endl;
   cout<<endl<<"String after reverse:";
   for(int i=(strlen(str)-1);i>=0;i--){
      cout<<str[i];
   }
   return 0;
}
