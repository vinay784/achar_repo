#include <iostream>
#include <string>
using namespace std;
class employee{

   int empId;
   string name;
   double salary,basic,allowances;

   double calculateSalary(int)
   {
   salary = basic+allowances;
   return salary;

   }

public:
employee(int empId, string name,double basic,double allowances)   //:empId(empId),name(name),basic(basic),allowances(allowances)

{
    this->empId=empId;
    this->name=name;
    this->basic=basic;
    this->allowances=allowances;
   calculateSalary(empId);
}

void display(){

   cout<<"EmpId = "<<empId<<"\tName = "<<name<<endl;
   cout<<"Employee Salary = "<<salary;

}
};
int main()
{
   employee emp(1,"Ved",1000,50);
   emp.display();

}







//#include <iostream>
//#include <cstdio>

//using namespace  std;
//class Box
//{
//   public:
//      Box() {
//         cout << "Constructor is called!" <<endl;

//      }
//      void display()
//      {
//          cout<<"Hey print me in "<<endl;

//      }
//      ~Box() {
//         cout << "Destructor is called!" <<endl;
//      }
//};

//int main( )
//{
//   Box* myBoxArray = new Box[2];
//myBoxArray->display();
//   delete [] myBoxArray; // Delete array

//}
