#include <iostream>
using namespace std;

class Queue{
private:
    int arr[5];
    int RearEnd=-1;
    int FrontEnd=-1;

public:

    Queue(){
           for(int i=0;i<5;i++)
           {
               arr[i]=0;
               cout<<endl;
           }

    }
    bool isEmpty(){
        if(RearEnd==-1 && FrontEnd==-1)
            return true;
        else
            return false;

    }
    bool isFull(){

        if(RearEnd==4)
            return true;
        else
            return false;
    }
    void Enqueue(int val){
        if(isFull()){
            cout<<"Queue is Full try Dequeing first "<<endl;
            return;
        }
        else if(isEmpty()){
            cout<<"Queue is empty:"<<endl;
            RearEnd=0;
            arr[RearEnd]=val;
            cout<<"Value will be pushed at : "<<RearEnd<<endl;
            return ;
        }
        else{
            cout<<"Queue is not empty:"<<endl;
            RearEnd++;
            arr[RearEnd]=val;
            cout<<"Value pushed at "<<RearEnd<<endl;
        }

    }
    int Dequeue(){

        if(isEmpty()){
            FrontEnd=0;
            arr[FrontEnd]=0;
            return 0;

        }
        else if(isFull()){

            arr[RearEnd]=0;
            return 0;
        }
        else{

            FrontEnd=RearEnd;
            arr[FrontEnd]=0;
           // FrontEnd++;
            return 0;

        }

    }
    int count(){

        return (FrontEnd-RearEnd+1);
    }


};

int main()
{
    Queue q1;
     int value, option;

     do {
       cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
       cout << "1. Enqueue()" << endl;
       cout << "2. Dequeue()" << endl;
       cout << "3. isEmpty()" << endl;
       cout << "4. isFull()" << endl;
       cout << "5. count()" << endl;

       cout << "6. Clear Screen" << endl << endl;

       cin >> option;

       switch (option) {
       case 0:
         break;
       case 1:
         cin>>value;
         q1.Enqueue(value);
         break;
       case 2:
         q1.Dequeue();
         cout<<"Dequed value "<<endl;
         break;
       case 3:
         if (q1.isEmpty())
           cout << "Queue is Empty" << endl;
         else
           cout << "Queue is not Empty" << endl;
         break;
       case 4:
         if (q1.isFull())
           cout << "Queue is Full" << endl;
         else
           cout << "Queue is not Full" << endl;
         break;
       case 5:
         cout << "Count Operation \nCount of items in Queue : " << q1.count() << endl;
         break;
       case 6:
         system("cls");
         break;
       default:
         cout << "Enter Proper Option number " << endl;
       }

     } while (option != 0);

     return 0;
   }
