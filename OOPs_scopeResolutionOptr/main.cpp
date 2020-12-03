#include<iostream>
#include<string>
using namespace std;


//Scope resolution operator can do following things:
//1. It can help to access a static variable of a class outside of it.
//2.it can help to access any member functions outside the class.
//class Parent1
//{
//protected:
//int num;
//public:
//Parent1() { num = 100; }
//};
//class Parent2
//{
//protected:
//int num;
//public:
//Parent2() { num = 200; }
//};
//class Child: public Parent1, public Parent2
//{
//public:
//void function()
//{
//cout << "Parent1's num is " << Parent1::num<<endl;;
//cout << "and Parent2's num is " << Parent2::num<<endl;;
//}
//};
//int main()
//{
//Child obj;
//obj.function();
//return 0;
//}

//Access specifiers in Detail

//Private Access specifier, the concept of encapsulation is is due to private access specifier
//Below is the example to understand this concept.
// in this code we are encapsulating the data of a member salary.


/*class Employee
{
private:
    double salary=5000; //As this variable is declared as private nobody can access this variable directly
public:
    void setSalary(double s)
    {
        salary=s;  //This method is useful to indirectly accessthe private variable
    }

    double getSalary()
    {
        return salary;  //returning the assigned variable
    }
};

int main()
{

    Employee obj;  //obj is an object of type Employee (class), which means obj can be used to access the information and modify the information of that particualr class.
    obj.setSalary(10000);// this is called a  parameterized constructor, which when initialized allocates the memory for a class
    cout<<"salary is :"<<obj.getSalary();
    return 0;
}*/



//Inheritence
//class Employee
//{
//private:
//    double salary=5000; //As this variable is declared as private nobody can access this variable directly
//public:
//    void setSalary(double s)
//    {
//        salary=s;  //This method is useful to indirectly accessthe private variable
//    }

//    double getSalary()
//    {
//        return salary;  //returning the assigned variable
//    }
//};

//class Employeer: public Employee
//{

//public:
//       string companyName="Amazon.com";
//       void payDetail(double s)
//{
//    s=450000;
//    cout<<"My salary in "<<companyName <<"is:" <<s<<endl;

//}

//};

//int main()
//{

//    Employeer obj;  //obj is an object of type Employee (class), which means obj can be used to access the information and modify the information of that particualr class.
//    obj.setSalary(45000);
//    obj.getSalary();
//    obj.payDetail(4555);
//    //cout<<"Revised pay:"<<obj.payDetail()<<endl;
//    return 0;
//}



#include<iostream>
using namespace std;
class Animal{
public:
   //Pure Virtual Function
   virtual void sound() = 0;

   //Normal member Function
   void sleeping() {
      cout<<"Sleeping";
   }
};



class Dog: public Animal{
public:
   void sound() {
      cout<<"Woof"<<endl;
   }
};


int main(){
    Animal *obj=new Dog();
    obj->sound();
    obj->sleeping();
    cout<<endl;
    return 0;



//   Dog obj;
//   obj.sound();
//   obj.sleeping();
   return 0;
}
