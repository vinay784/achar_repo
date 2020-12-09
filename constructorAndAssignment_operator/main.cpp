#include <iostream>

using namespace std;

class DemoClass{


private:
    string name;
    int age;
    double height;
    string Designation;

    public:
    DemoClass(string Myname,int Myage,double Myheight,string MyDesignation){
        name=Myname;
        age=Myage;
        height=Myheight;
        Designation=MyDesignation;
    }
    ~DemoClass(){}

    DemoClass(DemoClass  &obj){

        name=obj.name;
        age=obj.age;
        height=obj.height;
        Designation=obj.Designation;


    }



    void Display()
    {
        cout<<"My name is :"<<name<<endl;
        cout<<"My age is :"<<age<<endl;
        cout<<"My height is :"<<height<<endl;
        cout<<"My designation is:"<<Designation<<endl;
    }
};


int main()
{
DemoClass DemoObj("Vinay",24,5.10,"Engineer");
DemoClass copyVariable(DemoObj); //copy cconstructor
DemoClass Assignmentvariable=DemoObj;  //Assignment operator
Assignmentvariable.Display();

return 0;

}
