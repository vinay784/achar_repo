#include <iostream>
using namespace std;

class cars{

    private:
        double Price;
        string name;
    public:

        cars(){

            cout<<"Default constrctor called"<<endl;
        }
         ~cars(){
            cout<<" Destructor called"<<endl;
        }
        void NameoftheCar(string Name){
            name=Name;
          cout<<"name of the car is "<<name<<endl;

        }
        virtual void PriceOfthecar(double price){

            Price=price;
            cout<<"Price of the car is:"<<Price<<endl;
        }

};

class trucks:public cars
{
public:
    trucks(){
        cout<<"Derived class construtor"<<endl;
    }
    ~trucks(){

        cout<<"Derived class destructor called"<<endl;
    }
    void Priceofthecar(double price){
        cout<<price<<endl;
    }
    void nameofthetruck(string name)
    {
        cout<<"name of the truck is :"<<name<<endl;
    }


};
int main()
{
    cars *T=new trucks;
//     T->NameoftheCar("BMW i8 concept");
//     T->PriceOfthecar(250000);

    delete T;


    return 0;
}
